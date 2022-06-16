#ifndef INVENTORYWINDOW_H
#define INVENTORYWINDOW_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class InventoryWindow;
}

class InventoryWindow : public QDialog
{
    Q_OBJECT

public:
    explicit InventoryWindow(QWidget *parent = nullptr);
    ~InventoryWindow();

private slots:
    void on_saveButton_clicked();

    void on_backButton_clicked();

private:
    Ui::InventoryWindow *ui;
};

#endif // INVENTORYWINDOW_H
