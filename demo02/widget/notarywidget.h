#ifndef NOTARYWIDGET_H
#define NOTARYWIDGET_H

#include <QWidget>
#include <QShowEvent>
#include "dialogs/cheatdialog.h"
#include <QCloseEvent>

namespace Ui {
class NotaryWidget;
}

class NotaryWidget : public QWidget
{
    Q_OBJECT

public:
    explicit NotaryWidget(QWidget* mainWidget,QWidget *parent = 0);
    ~NotaryWidget();

    void refleshPublishId()const;
private:
    Ui::NotaryWidget *ui;
    QWidget* mainWidget;
    CheatDialog* cd;

protected:
    virtual void closeEvent(QCloseEvent* event);

private slots:
    void on_cbId_currentIndexChanged(const QString &arg1);
    void on_btnRun_clicked();
};

#endif // NOTARYWIDGET_H
