#ifndef IPDIALOG_H
#define IPDIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>

class IpDialog : public QDialog
{
    Q_OBJECT

public:
    explicit IpDialog(QWidget *parent = nullptr);
    QString getPhone1_IP() const;
    QString getPhone2_IP() const;
    QString getPhone3_IP() const;
   // void settingIP(QString &ip1, QString ip2, QString ip3);
private:
    QVBoxLayout *layout;
    QLabel *SettingIP;
    QLineEdit *Phone1IP;
    QLineEdit *Phone2IP;
    QLineEdit *Phone3IP;
    QPushButton *okButton;
};

#endif // IPDIALOG_H
