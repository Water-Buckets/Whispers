#ifndef WHISPERS_STUDENT_H
#define WHISPERS_STUDENT_H
#pragma once

#include <unordered_map>
#include <random>
#include <algorithm>
#include "../../utils/FactorTypes.h"


struct BlockStatus;

class Student {
private:
    BlockStatus *blockStatus;//块状态
    std::unordered_map<InternalFactorType, double> innerFact;//内因

    double threshold = 0.0; //阈值
    double value = 0.0; //Bo 值
    bool communicating;//沟通
    bool speaking;//讲话
    int t = 0;//沟通倒计时
    double accumF = 0.0;//F在时间上的累计
    double deltaS = 0.0;//补偿值
    double aP = 0.0;//个人影响力
    double vP = 0.0;//个人音量

    std::mt19937 e;//随机数生成引擎


public:

    Student(BlockStatus *blockStatus, double &workload);

    bool isCommunicating() const { return communicating; } //返回是否沟通

    bool isSpeaking() const { return speaking; }//返回是否讲话

    double getAp() const { return aP; }//返回 a_ij

    double getVp() const { return vP; }//返回 v_ij

    void setBlockStatus(BlockStatus *bs) { Student::blockStatus = bs; } //设置块状态

    const std::unordered_map<InternalFactorType, double> &getInnerFact() const { return innerFact; }//获取内因哈希表

    void setInnerFact(InternalFactorType type, double v) { innerFact[type] = v; }//设置内因

    void update(); //更新讲话状态,从blockStatus获取外因
};


#endif //WHISPERS_STUDENT_H
