#ifndef USERWIDGET_H
#define USERWIDGET_H

#include <QWidget>
#include "model/user.h"
#include "dialogs/chargedialog.h"
#include "dialogs/lotterybuydialog.h"
#include <QCloseEvent>
#include <QShowEvent>

namespace Ui {
class UserWidget;
}

class UserWidget : public QWidget
{
    Q_OBJECT

public:
    explicit UserWidget(QWidget* mainWidget, QWidget *parent = 0);
    ~UserWidget();

    User getUser() const;
    void setUser(const User &value);

    void refleshUser()const;
    void showChargeDialog()const;
private:
    Ui::UserWidget *ui;
    QWidget* mainWidget;
    User user;

    ChargeDialog* cd;
    LotteryBuyDialog* lbd;

protected:
    virtual void closeEvent(QCloseEvent* event);
    virtual void showEvent(QShowEvent *event);
private slots:
    void on_btnBuyLottery_clicked();
    void on_btnHistory_clicked();
};

#endif // USERWIDGET_H
