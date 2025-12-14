/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *user_Label;
    QLineEdit *user_Edit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *pass_Label;
    QLineEdit *pass_Edit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *forget_Label;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *login_Btn;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *reg_Btn;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName("LoginDialog");
        LoginDialog->resize(635, 728);
        LoginDialog->setMinimumSize(QSize(300, 500));
        LoginDialog->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_2 = new QVBoxLayout(LoginDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(7);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        widget = new QWidget(LoginDialog);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 25));
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/jx.jpg")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label->setWordWrap(false);
        label->setOpenExternalLinks(false);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        verticalLayout->addWidget(widget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        user_Label = new QLabel(LoginDialog);
        user_Label->setObjectName("user_Label");
        user_Label->setMinimumSize(QSize(0, 25));
        user_Label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(user_Label);

        user_Edit = new QLineEdit(LoginDialog);
        user_Edit->setObjectName("user_Edit");
        user_Edit->setMinimumSize(QSize(0, 25));
        user_Edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(user_Edit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pass_Label = new QLabel(LoginDialog);
        pass_Label->setObjectName("pass_Label");
        pass_Label->setMinimumSize(QSize(0, 25));
        pass_Label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_2->addWidget(pass_Label);

        pass_Edit = new QLineEdit(LoginDialog);
        pass_Edit->setObjectName("pass_Edit");
        pass_Edit->setMinimumSize(QSize(0, 25));
        pass_Edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_2->addWidget(pass_Edit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        forget_Label = new QLabel(LoginDialog);
        forget_Label->setObjectName("forget_Label");
        forget_Label->setMinimumSize(QSize(0, 25));
        forget_Label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_3->addWidget(forget_Label);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        login_Btn = new QPushButton(LoginDialog);
        login_Btn->setObjectName("login_Btn");
        login_Btn->setMinimumSize(QSize(100, 30));

        horizontalLayout_4->addWidget(login_Btn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        reg_Btn = new QPushButton(LoginDialog);
        reg_Btn->setObjectName("reg_Btn");
        reg_Btn->setMinimumSize(QSize(100, 30));

        horizontalLayout_5->addWidget(reg_Btn);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Dialog", nullptr));
        label->setText(QString());
        user_Label->setText(QCoreApplication::translate("LoginDialog", "\347\224\250\346\210\267\357\274\232", nullptr));
        pass_Label->setText(QCoreApplication::translate("LoginDialog", "\345\257\206\347\240\201\357\274\232", nullptr));
        forget_Label->setText(QCoreApplication::translate("LoginDialog", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
        login_Btn->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        reg_Btn->setText(QCoreApplication::translate("LoginDialog", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
