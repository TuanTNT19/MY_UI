#ifndef VIEWDIALOG_H
#define VIEWDIALOG_H


#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>

class ViewDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ViewDialog(QWidget *parent = nullptr);
    void setName(const QString &name);
    void setBorn(const QString &born);
    void setHometown(const QString &hometown);
    void setEducation(const QString &Education);
private:
    QLabel *Name;
    QLabel *Born;
    QLabel *Hometown;
    QLabel *Education;

    QString ten;
    QString sinh;
    QString que;
    QString giaoduc;
};

#endif // VIEWDIALOG_H
