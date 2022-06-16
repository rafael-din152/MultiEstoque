#include "adminwindow.h"
#include "ui_adminwindow.h"

AdminWindow::AdminWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminWindow)
{
    ui->setupUi(this);
}

AdminWindow::~AdminWindow()
{
    delete ui;
}

void AdminWindow::on_viewUsersButton_clicked()
{
    UsersTableWindow userstablewindow;
    userstablewindow.exec();
}


void AdminWindow::on_removeUserBottom_clicked()
{
    RemoveUserWindow removeuserwindow;
    removeuserwindow.exec();
}


void AdminWindow::on_signUpButton_clicked()
{
    SignUpWindow signupwindow;
    signupwindow.exec();
}

