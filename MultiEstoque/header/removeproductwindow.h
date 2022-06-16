#ifndef REMOVEPRODUCTWINDOW_H
#define REMOVEPRODUCTWINDOW_H

#include <QDialog>
#include <QMessageBox>
#include <QtSql>


namespace Ui {
class RemoveProductWindow;
}

class RemoveProductWindow : public QDialog
{
    Q_OBJECT

public:
    explicit RemoveProductWindow(QWidget *parent = nullptr);
    ~RemoveProductWindow();

private slots:
    void on_backButton_clicked();

    void on_removeButton_clicked();

private:
    Ui::RemoveProductWindow *ui;
};

#endif // REMOVEPRODUCTWINDOW_H
