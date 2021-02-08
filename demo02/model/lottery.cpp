#include "lottery.h"
#include <cstring>

int Lottery::getPublishId() const
{
    return publishId;
}

void Lottery::setPublishId(int value)
{
    publishId = value;
}

int Lottery::getId() const
{
    return id;
}

void Lottery::setId(int value)
{
    id = value;
}

QString Lottery::getNumber() const
{
    return this->number;
}

void Lottery::setNumber(QString number)
{
    strncpy(this->number, number.toStdString().data(),8);
}

QString Lottery::getUsername() const
{
    return username;
}

void Lottery::setUsername(const QString &value)
{
    username = value;
}

int Lottery::getCount() const
{
    return count;
}

void Lottery::setCount(int value)
{
    count = value;
}

int Lottery::getStatus() const
{
    return status;
}

void Lottery::setStatus(int value)
{
    status = value;
}

float Lottery::getPrize() const
{
    return prize;
}

void Lottery::setPrize(float value)
{
    prize = value;
}

QString Lottery::toString() const
{
    QString text;
    text += "publishId:";
    text += QString::number(this->publishId);
    text += " id:";
    text += QString::number(this->id);
    text += " number:";
    text += this->number;
    text += " username:";
    text += username;
    text += " count:";
    text += QString::number(this->count);
    text += " status";
    switch(status){
    case 0:text += "not runned yet";break;
    case 1:text += "first prize";break;
    case 2:text += "second prize";break;
    case 3:text += "third prize";break;
    case 4:text += "not hitted";break;
    default:break;
    }
    text += " prize:";
    text += QString::number(prize);

    return text;
}

Lottery::Lottery(int publishId, int id, QString number, QString username, int count, int status, float prize)
    :publishId(publishId),id(id),username(username),count(count),status(status),prize(prize)
{
    strncpy(this->number,number.toStdString().data(),8);
}
