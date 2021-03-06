#include "user.h"

QString User::getUsername() const
{
    return username;
}

void User::setUsername(const QString &value)
{
    username = value;
}

QString User::getUserpwd() const
{
    return userpwd;
}

void User::setUserpwd(const QString &value)
{
    userpwd = value;
}

bool User::getOnline() const
{
    return online;
}

void User::setOnline(bool value)
{
    online = value;
}

float User::getMoney() const
{
    return money;
}

void User::setMoney(float value)
{
    money = value;
}

QString User::toString() const
{
    QString str;

    str += "username:";
    str += this->username;
    str += " userpwd:";
    str += this->userpwd;
    str += " online:";
    str += (this->online?"online":"offline");
    str += " money:";
    str += QString::number(this->money);

    return str;
}

User::User(QString username,QString userpwd,bool online,float money)
    :username(username),userpwd(userpwd),online(online),money(money)
{

}
