/********************************************************************************
** Form generated from reading UI file 'majorwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAJORWINDOW_H
#define UI_MAJORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MajorWindow
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *mInventoryButton;
    QPushButton *vInventoryButton;

    void setupUi(QDialog *MajorWindow)
    {
        if (MajorWindow->objectName().isEmpty())
            MajorWindow->setObjectName(QString::fromUtf8("MajorWindow"));
        MajorWindow->resize(554, 323);
        widget = new QWidget(MajorWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(140, 50, 261, 191));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mInventoryButton = new QPushButton(widget);
        mInventoryButton->setObjectName(QString::fromUtf8("mInventoryButton"));

        verticalLayout->addWidget(mInventoryButton);

        vInventoryButton = new QPushButton(widget);
        vInventoryButton->setObjectName(QString::fromUtf8("vInventoryButton"));

        verticalLayout->addWidget(vInventoryButton);


        retranslateUi(MajorWindow);

        QMetaObject::connectSlotsByName(MajorWindow);
    } // setupUi

    void retranslateUi(QDialog *MajorWindow)
    {
        MajorWindow->setWindowTitle(QCoreApplication::translate("MajorWindow", "Dialog", nullptr));
        mInventoryButton->setText(QCoreApplication::translate("MajorWindow", "Manage Inventory", nullptr));
        vInventoryButton->setText(QCoreApplication::translate("MajorWindow", "View Inventory", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MajorWindow: public Ui_MajorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAJORWINDOW_H
