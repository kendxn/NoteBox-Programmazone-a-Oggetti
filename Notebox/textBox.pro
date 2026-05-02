QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cardWidget.cpp \
    editCard.cpp \
    main.cpp \
    mainwindow.cpp \
    notaAvanzato.cpp \
    notaMultimediale.cpp \
    notaTask.cpp \
    promemoria.cpp \
    searchWindow.cpp \
    viewPanel.cpp

HEADERS += \
    cardWidget.h \
    editCard.h \
    mainwindow.h \
    nota.h \
    notaAvanzato.h \
    notaMultimediale.h \
    notaTask.h \
    promemoria.h \
    searchWindow.h \
    viewPanel.h

FORMS += \
    cardWidget.ui \
    editCard.ui \
    mainwindow.ui \
    searchWindow.ui \
    viewPanel.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    risorse.qrc
