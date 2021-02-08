#ifndef USER_H
#define USER_H

#include <QString>

class User
{
private:
    QString username;
    QString userpwd;
    bool online;
    float money;
public:
    User(QString username = "",QString userpwd = "",bool online = false,float money = 0.0f);
    QString getUsername() const;
    void setUsername(const QString &value);
    QString getUserpwd() const;
    void setUserpwd(const QString &value);
    bool getOnline() const;
    void setOnline(bool value);
    float getMoney() const;
    void setMoney(float value);

    QString toString()const;
};

#endif // USER_H
