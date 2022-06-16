#include "removeproductwindow.h"
#include "ui_removeproductwindow.h"

RemoveProductWindow::RemoveProductWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoveProductWindow)
{
    ui->setupUi(this);
    QSqlQuery query;
    query.prepare("select * from tb_inventory");
    if(query.exec())
    {
        int line = 0;
        ui->tW_inventory->setColumnCount(4);
        while(query.next())
        {

            ui->tW_inventory->insertRow(line);
            ui->tW_inventory->setItem(line,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tW_inventory->setItem(line,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tW_inventory->setItem(line,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tW_inventory->setItem(line,3,new QTableWidgetItem(query.value(3).toString()));
            ui->tW_inventory->setRowHeight(line,20);
            line++;
        }
        ui->tW_inventory->setColumnWidth(0,30);
        ui->tW_inventory->setColumnWidth(1,100);
        ui->tW_inventory->setColumnWidth(3,100);

        QStringList header = {"ID","Product","Quantity","Price"};
        ui->tW_inventory->setHorizontalHeaderLabels(header);
        ui->tW_inventory->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tW_inventory->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tW_inventory->verticalHeader()->setVisible(false);
        ui->tW_inventory->setStyleSheet("QTableView {selection-background-color:blue}");

    }else
    {
        QMessageBox::warning(this,"ERROR!","Failed to load database");
    }
}


RemoveProductWindow::~RemoveProductWindow()
{
    delete ui;
}

void RemoveProductWindow::on_backButton_clicked()
{
    this->close();
}


void RemoveProductWindow::on_removeButton_clicked()
{
    int line = ui->tW_inventory->currentRow();
    int id = ui->tW_inventory->item(line,0)->text().toInt();

    QSqlQuery query;
    query.prepare("delete from tb_invetory where id="+QString::number(id));
    if(query.exec())
    {
        QMessageBox::information(this,"","Product successefully removed from database!");

    }else
    {
        QMessageBox::warning(this,"ERROR!","Failed to load database");
    }
    ui->tW_inventory->removeRow(line);
}

