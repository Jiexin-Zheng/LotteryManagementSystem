#ifndef SQLDAO_H
#define SQLDAO_H

#include "model/user.h"
#include "model/publish.h"
#include "model/lottery.h"
#include <QVector>

class SqlDao
{
public:
    SqlDao();

    bool insertUser(const User& user)const;
    bool selectUserByUsername(const QString& username)const;
    bool selectUserByUserpwd(const QString& username, const QString& userpwd)const;
    bool selectUserByOnline(const QString& username, bool online)const;
    float selectUserMoney(const QString& username)const;
    bool updateUesrpwd(const QString& username, const QString& userpwd)const;
    bool updateUserOnline(const QString& username, bool online);
    bool updateUserMoney(const QString& username, float money);
    QVector<User> selectAllUser()const;

    bool insertPublish(float price, float total)const;
    Publish selectLastPublish()const;
    QVector<Publish> selectAllPublish()const;
    bool updateLastPublishTotal(int id)const;
    bool updateLastPublishTotalAdd(int id, float total)const;

    bool insertLottery(const Lottery& lottery)const;
    QVector<Lottery> selectAllLotteryByUsername(const QString& username)const;
    QVector<Lottery> selectAllHitLotteryByPublishId(int publishId)const;
};

#endif // SQLDAO_H
