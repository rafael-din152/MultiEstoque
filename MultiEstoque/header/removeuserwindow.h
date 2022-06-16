#ifndef REMOVEUSERWINDOW_H
#define REMOVEUSERWINDOW_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class RemoveUserWindow;
}

class RemoveUserWindow : public QDialog
{
    Q_OBJECT

public:
    explicit RemoveUserWindow(QWidget *parent = nullptr);
    ~RemoveUserWindow();

private slots:
    void on_backButton_clicked();

    void on_removeButton_clicked();

private:
    Ui::RemoveUserWindow *ui;
};

#endif // REMOVEUSERWINDOW_H
