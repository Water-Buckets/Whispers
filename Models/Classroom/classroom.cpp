#include <vector>
#include "classroom.h"


BlockStatus::BlockStatus(const Pos p, Classroom *cr, Student *stu) : pos(p), classroom(cr), student(stu),
                                                                     authDeterrent(0.0),
                                                                     attractiveness(0.0), volume(0.0) {}

BlockStatus::BlockStatus() : pos(Pos(0, 0)) {
    classroom = nullptr;
    student = nullptr;
    authDeterrent = 0.0;
    attractiveness = 0.0;
    volume = 0.0;
}


Classroom::Classroom(double w) : workload(w) {

    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            blockStatus[i][j] = BlockStatus(Pos(i, j), this, new Student(nullptr, workload));
            blockStatus[i][j].student->setBlockStatus(&blockStatus[i][j]);
            volumeMax[i][j] = 0;
            for (int k = 0; k < 6; ++k) {
                for (int l = 0; l < 6; ++l) {
                    volumeMax[i][j] += 1 / pow(i - k, 2) + pow(j - l, 2);
                }
            }
        }
    }

}


void Classroom::update(double auth) {
    //记录上次循环内容
    std::vector<Pos> speakers; //之前讲话的人
    std::vector<Pos> communicator; //之前沟通的人
    totalVolume = 0.0;//重置总音量
    for (auto &a: blockStatus) {
        for (auto &bs: a) {
            bs.attractiveness = 0;//重置块吸引力 a_L
            for (int p = std::max(0, bs.pos.x - 1); p <= std::min(5, bs.pos.x + 1); ++p) {
                for (int q = std::max(0, bs.pos.y - 1); q <= std::min(5, bs.pos.y + 1); ++q) {
                    if (p != bs.pos.x && q != bs.pos.y) {
                        bs.attractiveness += blockStatus[p][q].student->getAp()
                                             * int(blockStatus[p][q].student->isSpeaking());//计算 a_L
                    }
                }
            }
            if (bs.student->isSpeaking()) {
                speakers.push_back(bs.pos);//记录讲话者
            }
            if (bs.student->isCommunicating()) {
                communicator.push_back(bs.pos);//记录沟通者
            }
            bs.authDeterrent = auth;//设置权威值
        }
    }

    //更新所有的blockStatus
    for (auto &a: blockStatus) {
        for (auto &bs: a) {
            bs.volume = 0;//重置 v_L
            for (auto &s: speakers) {
                if (s != bs.pos) {
                    bs.volume +=
                            blockStatus[s.x][s.y].student->getVp() * int(blockStatus[s.x][s.y].student->isSpeaking()) /
                            (pow(bs.pos.x - s.x, 2) + pow(bs.pos.y - s.y, 2)); //计算 v_L
                }
            }
        }
    }
    //更新所有的学生
    for (auto &a: blockStatus) {
        for (auto &bs: a) {
            bs.student->update();
        }
    }
    //计算当前总音量
    for (auto &a: blockStatus) {
        for (auto &bs: a) {
            totalVolume += bs.student->getVp();
        }
    }
}
//换座位
void Classroom::swap(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2) {
    std::swap(blockStatus.at(x1).at(y1).student, blockStatus.at(x2).at(y2).student);
}
//析构函数
Classroom::~Classroom() {
    for (auto &a: blockStatus) {
        for (auto &bs: a) {
            delete bs.student;
        }
    }
}
