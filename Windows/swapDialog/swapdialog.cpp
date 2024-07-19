#include "swapDialog.h"
#include "ui_swapDialog.h"


SwapDialog::SwapDialog(QWidget *parent) :
        QDialog(parent), ui(new Ui::SwapDialog) {
    ui->setupUi(this);
    QObject::connect(ui->stu1XSpinBox,&QSpinBox::valueChanged, this,&SwapDialog::setY1);
    QObject::connect(ui->stu1YSpinBox,&QSpinBox::valueChanged, this,&SwapDialog::setX1);
    QObject::connect(ui->stu2XSpinBox,&QSpinBox::valueChanged, this,&SwapDialog::setY2);
    QObject::connect(ui->stu2YSpinBox,&QSpinBox::valueChanged, this,&SwapDialog::setX2);
    QObject::connect(ui->buttonBox,&QDialogButtonBox::accepted, this,&SwapDialog::accept);
    QObject::connect(ui->buttonBox,&QDialogButtonBox::rejected, this,&SwapDialog::reject);
}

SwapDialog::~SwapDialog() {
    delete ui;
}
