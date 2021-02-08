#include "sqldao.h"
#include "sqlmanager.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QVariant>
#include <QDebug>

SqlDao::SqlDao()
{
}

bool SqlDao::insertUser(const User &user) const
{
    bool ret = false;
    SqlManager::getInstance()->openDatabase();

    QSqlQuery query;
    query.prepare("insert into user(username,userpwd,money)values(:username,:userpwd,0);");
    query.bindValue(":username", user.getUsername());
    query.bindValue(":userpwd", user.getUserpwd());

    if(!(ret = query.exec())){
        qDebug()<<"debug in insertUser: "<<query.lastError().text();
    }

    SqlManager::getInstance()->closeDatabase();
    return ret;
}

bool SqlDao::selectUserByUsername(const QString &username) const
{
    bool ret = false;
    SqlManager::getInstance()->openDatabase();

    QSqlQuery query;
    query.prepare("select username from user where username = :username;");
    query.bindValue(":username", username);

    if(!(ret = query.exec())){
        qDebug()<<"debug in selectUserByUsername: "<<query.lastError().text();
    }else{
        if(query.next()){
            ret = true;
        }else{
            ret = false;
        }
    }

    SqlManager::getInstance()->closeDatabase();
    return ret;
}

bool SqlDao::selectUserByUserpwd(const QString &username, const QString &userpwd) const
{
    bool ret = false;
    SqlManager::getInstance()->openDatabase();

    QSqlQuery query;
    query.prepare("select username from user where username = :username and userpwd = :userpwd;");
    query.bindValue(":username", username);
    query.bindValue(":userpwd", userpwd);

    if(!(ret = query.exec())){
        qDebug()<<query.lastError().text();
    }else{
        if(query.next()){
            ret = true;
        }else{
            ret = false;
        }
    }

    SqlManager::getInstance()->closeDatabase();
    return ret;
}

bool SqlDao::selectUserByOnline(const QString &username, bool online) const
{
    bool ret = false;
    SqlManager::getInstance()->openDatabase();

    QSqlQuery query;
    query.prepare("select username from user where username = :username and online = :online;");
    query.bindValue(":username", username);
    query.bindValue(":online", online);

    if(!(ret = query.exec())){
        qDebug()<<query.lastError().text();
    }else{
        if(query.next()){
            ret = true;
        }else{
            ret = false;
        }
    }

    SqlManager::getInstance()->closeDatabase();
    return ret;
}

float SqlDao::selectUserMoney(const QString &username) const
{
    float ret = -1;
    SqlManager::getInstance()->openDatabase();

    QSqlQuery query;
    query.prepare("select money from user where username = :username;");
    query.bindValue(":username", username);

    if(!(ret = query.exec())){
        qDebug()<<query.lastError().text();
    }else{
        if(query.next()){
            ret = query.value(0).toFloat();
        }else{
            ret = -1;
        }
    }

    SqlManager::getInstance()->closeDatabase();
    return ret;
}

bool SqlDao::updateUesrpwd(const QString &username, const QString &userpwd) const
{
    bool ret = false;
    SqlManager::getInstance()->openDatabase();

    QSqlQuery query;
    query.prepare("update user set userpwd = :userpwd where username = :username;");
    query.bindValue(":userpwd", userpwd);
    query.bindValue(":username", username);

    if(!(ret = query.exec())){
        qDebug()<<query.lastError().text();
    }

    SqlManager::getInstance()->closeDatabase();
    return ret;
}

bool SqlDao::updateUserOnline(const QString &username, bool online)
{
    bool ret = false;
    SqlManager::getInstance()->openDatabase();

    QSqlQuery query;
    query.prepare("update user set online = :online where username = :username;");
    query.bindValue(":online", online);
    query.bindValue(":username", username);

    if(!(ret = query.exec())){
        qDebug()<<query.lastError().text();
    }

    SqlManager::getInstance()->closeDatabase();
    return ret;
}

bool SqlDao::updateUserMoney(const QString &username, float money)
{
    bool ret = false;
    SqlManager::getInstance()->openDatabase();

    QSqlQuery query;
    query.prepare("update user set money = money + :money where username = :username;");
    query.bindValue(":money", money);
    query.bindValue(":username", username);

    if(!(ret = query.exec())){
        qDebug()<<query.lastError().text();
    }

    SqlManager::getInstance()->closeDatabase();
    return ret;
}

QVector<User> SqlDao::selectAllUser() const
{
    QVector<User> users;

    SqlManager::getInstance()->openDatabase();

    QSqlQuery query;
    query.prepare("select * from user;");
    if(!query.exec()){
        qDebug()<<query.lastError().text();
    }else{
        while(query.next()){
            QString username = query.value(0).toString();
            QString userpwd = query.value(1).toString();
            bool online = query.value(2).toBool();
            float money = query.value(3).toFloat();

            User user(username,userpwd,online,money);
            users.push_back(user);
        }
    }

    SqlManager::getInstance()->closeDatabase();

    return users;
}

