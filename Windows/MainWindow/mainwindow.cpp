#include "mainwindow.h"
#include "ui_MainWindow.h"
#include <QTimer>


MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::MainWindow), e(std::random_device{}()) {
    ui->setupUi(this);
    timer = new QTimer(this);
    authDialog = new AuthDialog(this);
    classroom = new Classroom(workload);

    gridWidgets[0] = ui->topLeftGrid;
    gridWidgets[1] = ui->topRightGrid;
    gridWidgets[2] = ui->bottomLeftGrid;
    gridWidgets[3] = ui->bottomRightGrid;
    for (int i = 0; i < 4; ++i) {
        gridWidgets[i]->setStyleSheet("background-color: white;");
        gridWidgets[i]->setClassroom(classroom);
        gridWidgets[i]->setType(GridWidget::Type(i));
    }
    ui->workloadSlider->setRange(0, 10);
    ui->workloadSlider->setValue(7);
    connect(timer, &QTimer::timeout, this, &MainWindow::next);
    QObject::connect(ui->startButton, &QPushButton::clicked, this, &MainWindow::start);
    QObject::connect(ui->stopButton, &QPushButton::clicked, this, &MainWindow::stop);
    QObject::connect(ui->resetButton, &QPushButton::clicked, this, &MainWindow::reset);
    QObject::connect(ui->workloadSlider, &QSlider::valueChanged, this, &MainWindow::setWorkload);
    QObject::connect(ui->authButton, &QPushButton::clicked, this, &MainWindow::alterAuth);
    QObject::connect(ui->swapButton,&QPushButton::clicked, this,&MainWindow::swap);
    ui->timeLabel->setText("时间/Time: 0");
    ui->workLabel->setText("工作量/Workload: 7");
    ui->avgVolumeLabel->setText("平均音量/Average Volume: 0.0");
    ui->authLabel->setText("权威威慑力/Authority Deterrent: 0.0");
    ui->suddenLabel->setText("");
}

void MainWindow::next() {
    std::bernoulli_distribution u(0.001);
    bool sE = u(e);
    classroom->update(auth + sE * 100);
    ui->timeLabel->setText(QString("时间/Time: %1").arg(++t));
    ui->avgVolumeLabel->setText(
            QString("平均音量/Average Volume: ") + QString::number((classroom->getTotalVolume() / 36), 'f', 4));
    ui->suddenLabel->setText(sE ? "!突发事件!/!Sudden Event!" : "");
    repaint();
}


void MainWindow::start() {
    timer->start(100);
    ui->workloadSlider->setEnabled(false);
}


void MainWindow::stop() {
    timer->stop();
    ui->workloadSlider->setEnabled(true);
}

void MainWindow::reset() {
    stop();
    t = 0;
    auth = 0;
    authDialog->setAuth(0);
    ui->timeLabel->setText("时间/Time: 0");
    ui->avgVolumeLabel->setText("平均音量/Average Volume: 0.0");
    ui->authLabel->setText("权威威慑力/Authority Deterrent: 0.0");
    Classroom *c = classroom;
    classroom = new Classroom(workload);
    delete c;
    for (auto &g: gridWidgets) {
        g->clear();
        g->setClassroom(classroom);
    }
    update();
}

void MainWindow::setWorkload(double w) {
    workload = w;
    reset();
    ui->workLabel->setText(QString("工作量/Workload: %1").arg(workload));
}

void MainWindow::alterAuth() {
    stop();
    if (authDialog->exec() == QDialog::Accepted) {
        auth = authDialog->getAuth();
        authDialog->close();
    }
    ui->authLabel->setText(QString("权威威慑力/Authority Deterrent: %1").arg(auth));
}

MainWindow::~MainWindow() {
    delete ui;
    delete timer;
    delete classroom;
}

void MainWindow::swap() {
    stop();
    unsigned x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    if (swapDialog.exec() == QDialog::Accepted){
        x1 = swapDialog.getX1();
        y1 = swapDialog.getY1();
        x2 = swapDialog.getX2();
        y2 = swapDialog.getY2();
        swapDialog.close();
    }
    classroom->swap(x1,y1,x2,y2);
}
