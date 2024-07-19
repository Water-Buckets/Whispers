#ifndef WHISPERS_POS_H
#define WHISPERS_POS_H

struct Pos {
    int x; //x坐标
    int y;//y 坐标
    bool operator==(const Pos &other) const { return (this->x == other.x && this->y == other.y); } //重载比较

    bool operator!=(const Pos &other) const { return !(*this == other); }

    Pos(const int &x, const int &y) {
        this->x = x;
        this->y = y;
    }
};

#endif //WHISPERS_POS_H
