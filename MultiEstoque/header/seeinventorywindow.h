#ifndef SEEINVENTORYWINDOW_H
#define SEEINVENTORYWINDOW_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class SeeInventoryWindow;
}

class SeeInventoryWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SeeInventoryWindow(QWidget *parent = nullptr);
    ~SeeInventoryWindow();

private slots:
    void on_backButton_clicked();

private:
    Ui::SeeInventoryWindow *ui;
};

#endif // SEEINVENTORYWINDOW_H
