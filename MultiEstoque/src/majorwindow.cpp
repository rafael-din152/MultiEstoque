#include "majorwindow.h"
#include "ui_majorwindow.h"

MajorWindow::MajorWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MajorWindow)
{
    ui->setupUi(this);
}

MajorWindow::~MajorWindow()
{
    delete ui;
}

void MajorWindow::on_mInventoryButton_clicked()
{
    InventoryWindow inventorywindow;
    inventorywindow.exec();
}


void MajorWindow::on_vInventoryButton_clicked()
{
    SeeInventoryWindow seeinventorywindow;
    seeinventorywindow.exec();
}


void MajorWindow::on_removeButton_clicked()
{
    RemoveProductWindow removeproductwindow;
    removeproductwindow.exec();
}

