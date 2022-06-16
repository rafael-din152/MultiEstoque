#include "inventorywindow.h"
#include "ui_inventorywindow.h"

InventoryWindow::InventoryWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InventoryWindow)
{
    ui->setupUi(this);
}

InventoryWindow::~InventoryWindow()
{
    delete ui;
}

void InventoryWindow::on_saveButton_clicked()
{
    QString product = ui->txt_product->text();
    QString amount = ui->txt_amount->text();
    QString price = ui->txt_price->text();

    QSqlQuery query;
    query.prepare("insert into tb_inventory (Product,Quantity,Unity_Price) values"
                  "('"+product+"','"+amount+"','"+price+"')");

    if(query.exec())
    {
        QMessageBox::information(this,"","Produto inserido com sucesso");
        ui->txt_product->clear();
        ui->txt_amount->clear();
        ui->txt_price->clear();
        ui->txt_product->setFocus();

    }else
    {
        qDebug() << "Erro ao inserir produto(s)";
    }
}


void InventoryWindow::on_backButton_clicked()
{
    this->close();
}

