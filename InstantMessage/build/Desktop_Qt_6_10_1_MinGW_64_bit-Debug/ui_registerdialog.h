/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
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
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *err_Tip;
    QHBoxLayout *horizontalLayout;
    QLabel *user_Label;
    QLineEdit *user_Edit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *email_Label;
    QLineEdit *email_Edit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *pass_Label;
    QLineEdit *pass_Edit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *verify_Label;
    QLineEdit *verify_Edit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *getCode_Label;
    QLineEdit *getCode_Edit;
    QPushButton *get_Code;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *confirm_Btn;
    QPushButton *cancel_Btn;
    QSpacerItem *verticalSpacer_3;
    QWidget *page_2;

    void setupUi(QDialog *RegisterDialog)
    {
        if (RegisterDialog->objectName().isEmpty())
            RegisterDialog->setObjectName("RegisterDialog");
        RegisterDialog->resize(400, 600);
        RegisterDialog->setMinimumSize(QSize(400, 600));
        RegisterDialog->setMaximumSize(QSize(400, 600));
        horizontalLayout_2 = new QHBoxLayout(RegisterDialog);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        stackedWidget = new QStackedWidget(RegisterDialog);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        widget = new QWidget(page);
        widget->setObjectName("widget");
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        err_Tip = new QLabel(widget);
        err_Tip->setObjectName("err_Tip");
        err_Tip->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(err_Tip);


        verticalLayout_2->addWidget(widget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        user_Label = new QLabel(page);
        user_Label->setObjectName("user_Label");
        user_Label->setMinimumSize(QSize(0, 25));
        user_Label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(user_Label);

        user_Edit = new QLineEdit(page);
        user_Edit->setObjectName("user_Edit");
        user_Edit->setMinimumSize(QSize(0, 25));
        user_Edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(user_Edit);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        email_Label = new QLabel(page);
        email_Label->setObjectName("email_Label");
        email_Label->setMinimumSize(QSize(0, 25));
        email_Label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_3->addWidget(email_Label);

        email_Edit = new QLineEdit(page);
        email_Edit->setObjectName("email_Edit");
        email_Edit->setMinimumSize(QSize(0, 25));
        email_Edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_3->addWidget(email_Edit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pass_Label = new QLabel(page);
        pass_Label->setObjectName("pass_Label");
        pass_Label->setMinimumSize(QSize(0, 25));
        pass_Label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_4->addWidget(pass_Label);

        pass_Edit = new QLineEdit(page);
        pass_Edit->setObjectName("pass_Edit");
        pass_Edit->setMinimumSize(QSize(0, 25));
        pass_Edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_4->addWidget(pass_Edit);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verify_Label = new QLabel(page);
        verify_Label->setObjectName("verify_Label");
        verify_Label->setMinimumSize(QSize(0, 25));
        verify_Label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_5->addWidget(verify_Label);

        verify_Edit = new QLineEdit(page);
        verify_Edit->setObjectName("verify_Edit");
        verify_Edit->setMinimumSize(QSize(0, 25));
        verify_Edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_5->addWidget(verify_Edit);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        getCode_Label = new QLabel(page);
        getCode_Label->setObjectName("getCode_Label");
        getCode_Label->setMinimumSize(QSize(0, 25));
        getCode_Label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_6->addWidget(getCode_Label);

        getCode_Edit = new QLineEdit(page);
        getCode_Edit->setObjectName("getCode_Edit");
        getCode_Edit->setMinimumSize(QSize(0, 25));
        getCode_Edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_6->addWidget(getCode_Edit);

        get_Code = new QPushButton(page);
        get_Code->setObjectName("get_Code");
        get_Code->setMinimumSize(QSize(0, 25));
        get_Code->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_6->addWidget(get_Code);


        verticalLayout_2->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        confirm_Btn = new QPushButton(page);
        confirm_Btn->setObjectName("confirm_Btn");
        confirm_Btn->setMinimumSize(QSize(0, 25));
        confirm_Btn->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_7->addWidget(confirm_Btn);

        cancel_Btn = new QPushButton(page);
        cancel_Btn->setObjectName("cancel_Btn");
        cancel_Btn->setMinimumSize(QSize(0, 25));
        cancel_Btn->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_7->addWidget(cancel_Btn);


        verticalLayout_2->addLayout(horizontalLayout_7);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(RegisterDialog);

        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QCoreApplication::translate("RegisterDialog", "Dialog", nullptr));
        err_Tip->setText(QCoreApplication::translate("RegisterDialog", "\351\224\231\350\257\257\346\217\220\347\244\272", nullptr));
        user_Label->setText(QCoreApplication::translate("RegisterDialog", "\347\224\250\346\210\267\357\274\232", nullptr));
        email_Label->setText(QCoreApplication::translate("RegisterDialog", "\351\202\256\347\256\261\357\274\232", nullptr));
        pass_Label->setText(QCoreApplication::translate("RegisterDialog", "\345\257\206\347\240\201\357\274\232", nullptr));
        verify_Label->setText(QCoreApplication::translate("RegisterDialog", "\347\241\256\350\256\244\357\274\232", nullptr));
        getCode_Label->setText(QCoreApplication::translate("RegisterDialog", "\351\252\214\350\257\201\347\240\201\357\274\232", nullptr));
        get_Code->setText(QCoreApplication::translate("RegisterDialog", "\350\216\267\345\217\226", nullptr));
        confirm_Btn->setText(QCoreApplication::translate("RegisterDialog", "\347\241\256\350\256\244", nullptr));
        cancel_Btn->setText(QCoreApplication::translate("RegisterDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
