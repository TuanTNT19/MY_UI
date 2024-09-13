#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    LoginDialog dn(this);

    dn.exec();

    view = new ViewDialog(this);
    view->setName("Truong Nho Tuan");
    view->setBorn("08/12/2002");
    view->setHometown("Thanh Hoa");
    view->setEducation("HUST");

    connect(ui->view,  &QPushButton::clicked, this, &MainWindow::on_view_clicked);
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
