#include "adminwidget.h"
#include "ui_adminwidget.h"
#include "sql/sqldao.h"
#include <QMessageBox>
#include <QDebug>

AdminWidget::AdminWidget(QWidget* mainWidget, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminWidget),
    mainWidget(mainWidget),
    lpd(new LotteryPublishDialog(this))
{
    ui->setupUi(this);
}

AdminWidget::~AdminWidget()
{
    delete ui;
}

void AdminWidget::closeEvent(QCloseEvent *event)
{
    mainWidget->show();
    this->hide();

    event->ignore();
}

void AdminWidget::on_btnAllUser_clicked()
{
    ui->lwShow->clear();

    SqlDao sd;
    QVector<User> users = sd.selectAllUser();
    QVector<User>::iterator it;
    for(it = users.begin(); it != users.end(); ++it){
        ui->lwShow->addItem(it->toString());
    }
}

void AdminWidget::on_btnLotteryRecord_clicked()
{
    ui->lwShow->clear();

    SqlDao sd;
    QVector<Publish> publishes = sd.selectAllPublish();
    QVector<Publish>::iterator it;
    for(it = publishes.begin(); it != publishes.end(); ++it){
        ui->lwShow->addItem(it->toString());
    }
}

void AdminWidget::on_btnLotteryPublish_clicked()
{
    SqlDao sd;
    Publish last = sd.selectLastPublish();

    if(last.getId() == -1 || last.getStatus() == true){
        //可以发行
        lpd->setTotal(last.getTotal());
        lpd->show();
    }else{
        QMessageBox::warning(this,"发行信息","不能发行彩票，请开奖后再发行");
    }
}
