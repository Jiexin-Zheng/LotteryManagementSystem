/********************************************************************************
** Form generated from reading UI file 'adminwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWIDGET_H
#define UI_ADMINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminWidget
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *lwShow;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnLotteryPublish;
    QPushButton *btnAllUser;
    QPushButton *btnLotteryRecord;

    void setupUi(QWidget *AdminWidget)
    {
        if (AdminWidget->objectName().isEmpty())
            AdminWidget->setObjectName(QStringLiteral("AdminWidget"));
        AdminWidget->resize(368, 294);
        verticalLayout = new QVBoxLayout(AdminWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lwShow = new QListWidget(AdminWidget);
        lwShow->setObjectName(QStringLiteral("lwShow"));

        verticalLayout->addWidget(lwShow);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnLotteryPublish = new QPushButton(AdminWidget);
        btnLotteryPublish->setObjectName(QStringLiteral("btnLotteryPublish"));

        horizontalLayout->addWidget(btnLotteryPublish);

        btnAllUser = new QPushButton(AdminWidget);
        btnAllUser->setObjectName(QStringLiteral("btnAllUser"));

        horizontalLayout->addWidget(btnAllUser);

        btnLotteryRecord = new QPushButton(AdminWidget);
        btnLotteryRecord->setObjectName(QStringLiteral("btnLotteryRecord"));

        horizontalLayout->addWidget(btnLotteryRecord);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AdminWidget);

        QMetaObject::connectSlotsByName(AdminWidget);
    } // setupUi

    void retranslateUi(QWidget *AdminWidget)
    {
        AdminWidget->setWindowTitle(QApplication::translate("AdminWidget", "Form", Q_NULLPTR));
        btnLotteryPublish->setText(QApplication::translate("AdminWidget", "\345\217\221\350\241\214\345\275\251\347\245\250", Q_NULLPTR));
        btnAllUser->setText(QApplication::translate("AdminWidget", "\346\237\245\347\234\213\347\224\250\346\210\267", Q_NULLPTR));
        btnLotteryRecord->setText(QApplication::translate("AdminWidget", "\345\217\221\350\241\214\350\256\260\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdminWidget: public Ui_AdminWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWIDGET_H
