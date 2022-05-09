/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *IP;
    QLineEdit *Port;
    QPushButton *pushButton;
    QListWidget *listWidget;
    QTextEdit *teReceive;
    QTextEdit *teSend;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        IP = new QLineEdit(Widget);
        IP->setObjectName(QString::fromUtf8("IP"));
        IP->setGeometry(QRect(20, 20, 121, 20));
        Port = new QLineEdit(Widget);
        Port->setObjectName(QString::fromUtf8("Port"));
        Port->setGeometry(QRect(150, 20, 61, 20));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 20, 51, 20));
        listWidget = new QListWidget(Widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(280, 20, 256, 192));
        teReceive = new QTextEdit(Widget);
        teReceive->setObjectName(QString::fromUtf8("teReceive"));
        teReceive->setGeometry(QRect(20, 60, 251, 111));
        teSend = new QTextEdit(Widget);
        teSend->setObjectName(QString::fromUtf8("teSend"));
        teSend->setGeometry(QRect(20, 180, 251, 111));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 257, 80, 21));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "TCP \345\256\242\346\210\267\347\253\257", nullptr));
        IP->setText(QCoreApplication::translate("Widget", "127.0.0.1", nullptr));
        Port->setText(QCoreApplication::translate("Widget", "8888", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\347\231\273\351\231\206", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
