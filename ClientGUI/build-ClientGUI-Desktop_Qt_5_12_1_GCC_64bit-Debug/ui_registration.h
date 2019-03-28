/********************************************************************************
** Form generated from reading UI file 'registration.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_H
#define UI_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registration
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *loginEdit;
    QLabel *label_2;
    QLineEdit *passwordEdit;

    void setupUi(QDialog *registration)
    {
        if (registration->objectName().isEmpty())
            registration->setObjectName(QString::fromUtf8("registration"));
        registration->resize(318, 144);
        layoutWidget = new QWidget(registration);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 281, 101));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        loginEdit = new QLineEdit(layoutWidget);
        loginEdit->setObjectName(QString::fromUtf8("loginEdit"));

        gridLayout->addWidget(loginEdit, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        passwordEdit = new QLineEdit(layoutWidget);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));

        gridLayout->addWidget(passwordEdit, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(registration);

        QMetaObject::connectSlotsByName(registration);
    } // setupUi

    void retranslateUi(QDialog *registration)
    {
        registration->setWindowTitle(QString());
        pushButton->setText(QApplication::translate("registration", "Sign in", nullptr));
        pushButton_2->setText(QApplication::translate("registration", "Sign up", nullptr));
        label->setText(QApplication::translate("registration", "Login", nullptr));
        label_2->setText(QApplication::translate("registration", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registration: public Ui_registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H
