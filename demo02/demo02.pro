#-------------------------------------------------
#
# Project created by QtCreator 2018-11-29T19:53:13
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = demo02
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        widget.cpp \
    dialogs/registerdialog.cpp \
    sql/sqlmanager.cpp \
    sql/sqldao.cpp \
    model/user.cpp \
    widget/userwidget.cpp \
    widget/adminwidget.cpp \
    model/publish.cpp \
    dialogs/lotterypublishdialog.cpp \
    dialogs/chargedialog.cpp \
    dialogs/lotterybuydialog.cpp \
    model/lottery.cpp \
    widget/notarywidget.cpp \
    dialogs/cheatdialog.cpp

HEADERS += \
        widget.h \
    dialogs/registerdialog.h \
    sql/sqlmanager.h \
    sql/sqldao.h \
    model/user.h \
    widget/userwidget.h \
    widget/adminwidget.h \
    model/publish.h \
    dialogs/lotterypublishdialog.h \
    dialogs/chargedialog.h \
    dialogs/lotterybuydialog.h \
    model/lottery.h \
    widget/notarywidget.h \
    dialogs/cheatdialog.h

FORMS += \
        widget.ui \
    dialogs/registerdialog.ui \
    widget/userwidget.ui \
    widget/adminwidget.ui \
    dialogs/lotterypublishdialog.ui \
    dialogs/chargedialog.ui \
    dialogs/lotterybuydialog.ui \
    widget/notarywidget.ui \
    dialogs/cheatdialog.ui
