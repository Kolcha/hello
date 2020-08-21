QT       += core gui widgets

CONFIG += c++11

desktopfile.path = /usr/share/applications
desktopfile.files = hello.desktop
pixmapfile.path = /usr/share/pixmaps
pixmapfile.files = hello.png hello.xpm
INSTALLS += desktopfile pixmapfile

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui
