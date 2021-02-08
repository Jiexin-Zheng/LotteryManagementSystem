/********************************************************************************
** Form generated from reading UI file 'chargedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARGEDIALOG_H
#define UI_CHARGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChargeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbMoney;
    QLineEdit *leMoney;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbCharge;
    QLineEdit *leCharge;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnConfirm;
    QPushButton *btnCancel;

    void setupUi(QDialog *ChargeDialog)
    {
        if (ChargeDialog->objectName().isEmpty())
            ChargeDialog->setObjectName(QStringLiteral("ChargeDialog"));
        ChargeDialog->resize(257, 105);
        ChargeDialog->setModal(true);
        verticalLayout = new QVBoxLayout(ChargeDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lbMoney = new QLabel(ChargeDialog);
        lbMoney->setObjectName(QStringLiteral("lbMoney"));
        lbMoney->setMinimumSize(QSize(54, 12));
        lbMoney->setMaximumSize(QSize(54, 12));

        horizontalLayout_3->addWidget(lbMoney);

        leMoney = new QLineEdit(ChargeDialog);
        leMoney->setObjectName(QStringLiteral("leMoney"));
        leMoney->setReadOnly(true);

        horizontalLayout_3->addWidget(leMoney);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lbCharge = new QLabel(ChargeDialog);
        lbCharge->setObjectName(QStringLiteral("lbCharge"));
        lbCharge->setMinimumSize(QSize(54, 12));
        lbCharge->setMaximumSize(QSize(54, 12));

        horizontalLayout_2->addWidget(lbCharge);

        leCharge = new QLineEdit(ChargeDialog);
        leCharge->setObjectName(QStringLiteral("leCharge"));
        leCharge->setReadOnly(false);

        horizontalLayout_2->addWidget(leCharge);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnConfirm = new QPushButton(ChargeDialog);
        btnConfirm->setObjectName(QStringLiteral("btnConfirm"));

        horizontalLayout->addWidget(btnConfirm);

        btnCancel = new QPushButton(ChargeDialog);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        horizontalLayout->addWidget(btnCancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ChargeDialog);

        QMetaObject::connectSlotsByName(ChargeDialog);
    } // setupUi

    void retranslateUi(QDialog *ChargeDialog)
    {
        ChargeDialog->setWindowTitle(QApplication::translate("ChargeDialog", "Dialog", Q_NULLPTR));
        lbMoney->setText(QApplication::translate("ChargeDialog", "\344\275\231\351\242\235", Q_NULLPTR));
        lbCharge->setText(QApplication::translate("ChargeDialog", "\345\205\205\345\200\274\351\207\221\351\242\235", Q_NULLPTR));
        btnConfirm->setText(QApplication::translate("ChargeDialog", "\347\241\256\345\256\232", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("ChargeDialog", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChargeDialog: public Ui_ChargeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARGEDIALOG_H
