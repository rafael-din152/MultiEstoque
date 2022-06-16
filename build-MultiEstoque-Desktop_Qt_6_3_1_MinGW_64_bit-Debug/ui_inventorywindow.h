/********************************************************************************
** Form generated from reading UI file 'inventorywindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVENTORYWINDOW_H
#define UI_INVENTORYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InventoryWindow
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *txt_product;
    QLineEdit *txt_amount;
    QLineEdit *txt_price;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *productLabel;
    QLabel *amountLabel;
    QLabel *priceLabel;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QPushButton *saveButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *InventoryWindow)
    {
        if (InventoryWindow->objectName().isEmpty())
            InventoryWindow->setObjectName(QString::fromUtf8("InventoryWindow"));
        InventoryWindow->resize(481, 329);
        widget = new QWidget(InventoryWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(170, 50, 251, 141));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        txt_product = new QLineEdit(widget);
        txt_product->setObjectName(QString::fromUtf8("txt_product"));

        verticalLayout->addWidget(txt_product);

        txt_amount = new QLineEdit(widget);
        txt_amount->setObjectName(QString::fromUtf8("txt_amount"));

        verticalLayout->addWidget(txt_amount);

        txt_price = new QLineEdit(widget);
        txt_price->setObjectName(QString::fromUtf8("txt_price"));

        verticalLayout->addWidget(txt_price);

        widget1 = new QWidget(InventoryWindow);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(62, 51, 81, 131));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        productLabel = new QLabel(widget1);
        productLabel->setObjectName(QString::fromUtf8("productLabel"));

        verticalLayout_2->addWidget(productLabel);

        amountLabel = new QLabel(widget1);
        amountLabel->setObjectName(QString::fromUtf8("amountLabel"));

        verticalLayout_2->addWidget(amountLabel);

        priceLabel = new QLabel(widget1);
        priceLabel->setObjectName(QString::fromUtf8("priceLabel"));

        verticalLayout_2->addWidget(priceLabel);

        widget2 = new QWidget(InventoryWindow);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(90, 230, 281, 41));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        saveButton = new QPushButton(widget2);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        horizontalLayout->addWidget(saveButton);

        cancelButton = new QPushButton(widget2);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout->addWidget(cancelButton);


        retranslateUi(InventoryWindow);

        QMetaObject::connectSlotsByName(InventoryWindow);
    } // setupUi

    void retranslateUi(QDialog *InventoryWindow)
    {
        InventoryWindow->setWindowTitle(QCoreApplication::translate("InventoryWindow", "Dialog", nullptr));
        productLabel->setText(QCoreApplication::translate("InventoryWindow", "Product", nullptr));
        amountLabel->setText(QCoreApplication::translate("InventoryWindow", "Quantity", nullptr));
        priceLabel->setText(QCoreApplication::translate("InventoryWindow", "Price", nullptr));
        saveButton->setText(QCoreApplication::translate("InventoryWindow", "Save", nullptr));
        cancelButton->setText(QCoreApplication::translate("InventoryWindow", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InventoryWindow: public Ui_InventoryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTORYWINDOW_H
