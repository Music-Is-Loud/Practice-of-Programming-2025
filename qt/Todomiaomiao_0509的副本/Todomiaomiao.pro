QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    custombutton.cpp \
    datecalendar.cpp \
    event.cpp \
    exam.cpp \
    filehandler.cpp \
    lecture.cpp \
    main.cpp \
    selectweek.cpp \
    smallcustombutton.cpp \
    smallwidget.cpp \
    subrepeat.cpp \
    timedata.cpp \
    todo.cpp \
    widget.cpp

HEADERS += \
    custombutton.h \
    datecalendar.h \
    event.h \
    exam.h \
    filehandler.h \
    lecture.h \
    selectweek.h \
    smallcustombutton.h \
    smallwidget.h \
    subrepeat.h \
    timedata.h \
    todo.h \
    widget.h

FORMS += \
    datecalendar.ui \
    selectweek.ui \
    smallwidget.ui \
    subrepeat.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
