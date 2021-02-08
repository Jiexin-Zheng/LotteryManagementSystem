#include "lotterybuydialog.h"
#include "ui_lotterybuydialog.h"
#include <QTime>
#include "sql/sqldao.h"
#include "widget/userwidget.h"
#include <QMessageBox>
#include <QDebug>

LotteryBuyDialog::LotteryBuyDialog(User& user,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LotteryBuyDialog),
    user(user)
{
    ui->setupUi(this);

    QObject::connect(ui->btnCancel,SIGNAL(clicked()),this,SLOT(hide()));
}

LotteryBuyDialog::~LotteryBuyDialog()
{
    delete ui;
}

void LotteryBuyDialog::setPublishId(int id)
{
    ui->lePublishId->setText(QString::number(id));
}

void LotteryBuyDialog::setPublishPrice(float price)
{
    ui->lePrice->setText(QString::number(price));
}

void LotteryBuyDialog::on_btnRandom_clicked()
{
    qsrand(QTime::currentTime().msecsSinceStartOfDay());
    ui->cbNum1->setCurrentIndex(qrand() % 10);
    ui->cbNum2->setCurrentIndex(qrand() % 10);
    ui->cbNum3->setCurrentIndex(qrand() % 10);
    ui->cbNum4->setCurrentIndex(qrand() % 10);
    ui->cbNum5->setCurrentIndex(qrand() % 10);
    ui->cbNum6->setCurrentIndex(qrand() % 10);
    ui->cbNum7->setCurrentIndex(qrand() % 10);

    return;
}

void LotteryBuyDialog::on_btnConfirm_clicked()
{
    SqlDao sd;
    Publish last = sd.selectLastPublish();
    /*1.余额够不够*/
    int buyCount = ui->cbBuyCount->currentText().toInt();
    int pay = buyCount * last.getPrice();
    if(user.getMoney() < pay){
        //不够，自动跳转到充值页面
        QMessageBox::StandardButton button = QMessageBox::question(this,"购买信息","余额不足，是否充值?");
        if(button == QMessageBox::Yes){
            //切换回充值页面
            this->hide();
            UserWidget* uw = static_cast<UserWidget*>(this->parent());
            if(uw)  uw->showChargeDialog();
        }else{}
    }else{
        //够了
        Lottery lottery;
        lottery.setPublishId(last.getId());
        QString number;
        number += ui->cbNum1->currentText();
        number += ui->cbNum2->currentText();
        number += ui->cbNum3->currentText();
        number += ui->cbNum4->currentText();
        number += ui->cbNum5->currentText();
        number += ui->cbNum6->currentText();
        number += ui->cbNum7->currentText();

        lottery.setNumber(number);
        lottery.setUsername(this->user.getUsername());
        lottery.setCount(ui->cbBuyCount->currentText().toInt());

        sd.insertLottery(lottery);
        //1.修改用户本金
        sd.updateUserMoney(user.getUsername(),-pay);
        //2.累积奖池
        sd.updateLastPublishTotalAdd(last.getId(), pay);

        this->user.setMoney(this->user.getMoney() - pay);
        UserWidget* uw = static_cast<UserWidget*>(this->parent());
        if(uw)  uw->refleshUser();

        QMessageBox::information(this,"购买信息","购买彩票成功");
    }

    this->hide();
}
