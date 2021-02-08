#ifndef CHEATDIALOG_H
#define CHEATDIALOG_H

#include <QDialog>
#include <QString>
#include <QEventLoop>

namespace Ui {
class CheatDialog;
}

class CheatDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CheatDialog(QWidget *parent = 0);
    ~CheatDialog();

    QString getCheatNumber();

private slots:
    void on_lineEdit_returnPressed();

private:
    Ui::CheatDialog *ui;
    QString number;
    QEventLoop loop;
};

#endif // CHEATDIALOG_H
