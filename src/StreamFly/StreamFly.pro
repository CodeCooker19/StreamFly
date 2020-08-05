#-------------------------------------------------
#
# Project created by QtCreator 2020-08-02T07:16:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = StreamFly
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
    UI/CTitleBar.cpp \
    UI/CStreamWidget.cpp \
    UI/CCustomButtton.cpp \
    UI/CStreamMainStage.cpp \
    UI/CTransitionWidget.cpp \
    UI/CMediaItemWidget.cpp \
    UI/CMediaListWidget.cpp \
    CSFApplication.cpp \
    CSFMainWindow.cpp \
    CSFMainDocument.cpp \
    UI/MediaWidget/CMediaWidget.cpp \
    UI/MediaWidget/CPhotoWidget.cpp \
    UI/MediaWidget/CVideoWidget.cpp \
    UI/MediaWidget/CBlankWidget.cpp \
    UI/MediaWidget/CCameraWidget.cpp \
    UI/MediaWidget/CAudioWidget.cpp \
    UI/CStreamAudioWidget.cpp

HEADERS += \
    UI/CTitleBar.h \
    UI/CStreamWidget.h \
    global.h \
    UI/CCustomButtton.h \
    UI/CStreamMainStage.h \
    UI/CTransitionWidget.h \
    UI/CMediaItemWidget.h \
    UI/CMediaListWidget.h \
    CSFApplication.h \
    CSFMainWindow.h \
    CSFMainDocument.h \
    UI/MediaWidget/CMediaWidget.h \
    UI/MediaWidget/CPhotoWidget.h \
    UI/MediaWidget/CVideoWidget.h \
    UI/MediaWidget/CBlankWidget.h \
    UI/MediaWidget/CCameraWidget.h \
    UI/MediaWidget/CAudioWidget.h \
    UI/CStreamAudioWidget.h

FORMS +=

RESOURCES += \
    resource.qrc
