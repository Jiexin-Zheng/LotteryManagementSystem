#include "notarywidget.h"
#include "ui_notarywidget.h"
#include "sql/sqldao.h"
#include <QMessageBox>
#include <QDebug>

NotaryWidget::NotaryWidget(QWidget* mainWidget,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NotaryWidget),
    mainWidget(mainWidget),
    cd(new CheatDialog(this))
{
    ui->setupUi(this);
}

NotaryWidget::~NotaryWidget()
{
    delete ui;
}

void NotaryWidget::refleshPublishId() const
{
    ui->cbId->clear();

    SqlDao sd;
    QVector<Publish> publishes = sd.selectAllPublish();
    QVector<Publish>::iterator it;
    for(it = publishes.begin(); it != publishes.end(); ++it){
        ui->cbId->addItem(QString::number(it->getId()));
    }

    return;
}

void NotaryWidget::closeEvent(QCloseEvent *event)
{
    event->ignore();

    this->hide();
    mainWidget->show();
}

void NotaryWidget::on_cbId_currentIndexChanged(const QString &arg1)
{
    ui->tbShow->clear();

    int publishId = arg1.toInt();

    SqlDao sd;
    QVector<Lottery> lotteries = sd.selectAllHitLotteryByPublishId(publishId);
    QVector<Lottery>::iterator it;
    for(it = lotteries.begin(); it != lotteries.end(); ++it){
        ui->tbShow->append(it->toString());
    }

    return;
}

void NotaryWidget::on_btnRun_clicked()
{
    QMessageBox::StandardButton button = QMessageBox::question(this,"作弊","是否作弊？");
    if(button == QMessageBox::Yes){
        //作弊
        QString number = cd->getCheatNumber();
        qDebug()<<number;
    }else{
        //不作弊
    }
}
