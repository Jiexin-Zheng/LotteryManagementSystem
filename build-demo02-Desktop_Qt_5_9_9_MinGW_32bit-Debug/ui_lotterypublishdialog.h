/********************************************************************************
** Form generated from reading UI file 'lotterypublishdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOTTERYPUBLISHDIALOG_H
#define UI_LOTTERYPUBLISHDIALOG_H

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

class Ui_LotteryPublishDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbPrice;
    QLineEdit *lePrice;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbTotal;
    QLineEdit *leTotal;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnConfirm;
    QPushButton *btnCancel;

    void setupUi(QDialog *LotteryPublishDialog)
    {
        if (LotteryPublishDialog->objectName().isEmpty())
            LotteryPublishDialog->setObjectName(QStringLiteral("LotteryPublishDialog"));
        LotteryPublishDialog->resize(236, 99);
        LotteryPublishDialog->setModal(true);
        verticalLayout = new QVBoxLayout(LotteryPublishDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lbPrice = new QLabel(LotteryPublishDialog);
        lbPrice->setObjectName(QStringLiteral("lbPrice"));
        lbPrice->setMinimumSize(QSize(54, 12));
        lbPrice->setMaximumSize(QSize(54, 12));

        horizontalLayout_3->addWidget(lbPrice);

        lePrice = new QLineEdit(LotteryPublishDialog);
        lePrice->setObjectName(QStringLiteral("lePrice"));

        horizontalLayout_3->addWidget(lePrice);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lbTotal = new QLabel(LotteryPublishDialog);
        lbTotal->setObjectName(QStringLiteral("lbTotal"));
        lbTotal->setMinimumSize(QSize(54, 12));
        lbTotal->setMaximumSize(QSize(54, 12));

        horizontalLayout_2->addWidget(lbTotal);

        leTotal = new QLineEdit(LotteryPublishDialog);
        leTotal->setObjectName(QStringLiteral("leTotal"));
        leTotal->setReadOnly(true);

        horizontalLayout_2->addWidget(leTotal);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnConfirm = new QPushButton(LotteryPublishDialog);
        btnConfirm->setObjectName(QStringLiteral("btnConfirm"));

        horizontalLayout->addWidget(btnConfirm);

        btnCancel = new QPushButton(LotteryPublishDialog);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        horizontalLayout->addWidget(btnCancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(LotteryPublishDialog);

        QMetaObject::connectSlotsByName(LotteryPublishDialog);
    } // setupUi

    void retranslateUi(QDialog *LotteryPublishDialog)
    {
        LotteryPublishDialog->setWindowTitle(QApplication::translate("LotteryPublishDialog", "Dialog", Q_NULLPTR));
        lbPrice->setText(QApplication::translate("LotteryPublishDialog", "\345\215\225\344\273\267", Q_NULLPTR));
        lePrice->setPlaceholderText(QApplication::translate("LotteryPublishDialog", "2.0", Q_NULLPTR));
        lbTotal->setText(QApplication::translate("LotteryPublishDialog", "\345\245\226\346\261\240\347\264\257\350\256\241", Q_NULLPTR));
        btnConfirm->setText(QApplication::translate("LotteryPublishDialog", "\347\241\256\345\256\232", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("LotteryPublishDialog", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LotteryPublishDialog: public Ui_LotteryPublishDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOTTERYPUBLISHDIALOG_H
