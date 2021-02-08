#ifndef LOTTERYBUYDIALOG_H
#define LOTTERYBUYDIALOG_H

#include <QDialog>
#include "model/user.h"

namespace Ui {
class LotteryBuyDialog;
}

class LotteryBuyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LotteryBuyDialog(User& user,QWidget *parent = 0);
    ~LotteryBuyDialog();

    void setPublishId(int id);
    void setPublishPrice(float price);

private slots:
    void on_btnRandom_clicked();

    void on_btnConfirm_clicked();

private:
    Ui::LotteryBuyDialog *ui;
    User& user;
};

#endif // LOTTERYBUYDIALOG_H
