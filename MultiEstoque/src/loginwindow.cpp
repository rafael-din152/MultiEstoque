#include "loginwindow.h"
#include "ui_loginwindow.h"

static QSqlDatabase bancoDeDados = QSqlDatabase::addDatabase("QSQLITE");

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);

    bancoDeDados.setDatabaseName("D:/Marcelino2013/user/MultiEstoque/MultiEstoque/MultiEstoque/banco_de_dados/MultiEstoque.db");

    if(!bancoDeDados.open())
    {
        ui->label->setText("Failed to open database");
    }else
    {
        ui->label->setText("Database is open with success");
    }
}

LoginWindow::~LoginWindow()
{
    delete ui;
}


void LoginWindow::on_loginButton_clicked()
{
    QString username = ui->txt_username->text();
    QString password = ui->txt_password->text();
    QString typeOfAccess = ui->txt_toa->text();

    if(!bancoDeDados.isOpen())
    {
        qDebug() << "Database is closed!";
        return;
    }

    QSqlQuery query;

    if(query.exec("select * from tb_users where Username ='"+username+"'and Password='"+password+"'and Type_of_access='"+typeOfAccess+"'"))
    {
        int found = 0;
        while(query.next())
        {
            found++;
        }
        if(found>0)
        {
            this->close();
            if(typeOfAccess == 'G')
            {
                MajorWindow majorwindow;
                majorwindow.setModal(true);
                majorwindow.exec();
            }
            else if(typeOfAccess == 'U')
            {
                CommonUserWindow commonuserwindow;
                commonuserwindow.setModal(true);
                commonuserwindow.exec();
            }
            else if(typeOfAccess == 'A')
            {
                AdminWindow adminwindow;
                adminwindow.setModal(true);
                adminwindow.exec();
            }


        }else
        {
            ui->label->setText("Failed to Login");
            ui->txt_username->clear();
            ui->txt_password->clear();
            ui->txt_toa->text().clear();
            ui->txt_username->setFocus();
        }
    }


}



