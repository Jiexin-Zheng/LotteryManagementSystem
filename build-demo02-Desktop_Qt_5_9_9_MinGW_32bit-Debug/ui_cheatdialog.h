/********************************************************************************
** Form generated from reading UI file 'cheatdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHEATDIALOG_H
#define UI_CHEATDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CheatDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *CheatDialog)
    {
        if (CheatDialog->objectName().isEmpty())
            CheatDialog->setObjectName(QStringLiteral("CheatDialog"));
        CheatDialog->resize(341, 56);
        CheatDialog->setModal(true);
        verticalLayout = new QVBoxLayout(CheatDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(CheatDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(CheatDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);


        retranslateUi(CheatDialog);

        QMetaObject::connectSlotsByName(CheatDialog);
    } // setupUi

    void retranslateUi(QDialog *CheatDialog)
    {
        CheatDialog->setWindowTitle(QApplication::translate("CheatDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("CheatDialog", "\344\275\234\345\274\212", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CheatDialog: public Ui_CheatDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHEATDIALOG_H
