#include "commonuserwindow.h"
#include "ui_commonuserwindow.h"

CommonUserWindow::CommonUserWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CommonUserWindow)
{
    ui->setupUi(this);

    QSqlQuery query;
    query.prepare("select * from tb_inventory");
    if(query.exec())
    {
        int line = 0;
        ui->tw_inventorY->setColumnCount(4);
        while(query.next())
        {
            ui->tw_inventorY->insertRow(line);
            ui->tw_inventorY->setItem(line,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tw_inventorY->setItem(line,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tw_inventorY->setItem(line,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tw_inventorY->setItem(line,3,new QTableWidgetItem(query.value(3).toString()));
            ui->tw_inventorY->setRowHeight(line,20);
            line++;
        }
        ui->tw_inventorY->setColumnWidth(0,30);
        ui->tw_inventorY->setColumnWidth(1,150);
        ui->tw_inventorY->setColumnWidth(3,230);

        QStringList header = {"ID","Product Name","Quantity","Price"};
        ui->tw_inventorY->setHorizontalHeaderLabels(header);
        ui->tw_inventorY->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tw_inventorY->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tw_inventorY->verticalHeader()->setVisible(false);
        ui->tw_inventorY->setStyleSheet("QTableView {selection-background-color:blue}");

    }else
    {
        QMessageBox::warning(this,"ERROR!","Failed to load database");
    }
}

CommonUserWindow::~CommonUserWindow()
{
    delete ui;
}

void CommonUserWindow::on_BackButton_clicked()
{
    this->close();

}

