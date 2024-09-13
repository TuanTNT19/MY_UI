#include "LoginDialog.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent)
{
    // Tạo giao diện cho cửa sổ nhập IP
    QVBoxLayout *layout = new QVBoxLayout(this);

    PasswordBox = new QLabel("Enter Password", this);
    layout->addWidget(PasswordBox);

    Password_in = new QLineEdit(this);
    Password_in->setEchoMode(QLineEdit::Password);
    layout->addWidget(Password_in);

    Login_Button = new QPushButton("LOG IN", this);
    connect(Login_Button, &QPushButton::clicked, this, &LoginDialog::checkpassword);
    layout ->addWidget(Login_Button);

    Error = new QLabel(this);
    layout ->addWidget(Error);

    setLayout(layout);
}

void LoginDialog::checkpassword(){
    if (Password_in->text() == correctPassword){
        accept();
}
    else{
        Error->setText("Password is not corrected !");
    }
}
