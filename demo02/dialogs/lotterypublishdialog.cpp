#include "lotterypublishdialog.h"
#include "ui_lotterypublishdialog.h"
#include <QDebug>
#include <QMessageBox>
#include "sql/sqldao.h"

LotteryPublishDialog::LotteryPublishDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LotteryPublishDialog)
{
    ui->setupUi(this);

    QObject::connect(ui->btnCancel,SIGNAL(clicked()),this,SLOT(hide()));
}

LotteryPublishDialog::~LotteryPublishDialog()
{
    delete ui;
}

void LotteryPublishDialog::setTotal(float total)
{
    ui->leTotal->setText(QString::number(total));
}

void LotteryPublishDialog::on_btnConfirm_clicked()
{
    QString text = ui->lePrice->text();
    if(text.isEmpty()){
        text = ui->lePrice->placeholderText();
    }

    SqlDao sd;
    Publish publish = sd.selectLastPublish();
    float price = text.toFloat();
    float total = ui->leTotal->text().toFloat();

    sd.updateLastPublishTotal(publish.getId());//清零
    sd.insertPublish(price,total);

    QMessageBox::information(this,"发行信息","发行成功");
    this->hide();

    return;
}
