/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QLabel *user_label;
    QLineEdit *user_edit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *email_label;
    QLineEdit *email_edit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *passwd_label;
    QLineEdit *passwd_edit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *recognise_label;
    QLineEdit *recognise_edit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *varify_label;
    QLineEdit *varify_edit;
    QSpacerItem *horizontalSpacer;
    QPushButton *get_btn;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *confirm_btn;
    QPushButton *cancel_btn;
    QWidget *page_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *RegisterDialog)
    {
        if (RegisterDialog->objectName().isEmpty())
            RegisterDialog->setObjectName("RegisterDialog");
        RegisterDialog->resize(341, 258);
        verticalLayout_2 = new QVBoxLayout(RegisterDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        stackedWidget = new QStackedWidget(RegisterDialog);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        user_label = new QLabel(page);
        user_label->setObjectName("user_label");
        user_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(user_label);

        user_edit = new QLineEdit(page);
        user_edit->setObjectName("user_edit");
        user_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(user_edit);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        email_label = new QLabel(page);
        email_label->setObjectName("email_label");
        email_label->setMinimumSize(QSize(0, 25));
        email_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_2->addWidget(email_label);

        email_edit = new QLineEdit(page);
        email_edit->setObjectName("email_edit");
        email_edit->setMinimumSize(QSize(0, 25));

        horizontalLayout_2->addWidget(email_edit);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        passwd_label = new QLabel(page);
        passwd_label->setObjectName("passwd_label");
        passwd_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_3->addWidget(passwd_label);

        passwd_edit = new QLineEdit(page);
        passwd_edit->setObjectName("passwd_edit");
        passwd_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_3->addWidget(passwd_edit);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        recognise_label = new QLabel(page);
        recognise_label->setObjectName("recognise_label");
        recognise_label->setMinimumSize(QSize(0, 25));
        recognise_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_5->addWidget(recognise_label);

        recognise_edit = new QLineEdit(page);
        recognise_edit->setObjectName("recognise_edit");

        horizontalLayout_5->addWidget(recognise_edit);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        varify_label = new QLabel(page);
        varify_label->setObjectName("varify_label");
        varify_label->setMinimumSize(QSize(0, 25));
        varify_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_6->addWidget(varify_label);

        varify_edit = new QLineEdit(page);
        varify_edit->setObjectName("varify_edit");
        varify_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_6->addWidget(varify_edit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        get_btn = new QPushButton(page);
        get_btn->setObjectName("get_btn");

        horizontalLayout_6->addWidget(get_btn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(10);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(10, -1, 10, -1);
        confirm_btn = new QPushButton(page);
        confirm_btn->setObjectName("confirm_btn");

        horizontalLayout_8->addWidget(confirm_btn);

        cancel_btn = new QPushButton(page);
        cancel_btn->setObjectName("cancel_btn");

        horizontalLayout_8->addWidget(cancel_btn);


        verticalLayout_3->addLayout(horizontalLayout_8);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer_2);


        retranslateUi(RegisterDialog);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QCoreApplication::translate("RegisterDialog", "Dialog", nullptr));
        user_label->setText(QCoreApplication::translate("RegisterDialog", "\347\224\250\346\210\267:", nullptr));
        email_label->setText(QCoreApplication::translate("RegisterDialog", "\351\202\256\347\256\261:", nullptr));
        passwd_label->setText(QCoreApplication::translate("RegisterDialog", "\345\257\206\347\240\201:", nullptr));
        recognise_label->setText(QCoreApplication::translate("RegisterDialog", "\347\241\256\350\256\244:", nullptr));
        varify_label->setText(QCoreApplication::translate("RegisterDialog", "\351\252\214\350\257\201\347\240\201:", nullptr));
        get_btn->setText(QCoreApplication::translate("RegisterDialog", "\350\216\267\345\217\226", nullptr));
        confirm_btn->setText(QCoreApplication::translate("RegisterDialog", "\347\241\256\350\256\244", nullptr));
        cancel_btn->setText(QCoreApplication::translate("RegisterDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
