#include "widget.h"
#include <QApplication>

/*
 * 彩票管理系统：
 * 管理员
 * 公证员
 * 用户
 *
 * 三个数据库表单
 *
 * 1.登录/注册
 * 2.管理员：发行彩票、发行记录、用户信息
*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    return a.exec();
}
