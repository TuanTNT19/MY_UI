#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "LoginDialog.h"
#include "ViewDialog.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_view_clicked();

private:
    QString ten;
    QString sinh;
    QString que;
    QString giaoduc;
    Ui::MainWindow *ui;
    ViewDialog *view;
};
#endif // MAINWINDOW_H
