#ifndef ADMINWIDGET_H
#define ADMINWIDGET_H

#include <QWidget>
#include <QCloseEvent>
#include "dialogs/lotterypublishdialog.h"

namespace Ui {
class AdminWidget;
}

class AdminWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AdminWidget(QWidget* mainWidget, QWidget *parent = 0);
    ~AdminWidget();

private:
    Ui::AdminWidget *ui;
    QWidget* mainWidget;
    LotteryPublishDialog* lpd;
protected:
    virtual void closeEvent(QCloseEvent* event);
private slots:
    void on_btnAllUser_clicked();
    void on_btnLotteryRecord_clicked();
    void on_btnLotteryPublish_clicked();
};

#endif // ADMINWIDGET_H
