#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QDebug>
#include <QLabel>
#include <QTimer>
#include <QElapsedTimer>
#include "LoginDialog.h"
#include "ViewDialog.h"
#include "SettingDialog.h"
#include "ipDialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    bool ping_Device(const QString &ipAddress);
    void updateStatusLabel(QLabel *statusLabel, bool connected);

private slots:


    void on_view_clicked();

    void on_setting_clicked();

    void on_ipshow_clicked();

    void check_connection();


    void on_Cancel_clicked();

    void on_IP_Setting_clicked();

private:
    QString ten;
    QString sinh;
    QString que;
    QString giaoduc;
    Ui::MainWindow *ui;
    LoginDialog *dn;
    ViewDialog *view;
    SettingDialog *setting;
    IpDialog *IP;
    QString Phone1NewIP;
    QString Phone2NewIP;
    QString Phone3NewIP;
    QTimer *timer1;
   // bool check = false;
};
#endif // MAINWINDOW_H
