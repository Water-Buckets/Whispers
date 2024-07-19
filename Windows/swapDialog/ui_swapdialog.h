/********************************************************************************
** Form generated from reading UI file 'swapdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SWAPDIALOG_H
#define UI_SWAPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SwapDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QLabel *stu1XLabel;
    QSpinBox *stu1XSpinBox;
    QLabel *stu1YLabel;
    QLabel *stu2XLabel;
    QLabel *stu2YLabel;
    QSpinBox *stu1YSpinBox;
    QSpinBox *stu2XSpinBox;
    QSpinBox *stu2YSpinBox;

    void setupUi(QDialog *SwapDialog)
    {
        if (SwapDialog->objectName().isEmpty())
            SwapDialog->setObjectName("SwapDialog");
        SwapDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(SwapDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(230, 260, 152, 32));
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        label = new QLabel(SwapDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 381, 51));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        gridLayoutWidget = new QWidget(SwapDialog);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(30, 90, 341, 141));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 3, 1, 1);

        stu1XLabel = new QLabel(gridLayoutWidget);
        stu1XLabel->setObjectName("stu1XLabel");

        gridLayout->addWidget(stu1XLabel, 0, 0, 1, 1);

        stu1XSpinBox = new QSpinBox(gridLayoutWidget);
        stu1XSpinBox->setObjectName("stu1XSpinBox");
        stu1XSpinBox->setMaximum(5);

        gridLayout->addWidget(stu1XSpinBox, 1, 0, 1, 1);

        stu1YLabel = new QLabel(gridLayoutWidget);
        stu1YLabel->setObjectName("stu1YLabel");

        gridLayout->addWidget(stu1YLabel, 2, 0, 1, 1);

        stu2XLabel = new QLabel(gridLayoutWidget);
        stu2XLabel->setObjectName("stu2XLabel");

        gridLayout->addWidget(stu2XLabel, 0, 2, 1, 1);

        stu2YLabel = new QLabel(gridLayoutWidget);
        stu2YLabel->setObjectName("stu2YLabel");

        gridLayout->addWidget(stu2YLabel, 2, 2, 1, 1);

        stu1YSpinBox = new QSpinBox(gridLayoutWidget);
        stu1YSpinBox->setObjectName("stu1YSpinBox");
        stu1YSpinBox->setMaximum(5);

        gridLayout->addWidget(stu1YSpinBox, 3, 0, 1, 1);

        stu2XSpinBox = new QSpinBox(gridLayoutWidget);
        stu2XSpinBox->setObjectName("stu2XSpinBox");
        stu2XSpinBox->setMaximum(5);

        gridLayout->addWidget(stu2XSpinBox, 1, 2, 1, 1);

        stu2YSpinBox = new QSpinBox(gridLayoutWidget);
        stu2YSpinBox->setObjectName("stu2YSpinBox");
        stu2YSpinBox->setMaximum(5);

        gridLayout->addWidget(stu2YSpinBox, 3, 2, 1, 1);


        retranslateUi(SwapDialog);

        QMetaObject::connectSlotsByName(SwapDialog);
    } // setupUi

    void retranslateUi(QDialog *SwapDialog)
    {
        SwapDialog->setWindowTitle(QCoreApplication::translate("SwapDialog", "\346\215\242\345\272\247\344\275\215", nullptr));
        label->setText(QCoreApplication::translate("SwapDialog", "\344\272\244\346\215\242\345\272\247\344\275\215:\345\255\246\347\224\237 1 \344\270\216\345\255\246\347\224\237 2 \347\232\204\345\272\247\344\275\215\n"
"(\345\235\220\346\240\207:\344\273\245\345\267\246\344\270\212\350\247\222\344\270\272(0,0),\345\220\221\345\217\263\344\270\272 x \350\275\264\346\255\243\346\226\271\345\220\221,\345\220\221\344\270\213\344\270\272 y \350\275\264\346\255\243\346\226\271\345\220\221.\n"
" \345\215\263\345\267\246\344\270\213\350\247\222\344\270\272(0,6),\345\217\263\344\270\212\350\247\222\344\270\272(6,0),\345\217\263\344\270\213\350\247\222\344\270\272(6,6)", nullptr));
        stu1XLabel->setText(QCoreApplication::translate("SwapDialog", "\345\255\246\347\224\237 1 x:", nullptr));
        stu1YLabel->setText(QCoreApplication::translate("SwapDialog", "\345\255\246\347\224\237 1 y:", nullptr));
        stu2XLabel->setText(QCoreApplication::translate("SwapDialog", "\345\255\246\347\224\237 2 x:", nullptr));
        stu2YLabel->setText(QCoreApplication::translate("SwapDialog", "\345\255\246\347\224\237 2 y:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SwapDialog: public Ui_SwapDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SWAPDIALOG_H
