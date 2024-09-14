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

void ViewDialog :: ShowInfor(const QString &name, const QString &born, const QString &hometown, const QString &education){
    Name->setText("Name: " + name);
    Born->setText("Born: " + born);
    Hometown->setText("Name: " + hometown);
    Education->setText("Education: " + education);
}
