QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

QT += webenginewidgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    browserwindow.cpp \
    choosetime_style_widget.cpp \
    chooseweek_style_widget.cpp \
    class_custom_button.cpp \
    color_selector.cpp \
    custombutton.cpp \
    datecalendar.cpp \
    edit_class_button.cpp \
    editclasswidget.cpp \
    event.cpp \
    exam.cpp \
    filehandler.cpp \
    lecture.cpp \
    main.cpp \
    mainwindow.cpp \
    savedata.cpp \
    selectweek.cpp \
    smallcustombutton.cpp \
    smallwidget.cpp \
    subrepeat.cpp \
    timedata.cpp \
    todo.cpp \
    widget.cpp

HEADERS += \
    browserwindow.h \
    choosetime_style_widget.h \
    chooseweek_style_widget.h \
    class_custom_button.h \
    color_selector.h \
    custombutton.h \
    datecalendar.h \
    edit_class_button.h \
    editclasswidget.h \
    event.h \
    exam.h \
    filehandler.h \
    header.h \
    lecture.h \
    mainwindow.h \
    savedata.h \
    selectweek.h \
    smallcustombutton.h \
    smallwidget.h \
    subrepeat.h \
    timedata.h \
    todo.h \
    widget.h

FORMS += \
    choosetime_style_widget.ui \
    chooseweek_style_widget.ui \
    color_selector.ui \
    datecalendar.ui \
    editclasswidget.ui \
    mainwindow.ui \
    selectweek.ui \
    smallwidget.ui \
    subrepeat.ui \
    widget.ui

TRANSLATIONS += \
    qt_test_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    qt_test.pro.user

RESOURCES += \
    res.qrc
