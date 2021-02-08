/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

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

class Ui_RegisterDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lbUsername;
    QLineEdit *leUsername;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbUserpwd;
    QLineEdit *leUserpwd;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbUserpwdAg;
    QLineEdit *leUserpwdAg;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnConfirm;
    QPushButton *btnCancel;

    void setupUi(QDialog *RegisterDialog)
    {
        if (RegisterDialog->objectName().isEmpty())
            RegisterDialog->setObjectName(QStringLiteral("RegisterDialog"));
        RegisterDialog->resize(263, 127);
        verticalLayout = new QVBoxLayout(RegisterDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lbUsername = new QLabel(RegisterDialog);
        lbUsername->setObjectName(QStringLiteral("lbUsername"));
        lbUsername->setMinimumSize(QSize(54, 12));
        lbUsername->setMaximumSize(QSize(54, 12));

        horizontalLayout->addWidget(lbUsername);

        leUsername = new QLineEdit(RegisterDialog);
        leUsername->setObjectName(QStringLiteral("leUsername"));

        horizontalLayout->addWidget(leUsername);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lbUserpwd = new QLabel(RegisterDialog);
        lbUserpwd->setObjectName(QStringLiteral("lbUserpwd"));
        lbUserpwd->setMinimumSize(QSize(54, 12));
        lbUserpwd->setMaximumSize(QSize(54, 12));

        horizontalLayout_2->addWidget(lbUserpwd);

        leUserpwd = new QLineEdit(RegisterDialog);
        leUserpwd->setObjectName(QStringLiteral("leUserpwd"));

        horizontalLayout_2->addWidget(leUserpwd);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lbUserpwdAg = new QLabel(RegisterDialog);
        lbUserpwdAg->setObjectName(QStringLiteral("lbUserpwdAg"));
        lbUserpwdAg->setMinimumSize(QSize(54, 12));
        lbUserpwdAg->setMaximumSize(QSize(54, 12));

        horizontalLayout_3->addWidget(lbUserpwdAg);

        leUserpwdAg = new QLineEdit(RegisterDialog);
        leUserpwdAg->setObjectName(QStringLiteral("leUserpwdAg"));

        horizontalLayout_3->addWidget(leUserpwdAg);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        btnConfirm = new QPushButton(RegisterDialog);
        btnConfirm->setObjectName(QStringLiteral("btnConfirm"));

        horizontalLayout_4->addWidget(btnConfirm);

        btnCancel = new QPushButton(RegisterDialog);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        horizontalLayout_4->addWidget(btnCancel);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(RegisterDialog);

        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QApplication::translate("RegisterDialog", "Dialog", Q_NULLPTR));
        lbUsername->setText(QApplication::translate("RegisterDialog", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        lbUserpwd->setText(QApplication::translate("RegisterDialog", "\345\257\206\347\240\201", Q_NULLPTR));
        lbUserpwdAg->setText(QApplication::translate("RegisterDialog", "\345\257\206\347\240\201\347\241\256\350\256\244", Q_NULLPTR));
        btnConfirm->setText(QApplication::translate("RegisterDialog", "\347\241\256\345\256\232", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("RegisterDialog", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
