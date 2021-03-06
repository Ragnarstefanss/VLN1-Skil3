QT += core gui
QT += sql
QT += widgets

TARGET = week2

CONFIG += C++11
CONFIG -= app_bundle
TEMPLATE = app

SOURCES += main.cpp \
    models/scientist.cpp \
    repositories/scientistrepository.cpp \
    services/scientistservice.cpp \
    ui/consoleui.cpp \
    utilities/utils.cpp \
    models/computer.cpp \
    services/computerservice.cpp \
    repositories/computerrepository.cpp \
    repositories/linkrepository.cpp \
    services/linkservice.cpp \
    mainwindow.cpp \
    ui/addperson.cpp \
    ui/addcomputer.cpp

HEADERS += \
    models/scientist.h \
    repositories/scientistrepository.h \
    utilities/utils.h \
    utilities/constants.h \
    services/scientistservice.h \
    ui/consoleui.h \
    models/computer.h \
    services/computerservice.h \
    repositories/computerrepository.h \
    repositories/linkrepository.h \
    services/linkservice.h \
    mainwindow.h \
    ui/addperson.h \
    ui/addcomputer.h

INCLUDEPATH += models \
    repositories \
    services \
    ui

FORMS    += mainwindow.ui \
    ui/addperson.ui \
    ui/addcomputer.ui
