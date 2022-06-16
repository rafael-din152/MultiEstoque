#ifndef USERSTABLEWINDOW_H
#define USERSTABLEWINDOW_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class UsersTableWindow;
}

class UsersTableWindow : public QDialog
{
    Q_OBJECT

public:
    explicit UsersTableWindow(QWidget *parent = nullptr);
    ~UsersTableWindow();

private slots:
    void on_backButton_clicked();

private:
    Ui::UsersTableWindow *ui;
};

#endif // USERSTABLEWINDOW_H
