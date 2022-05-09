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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *leport;
    QPushButton *pushButton;
    QListWidget *lwlog;
    QTextEdit *teReceive;
    QTextEdit *teSend;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        leport = new QLineEdit(Widget);
        leport->setObjectName(QString::fromUtf8("leport"));
        leport->setGeometry(QRect(10, 20, 113, 20));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 20, 80, 18));
        lwlog = new QListWidget(Widget);
        lwlog->setObjectName(QString::fromUtf8("lwlog"));
        lwlog->setGeometry(QRect(230, 40, 256, 192));
        teReceive = new QTextEdit(Widget);
        teReceive->setObjectName(QString::fromUtf8("teReceive"));
        teReceive->setGeometry(QRect(10, 70, 211, 64));
        teSend = new QTextEdit(Widget);
        teSend->setObjectName(QString::fromUtf8("teSend"));
        teSend->setGeometry(QRect(10, 150, 211, 64));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 50, 40, 12));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 130, 40, 12));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 250, 80, 18));
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 250, 80, 18));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\345\210\230\351\207\221\347\216\211\347\274\226\347\250\213\346\234\215\345\212\241\347\253\257", nullptr));
        leport->setPlaceholderText(QCoreApplication::translate("Widget", "\347\253\257\345\217\243\345\217\267", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\345\274\200\345\220\257\347\233\221\345\220\254", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\216\245\346\224\266", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "\345\271\277\346\222\255", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201\346\266\210\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
