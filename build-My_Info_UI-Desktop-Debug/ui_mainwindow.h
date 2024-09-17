/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *view;
    QPushButton *setting;
    QWidget *newWidget;
    QLabel *laptop;
    QLabel *phone1;
    QLabel *phone2;
    QLabel *phone3;
    QLabel *label_denbao1;
    QLabel *label_denbao2;
    QLabel *label_denbao3;
    QPushButton *Cancel;
    QLabel *ip1;
    QLabel *ip2;
    QLabel *ip3;
    QPushButton *IP_Setting;
    QLabel *Label_Name;
    QPushButton *ipshow;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(885, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 91, 31));
        label->setScaledContents(true);
        view = new QPushButton(centralwidget);
        view->setObjectName(QString::fromUtf8("view"));
        view->setGeometry(QRect(0, 30, 141, 41));
        setting = new QPushButton(centralwidget);
        setting->setObjectName(QString::fromUtf8("setting"));
        setting->setGeometry(QRect(0, 70, 141, 41));
        newWidget = new QWidget(centralwidget);
        newWidget->setObjectName(QString::fromUtf8("newWidget"));
        newWidget->setGeometry(QRect(210, 49, 511, 491));
        laptop = new QLabel(newWidget);
        laptop->setObjectName(QString::fromUtf8("laptop"));
        laptop->setGeometry(QRect(10, 396, 67, 51));
        laptop->setPixmap(QPixmap(QString::fromUtf8("../Pictures_folder/lapatop.png")));
        laptop->setScaledContents(true);
        phone1 = new QLabel(newWidget);
        phone1->setObjectName(QString::fromUtf8("phone1"));
        phone1->setGeometry(QRect(420, 380, 67, 81));
        phone1->setPixmap(QPixmap(QString::fromUtf8("../Pictures_folder/phone.png")));
        phone1->setScaledContents(true);
        phone2 = new QLabel(newWidget);
        phone2->setObjectName(QString::fromUtf8("phone2"));
        phone2->setGeometry(QRect(420, 226, 67, 81));
        phone2->setPixmap(QPixmap(QString::fromUtf8("../Pictures_folder/phone.png")));
        phone2->setScaledContents(true);
        phone3 = new QLabel(newWidget);
        phone3->setObjectName(QString::fromUtf8("phone3"));
        phone3->setGeometry(QRect(420, 46, 67, 81));
        phone3->setPixmap(QPixmap(QString::fromUtf8("../Pictures_folder/phone.png")));
        phone3->setScaledContents(true);
        label_denbao1 = new QLabel(newWidget);
        label_denbao1->setObjectName(QString::fromUtf8("label_denbao1"));
        label_denbao1->setGeometry(QRect(440, 360, 21, 17));
        label_denbao2 = new QLabel(newWidget);
        label_denbao2->setObjectName(QString::fromUtf8("label_denbao2"));
        label_denbao2->setGeometry(QRect(440, 210, 21, 17));
        label_denbao3 = new QLabel(newWidget);
        label_denbao3->setObjectName(QString::fromUtf8("label_denbao3"));
        label_denbao3->setGeometry(QRect(440, 30, 21, 17));
        Cancel = new QPushButton(newWidget);
        Cancel->setObjectName(QString::fromUtf8("Cancel"));
        Cancel->setGeometry(QRect(428, 0, 81, 20));
        ip1 = new QLabel(newWidget);
        ip1->setObjectName(QString::fromUtf8("ip1"));
        ip1->setGeometry(QRect(400, 460, 101, 20));
        ip2 = new QLabel(newWidget);
        ip2->setObjectName(QString::fromUtf8("ip2"));
        ip2->setGeometry(QRect(400, 310, 101, 20));
        ip3 = new QLabel(newWidget);
        ip3->setObjectName(QString::fromUtf8("ip3"));
        ip3->setGeometry(QRect(396, 130, 111, 20));
        IP_Setting = new QPushButton(newWidget);
        IP_Setting->setObjectName(QString::fromUtf8("IP_Setting"));
        IP_Setting->setGeometry(QRect(300, 0, 131, 21));
        Label_Name = new QLabel(newWidget);
        Label_Name->setObjectName(QString::fromUtf8("Label_Name"));
        Label_Name->setGeometry(QRect(106, 30, 261, 31));
        ipshow = new QPushButton(centralwidget);
        ipshow->setObjectName(QString::fromUtf8("ipshow"));
        ipshow->setGeometry(QRect(0, 110, 141, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 885, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "My channel", nullptr));
        view->setText(QApplication::translate("MainWindow", "view information", nullptr));
        setting->setText(QApplication::translate("MainWindow", "setting", nullptr));
        laptop->setText(QString());
        phone1->setText(QString());
        phone2->setText(QString());
        phone3->setText(QString());
        label_denbao1->setText(QString());
        label_denbao2->setText(QString());
        label_denbao3->setText(QString());
        Cancel->setText(QApplication::translate("MainWindow", "Cancel", nullptr));
        ip1->setText(QString());
        ip2->setText(QString());
        ip3->setText(QString());
        IP_Setting->setText(QApplication::translate("MainWindow", "IP Setting", nullptr));
        Label_Name->setText(QString());
        ipshow->setText(QApplication::translate("MainWindow", "Connection Show", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
