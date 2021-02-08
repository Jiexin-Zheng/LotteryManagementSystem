#include "chargedialog.h"
#include "ui_chargedialog.h"
#include <QMessageBox>
#include "sql/sqldao.h"
#include <QDebug>
#include "widget/userwidget.h"

ChargeDialog::ChargeDialog(User& user,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChargeDialog),
    user(user)
{
    ui->setupUi(this);

    QObject::connect(ui->btnCancel,SIGNAL(clicked()),this,SLOT(hide()));
}

ChargeDialog::~ChargeDialog()
{
    delete ui;
}

void ChargeDialog::on_btnConfirm_clicked()
{
    bool ret = false;
    float charge = ui->leCharge->text().toFloat(&ret);

    if(!ret || charge <= 0){
        QMessageBox::warning(this,"充值信息","充值失败，金额错误");
    }else{
        SqlDao sd;
        if(sd.updateUserMoney(user.getUsername(), charge)){
            QMessageBox::information(this,"充值信息","充值成功");
            user.setMoney(user.getMoney() + charge);

            UserWidget* uw = static_cast<UserWidget*>(this->parent());
            if(uw)  uw->refleshUser();
        }else{
            QMessageBox::warning(this,"充值失败","系统错误");
        }
    }

    this->hide();
}

void ChargeDialog::showEvent(QShowEvent *event)
{
    ui->leMoney->setText(QString::number(user.getMoney()));
    event->accept();
}
