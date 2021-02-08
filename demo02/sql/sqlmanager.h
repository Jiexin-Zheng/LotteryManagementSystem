#ifndef SQLMANAGER_H
#define SQLMANAGER_H

#include <QSqlDatabase>

class SqlManager
{
private:
    SqlManager();
    QSqlDatabase db;
    static SqlManager* instance;
public:
    static SqlManager *getInstance();
    void openDatabase();
    void closeDatabase();
};

#endif // SQLMANAGER_H
