/********************************************************************************
** Form generated from reading UI file 'seeinventorywindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEEINVENTORYWINDOW_H
#define UI_SEEINVENTORYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_SeeInventoryWindow
{
public:
    QTableWidget *tw_inventory;
    QPushButton *backButton;

    void setupUi(QDialog *SeeInventoryWindow)
    {
        if (SeeInventoryWindow->objectName().isEmpty())
            SeeInventoryWindow->setObjectName(QString::fromUtf8("SeeInventoryWindow"));
        SeeInventoryWindow->resize(446, 321);
        tw_inventory = new QTableWidget(SeeInventoryWindow);
        tw_inventory->setObjectName(QString::fromUtf8("tw_inventory"));
        tw_inventory->setGeometry(QRect(20, 21, 401, 241));
        backButton = new QPushButton(SeeInventoryWindow);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(74, 290, 101, 24));

        retranslateUi(SeeInventoryWindow);

        QMetaObject::connectSlotsByName(SeeInventoryWindow);
    } // setupUi

    void retranslateUi(QDialog *SeeInventoryWindow)
    {
        SeeInventoryWindow->setWindowTitle(QCoreApplication::translate("SeeInventoryWindow", "Dialog", nullptr));
        backButton->setText(QCoreApplication::translate("SeeInventoryWindow", "<      Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeeInventoryWindow: public Ui_SeeInventoryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEEINVENTORYWINDOW_H
