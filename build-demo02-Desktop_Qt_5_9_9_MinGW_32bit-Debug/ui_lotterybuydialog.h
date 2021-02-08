/********************************************************************************
** Form generated from reading UI file 'lotterybuydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOTTERYBUYDIALOG_H
#define UI_LOTTERYBUYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LotteryBuyDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbPublishId;
    QLineEdit *lePublishId;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbBuyCount;
    QComboBox *cbBuyCount;
    QLabel *lbPrice;
    QLineEdit *lePrice;
    QHBoxLayout *horizontalLayout;
    QLabel *lbNumber;
    QComboBox *cbNum1;
    QComboBox *cbNum2;
    QComboBox *cbNum3;
    QComboBox *cbNum4;
    QComboBox *cbNum5;
    QComboBox *cbNum6;
    QComboBox *cbNum7;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnRandom;
    QPushButton *btnConfirm;
    QPushButton *btnCancel;

    void setupUi(QDialog *LotteryBuyDialog)
    {
        if (LotteryBuyDialog->objectName().isEmpty())
            LotteryBuyDialog->setObjectName(QStringLiteral("LotteryBuyDialog"));
        LotteryBuyDialog->resize(341, 127);
        verticalLayout = new QVBoxLayout(LotteryBuyDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lbPublishId = new QLabel(LotteryBuyDialog);
        lbPublishId->setObjectName(QStringLiteral("lbPublishId"));
        lbPublishId->setMinimumSize(QSize(54, 12));
        lbPublishId->setMaximumSize(QSize(54, 12));

        horizontalLayout_3->addWidget(lbPublishId);

        lePublishId = new QLineEdit(LotteryBuyDialog);
        lePublishId->setObjectName(QStringLiteral("lePublishId"));
        lePublishId->setReadOnly(true);

        horizontalLayout_3->addWidget(lePublishId);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lbBuyCount = new QLabel(LotteryBuyDialog);
        lbBuyCount->setObjectName(QStringLiteral("lbBuyCount"));
        lbBuyCount->setMinimumSize(QSize(54, 12));
        lbBuyCount->setMaximumSize(QSize(54, 12));

        horizontalLayout_2->addWidget(lbBuyCount);

        cbBuyCount = new QComboBox(LotteryBuyDialog);
        cbBuyCount->setObjectName(QStringLiteral("cbBuyCount"));

        horizontalLayout_2->addWidget(cbBuyCount);

        lbPrice = new QLabel(LotteryBuyDialog);
        lbPrice->setObjectName(QStringLiteral("lbPrice"));

        horizontalLayout_2->addWidget(lbPrice);

        lePrice = new QLineEdit(LotteryBuyDialog);
        lePrice->setObjectName(QStringLiteral("lePrice"));
        lePrice->setReadOnly(true);

        horizontalLayout_2->addWidget(lePrice);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lbNumber = new QLabel(LotteryBuyDialog);
        lbNumber->setObjectName(QStringLiteral("lbNumber"));

        horizontalLayout->addWidget(lbNumber);

        cbNum1 = new QComboBox(LotteryBuyDialog);
        cbNum1->setObjectName(QStringLiteral("cbNum1"));

        horizontalLayout->addWidget(cbNum1);

        cbNum2 = new QComboBox(LotteryBuyDialog);
        cbNum2->setObjectName(QStringLiteral("cbNum2"));

        horizontalLayout->addWidget(cbNum2);

        cbNum3 = new QComboBox(LotteryBuyDialog);
        cbNum3->setObjectName(QStringLiteral("cbNum3"));

        horizontalLayout->addWidget(cbNum3);

        cbNum4 = new QComboBox(LotteryBuyDialog);
        cbNum4->setObjectName(QStringLiteral("cbNum4"));

        horizontalLayout->addWidget(cbNum4);

        cbNum5 = new QComboBox(LotteryBuyDialog);
        cbNum5->setObjectName(QStringLiteral("cbNum5"));

        horizontalLayout->addWidget(cbNum5);

        cbNum6 = new QComboBox(LotteryBuyDialog);
        cbNum6->setObjectName(QStringLiteral("cbNum6"));

        horizontalLayout->addWidget(cbNum6);

        cbNum7 = new QComboBox(LotteryBuyDialog);
        cbNum7->setObjectName(QStringLiteral("cbNum7"));

        horizontalLayout->addWidget(cbNum7);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        btnRandom = new QPushButton(LotteryBuyDialog);
        btnRandom->setObjectName(QStringLiteral("btnRandom"));

        horizontalLayout_4->addWidget(btnRandom);

        btnConfirm = new QPushButton(LotteryBuyDialog);
        btnConfirm->setObjectName(QStringLiteral("btnConfirm"));

        horizontalLayout_4->addWidget(btnConfirm);

        btnCancel = new QPushButton(LotteryBuyDialog);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        horizontalLayout_4->addWidget(btnCancel);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(LotteryBuyDialog);

        QMetaObject::connectSlotsByName(LotteryBuyDialog);
    } // setupUi

    void retranslateUi(QDialog *LotteryBuyDialog)
    {
        LotteryBuyDialog->setWindowTitle(QApplication::translate("LotteryBuyDialog", "Dialog", Q_NULLPTR));
        lbPublishId->setText(QApplication::translate("LotteryBuyDialog", "\345\275\223\345\211\215\346\234\237\345\217\267", Q_NULLPTR));
        lbBuyCount->setText(QApplication::translate("LotteryBuyDialog", "\350\264\255\344\271\260\346\263\250\346\225\260", Q_NULLPTR));
        cbBuyCount->clear();
        cbBuyCount->insertItems(0, QStringList()
         << QApplication::translate("LotteryBuyDialog", "1", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "2", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "3", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "4", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "5", Q_NULLPTR)
        );
        lbPrice->setText(QApplication::translate("LotteryBuyDialog", "\346\257\217\346\263\250\344\273\267\346\240\274", Q_NULLPTR));
        lbNumber->setText(QApplication::translate("LotteryBuyDialog", "\350\264\255\344\271\260\345\217\267\347\240\201", Q_NULLPTR));
        cbNum1->clear();
        cbNum1->insertItems(0, QStringList()
         << QApplication::translate("LotteryBuyDialog", "0", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "1", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "2", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "3", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "4", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "5", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "6", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "7", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "8", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "9", Q_NULLPTR)
        );
        cbNum2->clear();
        cbNum2->insertItems(0, QStringList()
         << QApplication::translate("LotteryBuyDialog", "0", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "1", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "2", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "3", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "4", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "5", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "6", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "7", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "8", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "9", Q_NULLPTR)
        );
        cbNum3->clear();
        cbNum3->insertItems(0, QStringList()
         << QApplication::translate("LotteryBuyDialog", "0", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "1", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "2", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "3", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "4", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "5", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "6", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "7", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "8", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "9", Q_NULLPTR)
        );
        cbNum4->clear();
        cbNum4->insertItems(0, QStringList()
         << QApplication::translate("LotteryBuyDialog", "0", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "1", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "2", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "3", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "4", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "5", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "6", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "7", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "8", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "9", Q_NULLPTR)
        );
        cbNum5->clear();
        cbNum5->insertItems(0, QStringList()
         << QApplication::translate("LotteryBuyDialog", "0", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "1", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "2", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "3", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "4", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "5", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "6", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "7", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "8", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "9", Q_NULLPTR)
        );
        cbNum6->clear();
        cbNum6->insertItems(0, QStringList()
         << QApplication::translate("LotteryBuyDialog", "0", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "1", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "2", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "3", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "4", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "5", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "6", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "7", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "8", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "9", Q_NULLPTR)
        );
        cbNum7->clear();
        cbNum7->insertItems(0, QStringList()
         << QApplication::translate("LotteryBuyDialog", "0", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "1", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "2", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "3", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "4", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "5", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "6", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "7", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "8", Q_NULLPTR)
         << QApplication::translate("LotteryBuyDialog", "9", Q_NULLPTR)
        );
        btnRandom->setText(QApplication::translate("LotteryBuyDialog", "\351\232\217\346\234\272", Q_NULLPTR));
        btnConfirm->setText(QApplication::translate("LotteryBuyDialog", "\347\241\256\345\256\232", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("LotteryBuyDialog", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LotteryBuyDialog: public Ui_LotteryBuyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOTTERYBUYDIALOG_H
