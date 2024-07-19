#include "authdialog.h"
#include "ui_AuthDialog.h"


AuthDialog::AuthDialog(QWidget *parent) :
		QDialog(parent), ui(new Ui::AuthDialog) {
	ui->setupUi(this);
    QObject::connect(ui->doubleSpinBox,&QDoubleSpinBox::valueChanged, this,&AuthDialog::setAuth);
    QObject::connect(ui->buttonBox,&QDialogButtonBox::accepted, this,&AuthDialog::accept);
    QObject::connect(ui->buttonBox,&QDialogButtonBox::rejected, this,&AuthDialog::reject);


}

AuthDialog::~AuthDialog() {
	delete ui;
}