bool SqlDao::insertPublish(float price, float total) const
{
    bool ret = false;
    SqlManager::getInstance()->openDatabase();

    QSqlQuery query;
    query.prepare("insert into publish(price,count,total)values"
                  "(:price,0,:total);");
    query.bindValue(":price", price);
    query.bindValue(":total",total);

    if(!(ret = query.exec())){
        qDebug()<<query.lastError().text();
    }

    SqlManager::getInstance()->closeDatabase();

    return ret;
}

Publish SqlDao::selectLastPublish() const
{
    SqlManager::getInstance()->openDatabase();
    Publish publish(-1);

    QSqlQuery query;
    query.prepare("select * from publish order by id desc limit 1;");

    if(!query.exec()){
        qDebug()<<query.lastError().text();
    }else{
        if(query.next()){
            int id = query.value(0).toInt();
            float price = query.value(1).toFloat();
            bool status = query.value(2).toBool();
            QString number = query.value(3).toString();
            int count = query.value(4).toInt();
            float total = query.value(5).toFloat();

            publish.setId(id);
            publish.setPrice(price);
            publish.setStatus(status);
            publish.setNumber(number);
            publish.setCount(count);
            publish.setTotal(total);
        }
    }

    SqlManager::getInstance()->closeDatabase();

    return publish;
}

QVector<Publish> SqlDao::selectAllPublish() const
{
    QVector<Publish> publishes;

    SqlManager::getInstance()->openDatabase();

    QSqlQuery query;
    query.prepare("select * from publish order by id desc;");

    if(!query.exec()){
        qDebug()<<query.lastError().text();
    }else{
        if(query.next()){
            int id = query.value(0).toInt();
            float price = query.value(1).toFloat();
            bool status = query.value(2).toBool();
            QString number = query.value(3).toString();
            int count = query.value(4).toInt();
            float total = query.value(5).toFloat();

            Publish publish(id,price,status,number,count,total);

            publishes.push_back(publish);
        }
    }

    SqlManager::getInstance()->closeDatabase();

    return publishes;
}

bool SqlDao::updateLastPublishTotal(int id) const
{
    bool ret = false;
    SqlManager::getInstance()->openDatabase();

    QSqlQuery query;
    query.prepare("update publish set total = 0 where id = :id;");
    query.bindValue(":id", id);

    if(!(ret = query.exec())){
        qDebug()<<query.lastError().text();
    }else{}

    SqlManager::getInstance()->closeDatabase();

    return ret;
}

bool SqlDao::updateLastPublishTotalAdd(int id, float total) const
{
    bool ret = false;
    SqlManager::getInstance()->openDatabase();

    QSqlQuery query;
    query.prepare("update publish set total = total + :total where id = :id;");
    query.bindValue(":id", id);
    query.bindValue(":total", total);

    if(!(ret = query.exec())){
        qDebug()<<query.lastError().text();
    }else{}

    SqlManager::getInstance()->closeDatabase();

    return ret;
}

bool SqlDao::insertLottery(const Lottery &lottery) const
{
    bool ret = false;

    SqlManager::getInstance()->openDatabase();

    QSqlQuery query;
    query.prepare("insert into lottery(publishId,number,username,count)"
                  "values(:publishId,:number,:username,:count);");
    query.bindValue(":publishId", lottery.getPublishId());
    query.bindValue(":number", lottery.getNumber());
    query.bindValue(":username", lottery.getUsername());
    query.bindValue(":count", lottery.getCount());

    if(!(ret = query.exec())){
        qDebug()<<query.lastError().text();
    }

    SqlManager::getInstance()->closeDatabase();

    return ret;
}

QVector<Lottery> SqlDao::selectAllLotteryByUsername(const QString &username) const
{
    QVector<Lottery> lotteries;

    SqlManager::getInstance()->openDatabase();

    QSqlQuery query;
    query.prepare("select * from lottery where username = :username order by id desc;");
    query.bindValue(":username", username);

    if(!query.exec()){
        qDebug()<<query.lastError().text();
    }else{
        while(query.next()){
            int publishId = query.value(0).toInt();
            int id = query.value(1).toInt();
            QString number = query.value(2).toString();
            QString username = query.value(3).toString();
            int count = query.value(4).toInt();
            int status = query.value(5).toInt();
            float prize = query.value(6).toFloat();

            Lottery lottery(publishId,id,number,username,count,status,prize);

            lotteries.push_back(lottery);
        }
    }

    SqlManager::getInstance()->closeDatabase();

    return lotteries;
}

QVector<Lottery> SqlDao::selectAllHitLotteryByPublishId(int publishId) const
{
    QVector<Lottery> lotteries;

    SqlManager::getInstance()->openDatabase();

    QSqlQuery query;
    query.prepare("select * from lottery where publisId = :publishId and status >= 1 and status <= 3;");
    query.bindValue(":publishId", publishId);

    if(!query.exec()){
        qDebug()<<query.lastError().text();
    }else{
        while(query.next()){
            int publishId = query.value(0).toInt();
            int id = query.value(1).toInt();
            QString number = query.value(2).toString();
            QString username = query.value(3).toString();
            int count = query.value(4).toInt();
            int status = query.value(5).toInt();
            float prize = query.value(6).toFloat();

            Lottery lottery(publishId,id,number,username,count,status,prize);

            lotteries.push_back(lottery);
        }
    }

    SqlManager::getInstance()->closeDatabase();

    return lotteries;
}
