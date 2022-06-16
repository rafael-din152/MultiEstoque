#include "seeinventorywindow.h"
#include "ui_seeinventorywindow.h"

SeeInventoryWindow::SeeInventoryWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SeeInventoryWindow)
{
    ui->setupUi(this);

    QSqlQuery query;
    query.prepare("select * from tb_inventory");
    if(query.exec())
    {
        int line = 0;
        ui->tw_inventory->setColumnCount(4);
        while(query.next())
        {
            ui->tw_inventory->insertRow(line);
            ui->tw_inventory->setItem(line,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tw_inventory->setItem(line,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tw_inventory->setItem(line,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tw_inventory->setItem(line,3,new QTableWidgetItem(query.value(3).toString()));
            ui->tw_inventory->setRowHeight(line,20);
            line++;
        }
        ui->tw_inventory->setColumnWidth(0,30);
        ui->tw_inventory->setColumnWidth(1,100);
        ui->tw_inventory->setColumnWidth(3,100);

        QStringList header = {"ID","Product","Quantity","Price"};
        ui->tw_inventory->setHorizontalHeaderLabels(header);
        ui->tw_inventory->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tw_inventory->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tw_inventory->verticalHeader()->setVisible(false);
        ui->tw_inventory->setStyleSheet("QTableView {selection-background-color:blue}");

    }else
    {
        QMessageBox::warning(this,"ERROR!","Failed to load database");
    }
}

SeeInventoryWindow::~SeeInventoryWindow()
{
    delete ui;
}

void SeeInventoryWindow::on_backButton_clicked()
{
    this->close();
}

