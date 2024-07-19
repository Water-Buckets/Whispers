#ifndef WHISPERS_MAINWINDOW_H
#define WHISPERS_MAINWINDOW_H

#include <QMainWindow>
#include "../GridWidget/gridwidget.h"
#include "../AuthDialog/authdialog.h"
#include "../swapDialog/swapDialog.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;

private:
    Ui::MainWindow *ui;
    std::array<GridWidget *, 4> gridWidgets;
    Classroom *classroom = nullptr;
    double auth = 0.0;
    double workload = 7.0;
    QTimer *timer;
    AuthDialog *authDialog;
    SwapDialog swapDialog;
    unsigned t = 0;
    std::mt19937 e;

public:
    double getAuth() const { return auth; }

    void next();

    void start();

    void stop();

    void reset();

    void setWorkload(double w);

    void setAuth(double a) { auth = a; }

    void alterAuth();

    void swap();
};


#endif //WHISPERS_MAINWINDOW_H
