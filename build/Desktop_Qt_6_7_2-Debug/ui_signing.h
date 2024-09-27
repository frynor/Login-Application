/********************************************************************************
** Form generated from reading UI file 'signing.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNING_H
#define UI_SIGNING_H

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

class Ui_Signing
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Signing)
    {
        if (Signing->objectName().isEmpty())
            Signing->setObjectName("Signing");
        Signing->resize(350, 300);
        widget = new QWidget(Signing);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 30, 274, 204));
        verticalLayout_5 = new QVBoxLayout(widget);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        QFont font;
        font.setPointSize(17);
        font.setBold(true);
        label_4->setFont(font);

        verticalLayout_3->addWidget(label_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_3->addWidget(lineEdit_3);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        verticalLayout_4->addWidget(pushButton);


        verticalLayout_5->addLayout(verticalLayout_4);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_5->addWidget(pushButton_2);


        retranslateUi(Signing);

        QMetaObject::connectSlotsByName(Signing);
    } // setupUi

    void retranslateUi(QDialog *Signing)
    {
        Signing->setWindowTitle(QCoreApplication::translate("Signing", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("Signing", "Create an account", nullptr));
        label->setText(QCoreApplication::translate("Signing", "Enter Username", nullptr));
        label_2->setText(QCoreApplication::translate("Signing", "Enter Password", nullptr));
        label_3->setText(QCoreApplication::translate("Signing", "Repeat Password", nullptr));
        pushButton->setText(QCoreApplication::translate("Signing", "Create an account", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Signing", "Go Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signing: public Ui_Signing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNING_H
