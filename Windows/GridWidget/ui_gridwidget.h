/********************************************************************************
** Form generated from reading UI file 'gridwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRIDWIDGET_H
#define UI_GRIDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GridWidget
{
public:

    void setupUi(QWidget *GridWidget)
    {
        if (GridWidget->objectName().isEmpty())
            GridWidget->setObjectName("GridWidget");
        GridWidget->resize(450, 450);

        retranslateUi(GridWidget);

        QMetaObject::connectSlotsByName(GridWidget);
    } // setupUi

    void retranslateUi(QWidget *GridWidget)
    {
        GridWidget->setWindowTitle(QCoreApplication::translate("GridWidget", "GridWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GridWidget: public Ui_GridWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRIDWIDGET_H
