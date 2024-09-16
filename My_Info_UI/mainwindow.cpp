
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
    Phone1NewIP = "192.168.0.104";
    Phone2NewIP = "192.168.0.106";
    Phone3NewIP = "192.168.0.109";
    ui->setupUi(this);
    this->timer1 = new QTimer(this);
    this->timer1->setInterval(1000);

    view = new ViewDialog(this);

    setting = new SettingDialog(this);

    dn = new LoginDialog(this);

    IP = new IpDialog(this);

    dn->exec();

    ui->newWidget->setVisible(false);
    ui->newWidget->setStyleSheet("background-color:  #FFFFFF;");

    connect(timer1, &QTimer::timeout, this, &MainWindow::check_connection);
    connect(ui->view,  &QPushButton::clicked, this, &MainWindow::on_view_clicked);
    connect(ui->setting, &QPushButton::clicked, this, &MainWindow::on_setting_clicked);
    connect(ui->ipshow, &QPushButton::clicked, this, &MainWindow::on_ipshow_clicked);
    connect(ui->Cancel, &QPushButton::clicked, this, &MainWindow::on_Cancel_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
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
       // IP->exec();
        this->timer1->start();
        check_connection();
}

void MainWindow::check_connection(){
    updateStatusLabel(ui->label_denbao1,ping_Device(Phone1NewIP));
    ui->ip1->setText(Phone1NewIP);
    updateStatusLabel(ui->label_denbao2,ping_Device(Phone2NewIP));
    ui->ip2->setText(Phone2NewIP);
    updateStatusLabel(ui->label_denbao3,ping_Device(Phone3NewIP));
    ui->ip3->setText(Phone3NewIP);
}

bool MainWindow :: ping_Device(const QString &ipAddress){

    QProcess pingProcess;
    QElapsedTimer timer;

    // Bắt đầu đo thời gian
    timer.start();

    // Khởi động tiến trình ping
    pingProcess.start("ping", QStringList() << "-c" << "1" << ipAddress);

    // Đợi tiến trình hoàn thành với timeout là 500ms
    bool finishedInTime = pingProcess.waitForFinished(500);  // 500ms

    // Nếu quá 500ms mà tiến trình chưa hoàn thành
    if (!finishedInTime) {
        pingProcess.kill();  // Dừng tiến trình ping
        qDebug() << "Ping quá thời gian cho phép (500ms)";
        return false;  // Trả về kết quả "not connected"
    }

    // Lấy thời gian đã trôi qua
    qint64 elapsedTime = timer.elapsed();
    qDebug() << "Thời gian thực hiện ping: " << elapsedTime << " ms";

    return pingProcess.exitCode() == 0;
}

void MainWindow::updateStatusLabel(QLabel *statusLabel, bool connected)
{
    if (connected) {
        statusLabel->setStyleSheet("QLabel { background-color : green; border-radius: 10px; }");
    } else {
        statusLabel->setStyleSheet("QLabel { background-color : red; border-radius: 10px; }");
    }
    statusLabel->setFixedSize(20, 20); // Đặt kích thước cố định cho QLabel là 20x20 pixels
}

void MainWindow::on_Cancel_clicked()
{
    ui->newWidget->close();
}

void MainWindow::on_IP_Setting_clicked()
{
    IP->exec();

    QString newip1 = IP->getPhone1_IP();
    QString newip2 = IP->getPhone2_IP();
    QString newip3 = IP->getPhone3_IP();

    if (!newip1.isEmpty()){
        Phone1NewIP = newip1;
    }

    if (!newip2.isEmpty()){
        Phone2NewIP = newip2;
    }

    if (!newip3.isEmpty()){
        Phone3NewIP = newip3;
    }

}
