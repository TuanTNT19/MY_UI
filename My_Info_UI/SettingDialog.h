#ifndef SETTINGDIALOG_H
#define SETTINGDIALOG_H
#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>

class SettingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SettingDialog(QWidget *parent = nullptr);
    QString getName() const;
    QString getBorn() const;
    QString getHometown() const;
    QString getEducation() const;
private:
    QLineEdit *NameSetting;
    QLineEdit *BornSetting;
    QLineEdit *HowetownSetting;
    QLineEdit *EducationSetting;

};

#endif // SETTINGDIALOG_H
