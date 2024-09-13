#include "ViewDialog.h"

ViewDialog::ViewDialog(QWidget *parent) :
    QDialog(parent)
{
    // Tạo giao diện cho cửa sổ
    QVBoxLayout *layout = new QVBoxLayout(this);

    Name = new QLabel(this);
    layout->addWidget(Name);

    Born = new QLabel(this);
    layout->addWidget(Born);

    Hometown = new QLabel(this);
    layout->addWidget(Hometown);

    Education = new QLabel(this);
    layout->addWidget(Education);

    QPushButton *okButton = new QPushButton("OK", this);
    connect(okButton, &QPushButton::clicked, this, &QDialog::accept);
    layout->addWidget(okButton);

    setLayout(layout);
}

void ViewDialog::setName(const QString &name) {
    ten = name;
    Name->setText("Name: " + ten);
}

void ViewDialog::setBorn(const QString &born) {
    sinh = born;
    Born->setText("Born: " + sinh);
}

void ViewDialog::setHometown(const QString &hometown) {
    que = hometown;
    Hometown->setText("Hometown: " + que);
}

void ViewDialog::setEducation(const QString &education) {
    giaoduc = education;
    Education->setText("Education: " + giaoduc);
}
