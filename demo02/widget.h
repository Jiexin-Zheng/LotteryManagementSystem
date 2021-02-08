#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "dialogs/registerdialog.h"
#include "widget/userwidget.h"
#include "widget/adminwidget.h"
#include "widget/notarywidget.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_btnLogin_clicked();

    void on_btnRegister_clicked();

private:
    Ui::Widget *ui;
    RegisterDialog* rd;

    UserWidget* uw;
    AdminWidget* aw;
    NotaryWidget* nw;
};

#endif // WIDGET_H
