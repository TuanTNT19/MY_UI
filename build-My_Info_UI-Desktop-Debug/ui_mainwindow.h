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
    QLabel *label_2;
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
        newWidget->setGeometry(QRect(210, 49, 511, 471));
        label_2 = new QLabel(newWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 70, 291, 17));
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
        label_2->setText(QApplication::translate("MainWindow", "                       This is child Widget", nullptr));
        ipshow->setText(QApplication::translate("MainWindow", "IP_SHOW", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
