#include "logindialog.h"
#include "ui_logindialog.h"

LoginDialog::LoginDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    //点击注册按钮发送切换注册窗口信号
    connect(ui->reg_btn,&QPushButton::clicked,this,&LoginDialog::switchRegDialog);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}
