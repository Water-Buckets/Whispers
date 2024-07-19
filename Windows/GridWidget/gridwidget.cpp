#include "gridwidget.h"
#include "ui_GridWidget.h"
#include <cmath>
#include <QPainter>
#include <QColor>
#include <QRgb>


GridWidget::GridWidget(QWidget *parent, Classroom *cr, Type t) : QWidget(parent), ui(new Ui::GridWidget), classroom(cr),
                                                                 type(t) {
    ui->setupUi(this);

    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            rects[i][j] = QRect(j * 50, i * 50, 50, 50);
        }
    }

}

void GridWidget::clear() {
}

void GridWidget::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    auto status = classroom->getStatus();
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            switch (type) {
                case PERSONALITY:
                    painter.fillRect(rects.at(i).at(j), QColor(qRgb(
                            status.at(i).at(j).student->getInnerFact().at(AUTHSENSITIVITY) >= 1 ? 255 : 0,
                            status.at(i).at(j).student->getInnerFact().at(SELFCONTROL) >= 1 ? 255 : 0,
                            status.at(i).at(j).student->getInnerFact().at(EXTRAVERSION) >= 1 ? 255 : 0
                    )));
                    break;
                case SPEAKING:
                    painter.fillRect(rects.at(i).at(j),
                                     status.at(i).at(j).student->isSpeaking() ? Qt::red : status.at(i).at(
                                             j).student->isCommunicating() ? Qt::yellow : Qt::green);
                    break;
                case ATTRACTIVENESS:
                    painter.fillRect(rects[i][j], QColor(qRgb(static_cast<int>(ceil(
                            status.at(i).at(j).student->getAp() * status.at(i).at(j).student->isSpeaking() * 15)) *
                                                              (255 / 15), (15 - static_cast<int>(ceil(
                            status.at(i).at(j).student->getAp() * status.at(i).at(j).student->isSpeaking() * 15))) *
                                                                          (255 / 15), 0)));
                    break;
                case VOLUME:
                    painter.fillRect(rects[i][j], QColor(qRgb(static_cast<int>(ceil(
                            status.at(i).at(j).student->getVp() * status.at(i).at(j).student->isSpeaking() * 15)) *
                                                              (255 / 15), (15 - static_cast<int>(ceil(
                            status.at(i).at(j).student->getVp() * status.at(i).at(j).student->isSpeaking() * 15))) *
                                                                          (255 / 15), 0)));
                    break;
            }


        }
    }

}

GridWidget::~GridWidget() {
    delete ui;
}


