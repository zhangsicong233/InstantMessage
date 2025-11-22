#include "registerdialog.h"
#include "ui_registerdialog.h"
#include "global.h"

RegisterDialog::RegisterDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterDialog)
{
    ui->setupUi(this);
    ui->pass_Edit->setEchoMode(QLineEdit::Password);
    ui->verify_Edit->setEchoMode(QLineEdit::Password);
    ui->err_Tip->setProperty("state", "normal");

    repolish(ui->err_Tip);
}

RegisterDialog::~RegisterDialog()
{
    delete ui;
}

void RegisterDialog::on_get_Code_clicked()
{
    auto email=  ui->email_Edit->text();
    QRegularExpression regex(R"((\w+)(\.|_)?(\w*)@(/w+)(\.(\w+))+)");

    bool match = regex.match(email).hasMatch();
    if (match) {
        // 发送 http 验证码
    } else {
        showTip(tr("邮箱地址不正确"), false);
    }
}

void RegisterDialog::showTip(QString str, bool b_Ok)
{
    if (b_Ok) {
        ui->err_Tip->setProperty("state", "normal");
    } else {
        ui->err_Tip->setProperty("state", "err");
    }

    ui->err_Tip->setText(str);


    repolish(ui->err_Tip);
}

