#include "removeuserwindow.h"
#include "ui_removeuserwindow.h"

RemoveUserWindow::RemoveUserWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoveUserWindow)
{
    ui->setupUi(this);

    QSqlQuery query;
    query.prepare("select * from tb_users");
    if(query.exec())
    {
        int line = 0;
        ui->tW_users->setColumnCount(4);
        while(query.next())
        {

            ui->tW_users->insertRow(line);
            ui->tW_users->setItem(line,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tW_users->setItem(line,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tW_users->setItem(line,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tW_users->setItem(line,3,new QTableWidgetItem(query.value(3).toString()));
            ui->tW_users->setRowHeight(line,20);
            line++;
        }
        ui->tW_users->setColumnWidth(0,30);
        ui->tW_users->setColumnWidth(1,100);
        ui->tW_users->setColumnWidth(3,100);

        QStringList header = {"ID","Name","Username","Type of access"};
        ui->tW_users->setHorizontalHeaderLabels(header);
        ui->tW_users->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tW_users->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tW_users->verticalHeader()->setVisible(false);
        ui->tW_users->setStyleSheet("QTableView {selection-background-color:blue}");

    }else
    {
        QMessageBox::warning(this,"ERROR!","Failed to load database");
    }
}

RemoveUserWindow::~RemoveUserWindow()
{
    delete ui;
}

void RemoveUserWindow::on_backButton_clicked()
{
    this->close();
}


void RemoveUserWindow::on_removeButton_clicked()
{
    int line = ui->tW_users->currentRow();
    int id = ui->tW_users->item(line,0)->text().toInt();

    QSqlQuery query;
    query.prepare("delete from tb_users where id_users="+QString::number(id));
    if(query.exec())
    {
        QMessageBox::information(this,"","User successefully removed from database!");

    }else
    {
        QMessageBox::warning(this,"ERROR!","Failed to load database");
    }
    ui->tW_users->removeRow(line);
}

