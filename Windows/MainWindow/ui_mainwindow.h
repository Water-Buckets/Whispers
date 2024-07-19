/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "../GridWidget/gridwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_6;
    GridWidget *bottomRightGrid;
    QSpacerItem *horizontalSpacer_23;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label;
    QSpacerItem *horizontalSpacer_15;
    GridWidget *topLeftGrid;
    QSpacerItem *horizontalSpacer_9;
    GridWidget *bottomLeftGrid;
    QSpacerItem *horizontalSpacer_13;
    GridWidget *topRightGrid;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_24;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer_15;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *verticalSpacer_10;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_11;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_9;
    QLabel *avgVolumeLabel;
    QSpacerItem *verticalSpacer_17;
    QSpacerItem *verticalSpacer_16;
    QSpacerItem *verticalSpacer_7;
    QLabel *timeLabel;
    QSpacerItem *verticalSpacer_8;
    QLabel *workLabel;
    QLabel *authLabel;
    QLabel *suddenLabel;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *startButton;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *stopButton;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *resetButton;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_19;
    QPushButton *authButton;
    QSpacerItem *horizontalSpacer_18;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_29;
    QPushButton *swapButton;
    QSpacerItem *horizontalSpacer_28;
    QSpacerItem *verticalSpacer_19;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_17;
    QVBoxLayout *verticalLayout_2;
    QSlider *workloadSlider;
    QLabel *workloadLabel;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(972, 728);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(972, 728));
        MainWindow->setMaximumSize(QSize(972, 728));
        MainWindow->setMouseTracking(true);
        MainWindow->setAcceptDrops(false);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setAnimated(true);
        MainWindow->setTabShape(QTabWidget::TabShape::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_9 = new QHBoxLayout(centralwidget);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName("gridLayout_5");
        horizontalSpacer_10 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_10, 4, 4, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout_5->addItem(verticalSpacer_6, 0, 2, 1, 1);

        bottomRightGrid = new GridWidget(centralwidget);
        bottomRightGrid->setObjectName("bottomRightGrid");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bottomRightGrid->sizePolicy().hasHeightForWidth());
        bottomRightGrid->setSizePolicy(sizePolicy1);
        bottomRightGrid->setStyleSheet(QString::fromUtf8("background-color : white"));

        gridLayout_5->addWidget(bottomRightGrid, 3, 3, 1, 1);

        horizontalSpacer_23 = new QSpacerItem(300, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_23, 0, 1, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_10->addWidget(label);


        gridLayout_5->addLayout(horizontalLayout_10, 2, 1, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_15, 2, 4, 1, 1);

        topLeftGrid = new GridWidget(centralwidget);
        topLeftGrid->setObjectName("topLeftGrid");
        topLeftGrid->setStyleSheet(QString::fromUtf8("background-color : white"));

        gridLayout_5->addWidget(topLeftGrid, 1, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_9, 4, 0, 1, 1);

        bottomLeftGrid = new GridWidget(centralwidget);
        bottomLeftGrid->setObjectName("bottomLeftGrid");
        sizePolicy1.setHeightForWidth(bottomLeftGrid->sizePolicy().hasHeightForWidth());
        bottomLeftGrid->setSizePolicy(sizePolicy1);
        bottomLeftGrid->setStyleSheet(QString::fromUtf8("background-color : white"));

        gridLayout_5->addWidget(bottomLeftGrid, 3, 1, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_13, 2, 0, 1, 1);

        topRightGrid = new GridWidget(centralwidget);
        topRightGrid->setObjectName("topRightGrid");
        topRightGrid->setStyleSheet(QString::fromUtf8("background-color : white"));

        gridLayout_5->addWidget(topRightGrid, 1, 3, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_8, 0, 4, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_14->addWidget(label_4);


        gridLayout_5->addLayout(horizontalLayout_14, 4, 3, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_13->addWidget(label_3);


        gridLayout_5->addLayout(horizontalLayout_13, 4, 1, 1, 1);

        horizontalSpacer_24 = new QSpacerItem(300, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_24, 0, 3, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_14, 2, 2, 1, 1);

        verticalSpacer_15 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout_5->addItem(verticalSpacer_15, 4, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_12->addWidget(label_2);


        gridLayout_5->addLayout(horizontalLayout_12, 2, 3, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 300, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout_5->addItem(verticalSpacer_11, 3, 2, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 300, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout_5->addItem(verticalSpacer_10, 1, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SizeConstraint::SetMaximumSize);
        verticalSpacer_9 = new QSpacerItem(20, 32, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_9, 2, 1, 1, 1);

        avgVolumeLabel = new QLabel(centralwidget);
        avgVolumeLabel->setObjectName("avgVolumeLabel");

        gridLayout->addWidget(avgVolumeLabel, 3, 0, 1, 1);

        verticalSpacer_17 = new QSpacerItem(20, 32, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_17, 4, 1, 1, 1);

        verticalSpacer_16 = new QSpacerItem(20, 32, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_16, 3, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 32, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_7, 0, 1, 1, 1);

        timeLabel = new QLabel(centralwidget);
        timeLabel->setObjectName("timeLabel");

        gridLayout->addWidget(timeLabel, 0, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 32, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_8, 1, 1, 1, 1);

        workLabel = new QLabel(centralwidget);
        workLabel->setObjectName("workLabel");

        gridLayout->addWidget(workLabel, 1, 0, 1, 1);

        authLabel = new QLabel(centralwidget);
        authLabel->setObjectName("authLabel");
        sizePolicy1.setHeightForWidth(authLabel->sizePolicy().hasHeightForWidth());
        authLabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(authLabel, 2, 0, 1, 1);

        suddenLabel = new QLabel(centralwidget);
        suddenLabel->setObjectName("suddenLabel");
        suddenLabel->setStyleSheet(QString::fromUtf8("QLabel{color = red; font-size = 24;}"));

        gridLayout->addWidget(suddenLabel, 4, 0, 1, 1);


        horizontalLayout_11->addLayout(gridLayout);


        verticalLayout_4->addLayout(horizontalLayout_11);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setSizeConstraint(QLayout::SizeConstraint::SetMinAndMaxSize);
        verticalSpacer_2 = new QSpacerItem(20, 55, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        startButton = new QPushButton(centralwidget);
        startButton->setObjectName("startButton");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(startButton->sizePolicy().hasHeightForWidth());
        startButton->setSizePolicy(sizePolicy2);
        startButton->setCheckable(false);

        horizontalLayout_6->addWidget(startButton);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout_6->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        stopButton = new QPushButton(centralwidget);
        stopButton->setObjectName("stopButton");
        sizePolicy2.setHeightForWidth(stopButton->sizePolicy().hasHeightForWidth());
        stopButton->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(stopButton);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);


        verticalLayout_6->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        resetButton = new QPushButton(centralwidget);
        resetButton->setObjectName("resetButton");
        sizePolicy2.setHeightForWidth(resetButton->sizePolicy().hasHeightForWidth());
        resetButton->setSizePolicy(sizePolicy2);

        horizontalLayout_8->addWidget(resetButton);

        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);


        verticalLayout_6->addLayout(horizontalLayout_8);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_19 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_19);

        authButton = new QPushButton(centralwidget);
        authButton->setObjectName("authButton");
        sizePolicy2.setHeightForWidth(authButton->sizePolicy().hasHeightForWidth());
        authButton->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(authButton);

        horizontalSpacer_18 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_18);


        horizontalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout_6->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_29 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_29);

        swapButton = new QPushButton(centralwidget);
        swapButton->setObjectName("swapButton");
        sizePolicy2.setHeightForWidth(swapButton->sizePolicy().hasHeightForWidth());
        swapButton->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(swapButton);

        horizontalSpacer_28 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_28);


        verticalLayout_6->addLayout(horizontalLayout_5);

        verticalSpacer_19 = new QSpacerItem(20, 25, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_19);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_17 = new QSpacerItem(30, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_17);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        workloadSlider = new QSlider(centralwidget);
        workloadSlider->setObjectName("workloadSlider");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(workloadSlider->sizePolicy().hasHeightForWidth());
        workloadSlider->setSizePolicy(sizePolicy3);
        workloadSlider->setMinimum(-1);
        workloadSlider->setMaximum(10);
        workloadSlider->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout_2->addWidget(workloadSlider);

        workloadLabel = new QLabel(centralwidget);
        workloadLabel->setObjectName("workloadLabel");
        sizePolicy2.setHeightForWidth(workloadLabel->sizePolicy().hasHeightForWidth());
        workloadLabel->setSizePolicy(sizePolicy2);
        workloadLabel->setTextFormat(Qt::TextFormat::PlainText);
        workloadLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(workloadLabel);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer_16 = new QSpacerItem(30, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_16);


        verticalLayout_6->addLayout(horizontalLayout_2);

        verticalSpacer_5 = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_5);


        verticalLayout_4->addLayout(verticalLayout_6);


        horizontalLayout->addLayout(verticalLayout_4);


        horizontalLayout_9->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Whispers Model", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\200\247\346\240\274/Personality (\345\233\276\344\276\213\350\247\201\347\250\213\345\272\217\346\226\207\346\241\243)", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\351\237\263\351\207\217/Volume (\350\266\212\347\272\242\350\241\250\347\244\272\350\266\212\345\223\215)", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\220\270\345\274\225\345\212\233/Attractiveness (\350\266\212\347\272\242\350\241\250\347\244\272\350\266\212\346\234\211\345\220\270\345\274\225\345\212\233)", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\350\256\262\350\257\235/Speaking (\347\273\277:\345\256\211\351\235\231,\351\273\204:\346\262\237\351\200\232,\347\272\242:\350\256\262\350\257\235)", nullptr));
        avgVolumeLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        timeLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        workLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        authLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        suddenLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213/Start", nullptr));
        stopButton->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242/Stop", nullptr));
        resetButton->setText(QCoreApplication::translate("MainWindow", "\351\207\215\347\275\256/Reset", nullptr));
        authButton->setText(QCoreApplication::translate("MainWindow", "\346\235\203\345\250\201/Authority", nullptr));
        swapButton->setText(QCoreApplication::translate("MainWindow", "\346\215\242\345\272\247\344\275\215/Swap", nullptr));
        workloadLabel->setText(QCoreApplication::translate("MainWindow", "\345\267\245\344\275\234\351\207\217/Workload (0-10)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
