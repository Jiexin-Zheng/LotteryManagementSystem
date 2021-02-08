#include "cheatdialog.h"
#include "ui_cheatdialog.h"

CheatDialog::CheatDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CheatDialog)
{
    ui->setupUi(this);
}

CheatDialog::~CheatDialog()
{
    delete ui;
}

QString CheatDialog::getCheatNumber()
{
    this->show();
    loop.exec();//阻塞开启循环

    return number;
}

void CheatDialog::on_lineEdit_returnPressed()
{
    this->number = ui->lineEdit->text();
    if(number.size() != 7){
        number.clear();
    }else{
        //可以作弊了
        this->hide();
        loop.exit(0);//开启事件循环
    }

    ui->lineEdit->clear();

    return;
}
