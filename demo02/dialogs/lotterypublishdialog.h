#ifndef LOTTERYPUBLISHDIALOG_H
#define LOTTERYPUBLISHDIALOG_H

#include <QDialog>

namespace Ui {
class LotteryPublishDialog;
}

class LotteryPublishDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LotteryPublishDialog(QWidget *parent = 0);
    ~LotteryPublishDialog();

    void setTotal(float total);
private slots:
    void on_btnConfirm_clicked();

private:
    Ui::LotteryPublishDialog *ui;
};

#endif // LOTTERYPUBLISHDIALOG_H
