#include "client.h"
#include "ui_client.h"
#include<QIcon>
#include<QMessageBox>
Client::Client(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Client)
{
    ui->setupUi(this);
    ui->pushButton->setIcon(QIcon(":/icons/preview.png"));
    ui->lineEdit_1->setEchoMode(QLineEdit::Password);
}

Client::~Client()
{
    delete ui;
}

void Client::on_pushButton_2_clicked()
{
    if(ui->lineEdit_1->text().isEmpty() || ui->lineEdit_2->text().isEmpty()){
        QMessageBox::warning(this,QString("警告"),QString("姓名或者密码输入错误"),QMessageBox::Ok);
    }
}


void Client::on_pushButton_clicked()
{
    if(m_isPassWord){
        ui->lineEdit_1->setEchoMode(QLineEdit::Normal);
        m_isPassWord=false;
    }else{
        m_isPassWord=true;
        ui->lineEdit_1->setEchoMode(QLineEdit::Password);
    }
}

