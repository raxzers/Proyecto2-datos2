QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Algoritms/Genetico.cpp \
    GameObjets/Creaturas.cpp \
    GameObjets/Player.cpp \
    GameObjets/Torre.cpp \
    GameObjets/round.cpp \
    Util/xmlparser.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    Algoritms/Genetico.h \
    GameObjets/Creaturas.h \
    GameObjets/Player.h \
    GameObjets/Torre.h \
    GameObjets/round.h \
    Util/Utilities.h \
    Util/xmlparser.h \
    mainwindow.h \
    sturctures/LinkedList.h \
    sturctures/Node.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

INCLUDEPATH += /usr/include/boost

LIBS += -L/usr/include/boost -lboost_system
LIBS += -L/usr/include/boost  -lboost_chrono
LIBS += -L/usr/include/boost  -lboost_thread
LIBS += -L/usr/include/boost  -lboost_timer

RESOURCES += \
    ../ImagenesProyecto2/resources.qrc
