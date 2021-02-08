/********************************************************************************
** Form generated from reading UI file 'notarywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTARYWIDGET_H
#define UI_NOTARYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NotaryWidget
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *cbId;
    QTextBrowser *tbShow;
    QPushButton *btnRun;

    void setupUi(QWidget *NotaryWidget)
    {
        if (NotaryWidget->objectName().isEmpty())
            NotaryWidget->setObjectName(QStringLiteral("NotaryWidget"));
        NotaryWidget->resize(410, 328);
        verticalLayout = new QVBoxLayout(NotaryWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        cbId = new QComboBox(NotaryWidget);
        cbId->setObjectName(QStringLiteral("cbId"));

        verticalLayout->addWidget(cbId);

        tbShow = new QTextBrowser(NotaryWidget);
        tbShow->setObjectName(QStringLiteral("tbShow"));

        verticalLayout->addWidget(tbShow);

        btnRun = new QPushButton(NotaryWidget);
        btnRun->setObjectName(QStringLiteral("btnRun"));

        verticalLayout->addWidget(btnRun);


        retranslateUi(NotaryWidget);

        QMetaObject::connectSlotsByName(NotaryWidget);
    } // setupUi

    void retranslateUi(QWidget *NotaryWidget)
    {
        NotaryWidget->setWindowTitle(QApplication::translate("NotaryWidget", "Form", Q_NULLPTR));
        btnRun->setText(QApplication::translate("NotaryWidget", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NotaryWidget: public Ui_NotaryWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTARYWIDGET_H
