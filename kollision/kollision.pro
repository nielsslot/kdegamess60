TEMPLATE = app
TARGET = kollision_s60
DEFINES += Q_OS_SYMBIAN
QT += gui svg

RESOURCES += kollision.qrc

# Input
HEADERS += animation.h \
           animator.h \
           ball.h \
           mainarea.h \
           mainwindow.h \
           message.h \
           renderer.h \
           sprite.h \
           spritefwd.h \
	   ksharedptr.h

SOURCES += animation.cpp \
           animator.cpp \
           ball.cpp \
           main.cpp \
           mainarea.cpp \
           mainwindow.cpp \
           message.cpp \
           renderer.cpp
