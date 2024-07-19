#ifndef WHISPERS_AUTHDIALOG_H
#define WHISPERS_AUTHDIALOG_H

#include <QDialog>


QT_BEGIN_NAMESPACE
namespace Ui { class AuthDialog; }
QT_END_NAMESPACE

class AuthDialog : public QDialog {
Q_OBJECT

public:
    explicit AuthDialog(QWidget *parent = nullptr);

    double getAuth() const { return auth; }

    void setAuth(double a) { auth = a; }

    ~AuthDialog() override;

private:
    Ui::AuthDialog *ui;
    double auth = .0;

};


#endif //WHISPERS_AUTHDIALOG_H
