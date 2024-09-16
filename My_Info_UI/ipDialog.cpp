#include "ipDialog.h"

IpDialog::IpDialog(QWidget *parent) :
    QDialog(parent)
{
    layout = new QVBoxLayout(this);

    SettingIP = new QLabel (this);
    SettingIP->setText("IP Setting");
    layout->addWidget(SettingIP);

    Phone1IP = new QLineEdit(this);
    Phone1IP->setPlaceholderText("Enter Phone1 IP");
    layout->addWidget(Phone1IP);

    Phone2IP = new QLineEdit(this);
    Phone2IP->setPlaceholderText("Enter Phone2 IP");
    layout->addWidget(Phone2IP);

    Phone3IP = new QLineEdit(this);
    Phone3IP->setPlaceholderText("Enter Phone3 IP");
    layout->addWidget(Phone3IP);

    okButton = new QPushButton("OK", this);
    connect(okButton, &QPushButton::clicked, this, &QDialog::accept);
    layout->addWidget(okButton);
    setLayout(layout);
}

QString IpDialog::getPhone1_IP() const{
    return (Phone1IP->text());
}

QString IpDialog::getPhone2_IP() const{
    return (Phone2IP->text());
}

QString IpDialog::getPhone3_IP() const{
    return (Phone3IP->text());
}
