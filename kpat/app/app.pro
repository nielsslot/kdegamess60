TEMPLATE = app
TARGET = kpat_s60
QT += gui \
    svg \
    xml
LIBS += -L../patsolve \
    -lpatsolve

# DEFINES += Q_OS_SYMBIAN
RESOURCES += kpat.qrc

# Input
HEADERS += card.h \
    cardmaps.h \
    cardcache.h \
    cardcache_p.h \
    carddeckinfo.h \
    carddeckinfo_p.h \
    clock.h \
    copyright.h \
    dealer.h \
    deck.h \
    demo.h \
    fortyeight.h \
    freecell.h \ # gamestatsimpl.h \
    golf.h \
    grandf.h \
    gypsy.h \
    hint.h \
    idiot.h \
    klondike.h \
    mod3.h \
    pile.h \
    pwidget.h \
    render.h \
    simon.h \
    speeds.h \
    spider.h \
    version.h \
    view.h \
    yukon.h

# FORMS += gamestats.ui
SOURCES += card.cpp \
    cardmaps.cpp \
    cardcache.cpp \
    carddeckinfo.cpp \
    clock.cpp \
    dealer.cpp \
    deck.cpp \
    demo.cpp \
    fortyeight.cpp \
    freecell.cpp \ # gamestatsimpl.cpp \
    golf.cpp \
    grandf.cpp \
    gypsy.cpp \
    idiot.cpp \
    klondike.cpp \
    main.cpp \
    mod3.cpp \
    pile.cpp \
    pile_algorithms.cpp \
    pwidget.cpp \
    render.cpp \
    simon.cpp \
    spider.cpp \
    view.cpp \
    yukon.cpp
INCLUDEPATH += ../patsolve
DEFINES += Q_OS_SYMBIAN
