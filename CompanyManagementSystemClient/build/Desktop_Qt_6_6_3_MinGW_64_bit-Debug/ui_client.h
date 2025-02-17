/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Client
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *widget;
    QLineEdit *lineEdit_1;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget_2;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName("Client");
        Client->resize(525, 226);
        Client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(Client);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 171, 31));
        label->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);\n"
"font: 16pt \"Microsoft YaHei UI\";\n"
"background:transparent;\n"
"font-width:500;"));
        label_2 = new QLabel(Client);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 70, 81, 31));
        label_2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"font: 14pt \"Microsoft YaHei UI\";\n"
"font-width:400;"));
        label_3 = new QLabel(Client);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 130, 81, 31));
        label_3->setStyleSheet(QString::fromUtf8("background:transparent;font: 14pt \"Microsoft YaHei UI\";"));
        widget = new QWidget(Client);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(110, 130, 331, 30));
        widget->setStyleSheet(QString::fromUtf8("background:rgba(102, 121, 168, 0.08);"));
        lineEdit_1 = new QLineEdit(widget);
        lineEdit_1->setObjectName("lineEdit_1");
        lineEdit_1->setGeometry(QRect(0, 0, 311, 30));
        lineEdit_1->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"border:none;\n"
"background:rgba(102, 121, 168, 0.08);"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(310, 0, 21, 30));
        pushButton->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"	background-color:rgba(102, 121, 168, 0.08);\n"
"}\n"
""));
        pushButton_2 = new QPushButton(Client);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 180, 93, 28));
        widget_2 = new QWidget(Client);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(110, 70, 331, 30));
        widget_2->setStyleSheet(QString::fromUtf8("background:rgba(102, 121, 168, 0.08);"));
        lineEdit_2 = new QLineEdit(widget_2);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(0, 0, 331, 30));
        lineEdit_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"border:none;\n"
"background:rgba(102, 121, 168, 0.08);"));

        retranslateUi(Client);

        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QWidget *Client)
    {
        Client->setWindowTitle(QCoreApplication::translate("Client", "Form", nullptr));
        label->setText(QCoreApplication::translate("Client", "\345\205\254\345\217\270\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_2->setText(QCoreApplication::translate("Client", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Client", "\345\257\206\347\240\201\357\274\232", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("Client", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
