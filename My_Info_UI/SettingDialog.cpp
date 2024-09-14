#include "SettingDialog.h"


SettingDialog::SettingDialog(QWidget *parent) :
    QDialog(parent)
{
    // Tạo giao diện cho cửa sổ nhập IP
    QVBoxLayout *layout = new QVBoxLayout(this);

    NameSetting = new QLineEdit(this);
    NameSetting->setPlaceholderText("Enter Name ");
    layout->addWidget(NameSetting);

    BornSetting = new QLineEdit(this);
    BornSetting->setPlaceholderText("Enter Born ");
    layout->addWidget(BornSetting);

    HowetownSetting = new QLineEdit(this);
    HowetownSetting->setPlaceholderText("Enter Hometown ");
    layout->addWidget(HowetownSetting);

    EducationSetting = new QLineEdit(this);
    EducationSetting->setPlaceholderText("Enter Education ");
    layout->addWidget(EducationSetting);

    QPushButton *okButton = new QPushButton("OK", this);
    connect(okButton, &QPushButton::clicked, this, &QDialog::accept);
    layout->addWidget(okButton);

    setLayout(layout);
}

QString SettingDialog::getName() const{
    return (NameSetting->text());
}

QString SettingDialog::getBorn() const{
    return (BornSetting->text());
}
\
QString SettingDialog::getHometown() const{
    return (HowetownSetting->text());
}

QString SettingDialog::getEducation() const{
    return (EducationSetting->text());
}


