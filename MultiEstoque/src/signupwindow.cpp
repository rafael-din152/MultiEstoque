#include "signupwindow.h"
#include "ui_signupwindow.h"

SignUpWindow::SignUpWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUpWindow)
{
    ui->setupUi(this);
}

SignUpWindow::~SignUpWindow()
{
    delete ui;
}

void SignUpWindow::on_backButton_clicked()
{
    this->close();
}


void SignUpWindow::on_saveButton_clicked()
{
    QString name = ui->txt_name->text();
    QString username = ui->txt_username->text();
    QString password = ui->txt_password->text();
    QString Cpassword = ui->txt_Cpassword->text();
    QString typeOfAccess = ui->txt_toa->text();

    QSqlQuery query;
    query.prepare("insert into tb_users (Name,Username,TypeOfAccess,Password) values"
                  "('"+name+"','"+username+"','"+typeOfAccess+"','"+password+"')");

    if(query.exec())
    {
        QMessageBox::information(this,"","Usuario cadastro com sucesso");
        ui->txt_name->clear();
        ui->txt_username->clear();
        ui->txt_password->clear();
        ui->txt_toa->clear();
        ui->txt_name->setFocus();

    }else
    {
        qDebug() << "Erro ao registrar usuario";
    }
}

