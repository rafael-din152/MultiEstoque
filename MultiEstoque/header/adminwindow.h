#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QDialog>
#include "userstablewindow.h"
#include "removeuserwindow.h"
#include "signupwindow.h"
#include <QMessageBox>
#include <QtSql>

namespace Ui {
class AdminWindow;
}

class AdminWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AdminWindow(QWidget *parent = nullptr);
    ~AdminWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_viewUsersButton_clicked();

    void on_removeUserBottom_clicked();

    void on_signUpButton_clicked();

private:
    Ui::AdminWindow *ui;
};

#endif // ADMINWINDOW_H
