TEMPLATE = app
TARGET = klines_s60
QT += core \
    gui \
    svg
HEADERS += kgamepopupitem.h \
    previewitem.h \
    commondefs.h \
    mwidget.h \
    klines.h \
    klines_s60.loc \
    scene.h \
    renderer.h \
    animator.h \
    ballitem.h
SOURCES += kgamepopupitem.cpp \
    previewitem.cpp \
    mwidget.cpp \
    klines.cpp \
    klines_s60.rss \
    klines_s60_reg.rss \
    main.cpp \
    scene.cpp \
    renderer.cpp \
    animator.cpp \
    ballitem.cpp
FORMS += klines_s60.ui
RESOURCES += klines.qrc
symbian { 
    TARGET.UID3 = 0xE41D776F
    ICON = klines.png
}
