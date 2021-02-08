#ifndef PUBLISH_H
#define PUBLISH_H

#include <QString>

class Publish
{
private:
    int id;
    float price;
    bool status;
    char number[8];
    int count;
    float total;
public:
    Publish(int id = 0,float price = 0,bool status = false,QString number = "",int count = 0, float total = 0.0f);
    int getId() const;
    void setId(int value);
    float getPrice() const;
    void setPrice(float value);
    bool getStatus() const;
    void setStatus(bool value);
    QString getNumber()const;
    void setNumber(QString number);
    int getCount() const;
    void setCount(int value);
    float getTotal() const;
    void setTotal(float value);

    QString toString()const;
};

#endif // PUBLISH_H
