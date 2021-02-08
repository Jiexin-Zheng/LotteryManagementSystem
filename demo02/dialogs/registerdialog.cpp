#include "registerdialog.h"
#include "ui_registerdialog.h"
#include "sql/sqldao.h"
#include <QMessageBox>

RegisterDialog::RegisterDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterDialog)
{
    ui->setupUi(this);
}

RegisterDialog::~RegisterDialog()
{
    delete ui;
}

void RegisterDialog::on_btnConfirm_clicked()
{
    QString username = ui->leUsername->text();
    QString userpwd = ui->leUserpwd->text();
    QString userpwdAg = ui->leUserpwdAg->text();

    if(username == "admin"){
        //管理员
        QMessageBox::warning(this,"注册信息","注册失败，重复注册");
        return;
    }

    if(username == "notary"){
        //公证员
        QMessageBox::warning(this,"注册信息","注册失败，重复注册");
        return;
    }

    /*1.判断是否可以注册*/
    do{
        SqlDao sd;
        bool ret = sd.selectUserByUsername(username);
        if(ret){
            //有了，不能重复注册
            QMessageBox::warning(this,"注册信息","注册失败，重复注册");
            break;
        }

        ret = (userpwd == userpwdAg);
        if(!ret){
            QMessageBox::warning(this,"注册信息","注册失败，密码不一致");
        }else{
            sd.insertUser(User(username,userpwd));
            QMessageBox::information(this,"注册信息","注册成功");
        }
    }while(0);

    on_btnCancel_clicked();
}

void RegisterDialog::on_btnCancel_clicked()
{
    ui->leUsername->clear();
    ui->leUserpwd->clear();
    ui->leUserpwdAg->clear();

    this->hide();
}
