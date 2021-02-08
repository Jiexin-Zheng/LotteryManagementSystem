#include "publish.h"
#include <cstring>

int Publish::getId() const
{
    return id;
}

void Publish::setId(int value)
{
    id = value;
}

float Publish::getPrice() const
{
    return price;
}

void Publish::setPrice(float value)
{
    price = value;
}

bool Publish::getStatus() const
{
    return status;
}

void Publish::setStatus(bool value)
{
    status = value;
}

QString Publish::getNumber() const
{
    return this->number;
}

void Publish::setNumber(QString number)
{
    strncpy(this->number,number.toStdString().data(),8);
}

int Publish::getCount() const
{
    return count;
}

void Publish::setCount(int value)
{
    count = value;
}

float Publish::getTotal() const
{
    return total;
}

void Publish::setTotal(float value)
{
    total = value;
}

QString Publish::toString() const
{
    QString text;

    text += "id:";
    text += QString::number(this->id);
    text += " price:";
    text += QString::number(this->price);
    text += " status:";
    text += (this->status ? "already runned" : "not runned yet");
    text += " hit number:";
    text += this->number;
    text += " count:";
    text += QString::number(this->count);
    text += " total:";
    text += QString::number(this->total);

    return text;
}

Publish::Publish(int id, float price, bool status, QString number, int count, float total)
    :id(id),price(price),status(status),count(count),total(total)
{
    strncpy(this->number,number.toStdString().data(),8);
}
