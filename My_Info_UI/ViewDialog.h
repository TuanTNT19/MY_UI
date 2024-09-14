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

    void ShowInfor(const QString &name, const QString &born, const QString &hometown, const QString &Education);
private:
    QLabel *Name;
    QLabel *Born;
    QLabel *Hometown;
    QLabel *Education;

};

#endif // VIEWDIALOG_H
