#ifndef CHARGEDIALOG_H
#define CHARGEDIALOG_H

#include <QDialog>
#include <QShowEvent>
#include "model/user.h"

namespace Ui {
class ChargeDialog;
}

class ChargeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ChargeDialog(User& user,QWidget *parent = 0);
    ~ChargeDialog();

private slots:
    void on_btnConfirm_clicked();

private:
    Ui::ChargeDialog *ui;
    User& user;

protected:
    virtual void showEvent(QShowEvent* event);
};

#endif // CHARGEDIALOG_H
