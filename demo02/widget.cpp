#include "widget.h"
#include "ui_widget.h"
#include "sql/sqldao.h"
#include <QMessageBox>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget),
    rd(new RegisterDialog(this)),
    uw(new UserWidget(this)),
    aw(new AdminWidget(this)),
    nw(new NotaryWidget(this))

{
    ui->setupUi(this);

    QObject::connect(ui->btnRegister,SIGNAL(clicked()),rd,SLOT(show()));
}

Widget::~Widget()
{
    delete ui;
    delete uw;
    delete aw;
    delete nw;
}

void Widget::on_btnLogin_clicked()
{
    QString username = ui->leUsername->text();
    QString userpwd = ui->leUserpwd->text();

    if(username == "admin" && userpwd == "admin"){
        //管理员
        QMessageBox::information(this,"登录信息","登录成功");
        aw->show();
        this->hide();

        return;
    }

    if(username == "notary" && userpwd == "notary"){
        //公证员
        QMessageBox::information(this,"登录信息","登录成功");
        nw->refleshPublishId();
        nw->show();
        this->hide();
        return;
    }

    /*1.判断是否注册*/
    do{
        SqlDao sd;
        bool ret = sd.selectUserByUsername(username);
        if(!ret){
            QMessageBox::warning(this,"登录信息","登录失败，账号或密码错误");
            break;
        }

        ret = sd.selectUserByOnline(username, false);
        if(!ret){
            QMessageBox::warning(this,"登录信息","登录失败，重复登录");
            break;
        }

        ret = sd.selectUserByUserpwd(username, userpwd);
        if(!ret){
            QMessageBox::warning(this,"登录信息","登录失败，账号或密码错误");
            break;
        }else{
            //改变在线状态
            sd.updateUserOnline(username,true);
            QMessageBox::information(this,"登录信息","登录成功");

            //切换界面
            float money = sd.selectUserMoney(username);
            uw->setUser(User(username,userpwd,true,money));
            uw->show();
            this->hide();
        }
    }while(0);

    ui->leUsername->clear();
    ui->leUserpwd->clear();
}

