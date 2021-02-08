#ifndef LOTTERY_H
#define LOTTERY_H

#include <QString>

class Lottery
{
private:
    int publishId;
    int id;
    char number[8];
    QString username;
    int count;
    int status;
    float prize;
public:
    Lottery(int publishId = 0, int id = 0, QString number = "", QString username = "", int count = 0, int status = 0, float prize = 0);
    int getPublishId() const;
    void setPublishId(int value);
    int getId() const;
    void setId(int value);
    QString getNumber()const;
    void setNumber(QString number);
    QString getUsername() const;
    void setUsername(const QString &value);
    int getCount() const;
    void setCount(int value);
    int getStatus() const;
    void setStatus(int value);
    float getPrize() const;
    void setPrize(float value);

    QString toString()const;
};

#endif // LOTTERY_H
