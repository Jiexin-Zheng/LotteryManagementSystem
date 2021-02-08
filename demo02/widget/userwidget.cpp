#include "userwidget.h"
#include "ui_userwidget.h"
#include "sql/sqldao.h"
#include <QMessageBox>

UserWidget::UserWidget(QWidget* mainWidget, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserWidget),
    mainWidget(mainWidget),
    cd(new ChargeDialog(user,this)),
    lbd(new LotteryBuyDialog(user,this))
{
    ui->setupUi(this);

    QObject::connect(ui->btnCharge,SIGNAL(clicked()),cd,SLOT(show()));
}

UserWidget::~UserWidget()
{
    delete ui;
}

User UserWidget::getUser() const
{
    return user;
}

void UserWidget::setUser(const User &value)
{
    user = value;
}

void UserWidget::refleshUser() const
{
    ui->leUsername->setText(this->user.getUsername());
    ui->leMoney->setText(QString::number(this->user.getMoney()));
}

void UserWidget::showChargeDialog() const
{
    this->cd->show();
}

void UserWidget::closeEvent(QCloseEvent *event)
{
    /*1.改变在线状态*/
    SqlDao sd;
    sd.updateUserOnline(user.getUsername(), false);

    /*2.界面切换*/
    mainWidget->show();
    this->hide();

    event->ignore();
}

void UserWidget::showEvent(QShowEvent *event)
{
    this->refleshUser();

    event->accept();
}

void UserWidget::on_btnBuyLottery_clicked()
{
    /*1.能不能买*/
    SqlDao sd;
    Publish last = sd.selectLastPublish();
    if(last.getStatus() == false){
        //可以买
        lbd->setPublishId(last.getId());
        lbd->setPublishPrice(last.getPrice());
        lbd->show();
    }else{
        QMessageBox::warning(this,"购买信息","彩票尚未发行");
    }
}

void UserWidget::on_btnHistory_clicked()
{
    ui->tbShow->clear();

    SqlDao sd;
    QVector<Lottery> lotteries = sd.selectAllLotteryByUsername(this->user.getUsername());
    QVector<Lottery>::iterator it;
    for(it = lotteries.begin(); it != lotteries.end(); ++it){
        ui->tbShow->append(it->toString());
    }
}

