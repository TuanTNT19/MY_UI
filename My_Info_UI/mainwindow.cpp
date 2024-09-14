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
    view->ShowInfor(ten, sinh, que, giaoduc);

    setting = new SettingDialog(this);

    LoginDialog dn(this);

    dn.exec();

    connect(ui->view,  &QPushButton::clicked, this, &MainWindow::on_view_clicked);
    connect(ui->setting, &QPushButton::clicked, this, &MainWindow::on_setting_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete view;
}



void MainWindow::on_view_clicked()
{
    view->exec();

}

void MainWindow::on_setting_clicked()
{
    setting->exec();
}
