/********************************************************************************
** Form generated from reading UI file 'userwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWIDGET_H
#define UI_USERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *tbShow;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbUsername;
    QLineEdit *leUsername;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbMoney;
    QLineEdit *leMoney;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnBuyLottery;
    QPushButton *btnHistory;
    QPushButton *btnCharge;

    void setupUi(QWidget *UserWidget)
    {
        if (UserWidget->objectName().isEmpty())
            UserWidget->setObjectName(QStringLiteral("UserWidget"));
        UserWidget->resize(417, 332);
        verticalLayout = new QVBoxLayout(UserWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tbShow = new QTextBrowser(UserWidget);
        tbShow->setObjectName(QStringLiteral("tbShow"));

        verticalLayout->addWidget(tbShow);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lbUsername = new QLabel(UserWidget);
        lbUsername->setObjectName(QStringLiteral("lbUsername"));
        lbUsername->setMinimumSize(QSize(54, 12));
        lbUsername->setMaximumSize(QSize(54, 12));

        horizontalLayout_3->addWidget(lbUsername);

        leUsername = new QLineEdit(UserWidget);
        leUsername->setObjectName(QStringLiteral("leUsername"));
        leUsername->setEnabled(true);
        leUsername->setReadOnly(true);

        horizontalLayout_3->addWidget(leUsername);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lbMoney = new QLabel(UserWidget);
        lbMoney->setObjectName(QStringLiteral("lbMoney"));
        lbMoney->setMinimumSize(QSize(54, 12));
        lbMoney->setMaximumSize(QSize(54, 12));

        horizontalLayout_2->addWidget(lbMoney);

        leMoney = new QLineEdit(UserWidget);
        leMoney->setObjectName(QStringLiteral("leMoney"));
        leMoney->setEnabled(true);
        leMoney->setReadOnly(true);

        horizontalLayout_2->addWidget(leMoney);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnBuyLottery = new QPushButton(UserWidget);
        btnBuyLottery->setObjectName(QStringLiteral("btnBuyLottery"));

        horizontalLayout->addWidget(btnBuyLottery);

        btnHistory = new QPushButton(UserWidget);
        btnHistory->setObjectName(QStringLiteral("btnHistory"));

        horizontalLayout->addWidget(btnHistory);

        btnCharge = new QPushButton(UserWidget);
        btnCharge->setObjectName(QStringLiteral("btnCharge"));

        horizontalLayout->addWidget(btnCharge);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(UserWidget);

        QMetaObject::connectSlotsByName(UserWidget);
    } // setupUi

    void retranslateUi(QWidget *UserWidget)
    {
        UserWidget->setWindowTitle(QApplication::translate("UserWidget", "Form", Q_NULLPTR));
        lbUsername->setText(QApplication::translate("UserWidget", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        lbMoney->setText(QApplication::translate("UserWidget", "\344\275\231\351\242\235", Q_NULLPTR));
        btnBuyLottery->setText(QApplication::translate("UserWidget", "\350\264\255\344\271\260\345\275\251\347\245\250", Q_NULLPTR));
        btnHistory->setText(QApplication::translate("UserWidget", "\345\216\206\345\217\262\350\256\260\345\275\225", Q_NULLPTR));
        btnCharge->setText(QApplication::translate("UserWidget", "\345\205\205\345\200\274", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserWidget: public Ui_UserWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWIDGET_H
