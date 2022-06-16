#ifndef MAJORWINDOW_H
#define MAJORWINDOW_H

#include <QDialog>
#include <QMessageBox>
#include "inventorywindow.h"
#include "seeinventorywindow.h"
#include "removeproductwindow.h"

namespace Ui {
class MajorWindow;
}

class MajorWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MajorWindow(QWidget *parent = nullptr);
    ~MajorWindow();

private slots:
    void on_mInventoryButton_clicked();

    void on_vInventoryButton_clicked();

    void on_removeButton_clicked();

private:
    Ui::MajorWindow *ui;
};

#endif // MAJORWINDOW_H
