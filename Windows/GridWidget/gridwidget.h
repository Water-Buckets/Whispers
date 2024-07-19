#ifndef WHISPERS_GRIDWIDGET_H
#define WHISPERS_GRIDWIDGET_H

#include "../../Models/Classroom/classroom.h"
#include <QGridLayout>
#include <QLabel>
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
    class GridWidget;
}
QT_END_NAMESPACE

class GridWidget : public QWidget {
Q_OBJECT

public:
    enum Type {
        PERSONALITY,//人格
        SPEAKING,//讲话
        ATTRACTIVENESS, // 总吸引力aL
        VOLUME,         // 总音量vL

    };

    explicit GridWidget(QWidget *parent = nullptr, Classroom *cr = nullptr, GridWidget::Type t = PERSONALITY);

//    void next();
    void clear();

    void setType(Type t) { GridWidget::type = t; }

    void setClassroom(Classroom *c) { GridWidget::classroom = c; }

    void paintEvent(QPaintEvent*event) override;

    Classroom *getClassroom() const { return classroom; }

    ~GridWidget() override;

private:
//    double auth;
    Type type;
    static constexpr int gridLength = 6;
    static constexpr int gridWidth = 6;
    Ui::GridWidget *ui;

    std::array<std::array<QRect, gridLength>, gridWidth> rects;
//    QGridLayout *layout;

    Classroom *classroom;

};

#endif // WHISPERS_GRIDWIDGET_H
