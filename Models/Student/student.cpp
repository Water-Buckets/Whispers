#include "student.h"
#include "../../utils/Const.h"
#include "../Classroom/classroom.h"
#include <random>


void Student::update() {
    unsigned n = 0;//周围讲话者
    //计算周围讲话者
    for (int p = std::max(0, blockStatus->pos.x - 1); p <= std::min(5, blockStatus->pos.x + 1); ++p) {
        for (int q = std::max(0, blockStatus->pos.y - 1); q <= std::min(5, blockStatus->pos.y + 1); ++q) {
            if (p != blockStatus->pos.x && q != blockStatus->pos.y &&
                blockStatus->classroom->getStatus().at(p).at(q).student->isSpeaking()) {
                ++n;
            }
        }
    }
    //计算阈值 S
    threshold = alpha1 * pow(2, innerFact[AUTHSENSITIVITY] - 1) * blockStatus->authDeterrent
                + alpha2 * innerFact[SELFCONTROL]
                + alpha3 * innerFact[CONSCIENTIOUSNESS];
    //计算讲话倾向Bo
    value = pow(2, innerFact[ENVSENSITIVITY] - 1)
            * (beta1 * blockStatus->attractiveness / (n == 0 ? 1 : n) + beta2 * blockStatus->volume)
            + accumF + deltaS;
    //随机数生成器
    std::bernoulli_distribution u(1.0 / (static_cast<double >(ceil(n)) + 1.0));
    std::uniform_real_distribution<double> u2(0.0000001, 1);
    //判断逻辑
    if (value >= threshold) {
        if (communicating) {
            if (--t <= 0) {
                deltaS = 0.0;
                communicating = false;
                speaking = false;
                aP = 0;
                vP = 0;
                accumF = 0;
                return;
            } else {
                speaking = u(e);
                return;
            }
        } else {
            communicating = true;
            deltaS = deltaSAdj;
            aP = n == 0 ? pow(u2(e), log(0.5) / log(0.71)) : blockStatus->attractiveness / n;
            vP = vP == 0 ? 1 / (1 + exp(-(value - threshold))) : blockStatus->volume /
                                                                 blockStatus->classroom->getVolumeMax()[blockStatus->pos.x][blockStatus->pos.y];
            t = int(-300 / (9 * aP - 10)) + 60;
            speaking = u(e);
        }
    } else {
        accumF += 0.2 * innerFact[INTERNALDRIVE];
        deltaS = 0.0;
        communicating = false;
        speaking = false;
        aP = 0;
        vP = 0;
    }
}

Student::Student(BlockStatus *blockStatus, double &workload) : blockStatus(blockStatus), e(std::random_device{}()) {
    //生成内因
    auto realDistro = [&](double l, double u) {
        std::uniform_real_distribution<double> u1(l + 0.0000001, u - 0.0000001);
        return u1(e);
    };
    innerFact.insert({AUTHSENSITIVITY, realDistro(0, 2)}); //生成权威敏感度A
    innerFact.insert({SELFCONTROL, realDistro(0, 2)});//自制力Sc
    innerFact.insert({EXTRAVERSION, realDistro(0, 2)});//外向程度I
    innerFact.insert({ENVSENSITIVITY, 2 - innerFact.at(SELFCONTROL)});//环境敏感度E
    innerFact.insert({INTERNALDRIVE, sqrt(innerFact.at(EXTRAVERSION) * (2 - innerFact.at(SELFCONTROL)))});//内驱力F

    std::normal_distribution<double> n(workload, 0.125);
    auto normalDistribution = [&](double l, double u) {
        double result;
        do {
            result = n(e);
        } while (result < l || result > u);
        return result;
    };

    double wl = normalDistribution(0.0, 10.0);
    innerFact.insert({WORKLOAD, wl});
//生成工作量
    auto B = [](double wl) {
        return -0.227855477855484 * pow(wl, 3)
               + 2.42832167832177 * pow(wl, 2)
               - 1.25641025641059 * wl + 3.18741258741279;
    };
    innerFact.insert({CONSCIENTIOUSNESS, B(wl)});//生成工作专注度
    communicating = false;
    speaking = false;
}