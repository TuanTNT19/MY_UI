
#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ten = "Truong Nho Tuan";
    sinh = "08/12/2002";
    que = "Thanh Hoa";
    giaoduc = "HUST";
    ui->setupUi(this);

    view = new ViewDialog(this);

    setting = new SettingDialog(this);

    dn = new LoginDialog(this);

    dn->exec();

    ui->newWidget->setVisible(false);
    ui->newWidget->setStyleSheet("background-color:  #FFFFFF;");

    connect(ui->view,  &QPushButton::clicked, this, &MainWindow::on_view_clicked);
    connect(ui->setting, &QPushButton::clicked, this, &MainWindow::on_setting_clicked);
    connect(ui->ipshow, &QPushButton::clicked, this, &MainWindow::on_ipshow_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete view;
    delete setting;
    delete dn;
}



void MainWindow::on_view_clicked()
{
    view->ShowInfor(ten, sinh, que, giaoduc);
    view->exec();

}


void MainWindow::on_setting_clicked()
{
    if (setting->exec() == QDialog::Accepted){
        QString newname = setting->getName();
        QString newborn = setting->getBorn();
        QString newhome = setting->getHometown();
        QString newedu = setting->getEducation();

        if (!newname.isEmpty()){
            ten = newname;
        }

        if(!newborn.isEmpty()){
            sinh = newborn;
        }

        if(!newhome.isEmpty()){
            que = newhome;
        }

        if(!newedu.isEmpty()){
            giaoduc = newedu;
        }

    }
}

void MainWindow::on_ipshow_clicked()
{

        ui->newWidget->setVisible(true);
}

