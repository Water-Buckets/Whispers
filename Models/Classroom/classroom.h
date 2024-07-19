#ifndef WHISPERS_CLASSROOM_H
#define WHISPERS_CLASSROOM_H
#pragma once

#include <array>
#include "../Student/student.h"
#include "../../utils/Pos.h"

struct Student;
struct Classroom;

struct BlockStatus {
    Pos pos;//座位号
    Classroom *classroom;
    Student *student;//对应的学生
    //外因
    double authDeterrent;//权威威慑力Di
    double attractiveness;//总吸引力aL
    double volume;//总音量vL
    BlockStatus();//默认构造函数

    BlockStatus(Pos p, Classroom *cr, Student *stu);//构造函数
};

class Classroom {
private:
    static constexpr int length = 6;//长
    static constexpr int width = 6;//宽

    double totalVolume = 0.0;//总音量

    double workload;//教室期望平均工作量

    std::array<std::array<BlockStatus, length>, width> blockStatus;//块状态二维数组

    std::array<std::array<double, length>, 6> volumeMax{};//该位置最大音量数组

public:
    explicit Classroom(double workload);//构造函数

    std::array<std::array<BlockStatus, length>, width> getStatus() const { return blockStatus; }; //获取块状态二维数组

    const std::array<std::array<double, length>, 6> &getVolumeMax() const { return volumeMax; }//获取该位置最大音量数组

    double getTotalVolume() const { return totalVolume; }//获取总音量

    void update(double auth);//更新

    void swap(unsigned x1, unsigned y1, unsigned x2, unsigned y2);//交换座位

    virtual ~Classroom();//析构函数
};


#endif //WHISPERS_CLASSROOM_H
