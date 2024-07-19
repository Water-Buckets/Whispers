#ifndef WHISPERS_swapDialog_H
#define WHISPERS_swapDialog_H

#include <QDialog>


QT_BEGIN_NAMESPACE
namespace Ui { class SwapDialog; }
QT_END_NAMESPACE

class SwapDialog : public QDialog {
Q_OBJECT

public:
    explicit SwapDialog(QWidget *parent = nullptr);

    ~SwapDialog() override;

    unsigned getX1() const { return x1; }

    void setX1(unsigned x) { x1 = x; }

    unsigned getY1() const { return y1; };

    void setY1(unsigned y) { y1 = y; }

    unsigned getX2() const { return x2; }

    void setX2(unsigned x) { x2 = x; }

    unsigned getY2() const { return y2; };

    void setY2(unsigned y) { y2 = y; }

private:
    Ui::SwapDialog *ui;
    unsigned x1 = 0, y1 = 0, x2 = 0, y2 = 0;
};


#endif //WHISPERS_swapDialog_H
