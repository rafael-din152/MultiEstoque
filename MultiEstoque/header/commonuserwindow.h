#ifndef COMMONUSERWINDOW_H
#define COMMONUSERWINDOW_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class CommonUserWindow;
}

class CommonUserWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CommonUserWindow(QWidget *parent = nullptr);
    ~CommonUserWindow();

private slots:
    void on_BackButton_clicked();

private:
    Ui::CommonUserWindow *ui;
};

#endif // COMMONUSERWINDOW_H
