TEMPLATE = lib
CONFIG += staticlib
QT += svg \
    gui

# DEFINES += Q_OS_SYMBIAN
HEADERS += clock.h \
    fortyeight.h \
    freecell.h \
    golf.h \
    grandf.h \
    gypsy.h \
    idiot.h \
    klondike.h \
    memory.h \
    mod3.h \
    patsolve.h \
    simon.h \
    spider.h \
    yukon.h
SOURCES += clock.cpp \
    fortyeight.cpp \
    freecell.cpp \
    golf.cpp \
    grandf.cpp \
    gypsy.cpp \
    idiot.cpp \
    klondike.cpp \
    memory.cpp \
    mod3.cpp \
    patsolve.cpp \
    simon.cpp \
    spider.cpp \
    yukon.cpp
DEFINES += Q_OS_SYMBIAN
