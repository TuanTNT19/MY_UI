#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H


#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);

private slots:
    void checkpassword();
private:
    QLabel *PasswordBox;
    QLineEdit *Password_in;
    QPushButton *Login_Button;
    QLabel *Error;
    const QString correctPassword = "123456"; // mật khẩu đúng
};

#endif // LOGINDIALOG_H
