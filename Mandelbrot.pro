QT += gui
QT += widgets

CONFIG += c++11 console
#CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
#DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        interfacefractal.cpp \
        interfaceparameters.cpp \
        main.cpp \
        mandelbrotfunctions.cpp

HEADERS += \
        interfacefractal.h \
        interfaceparameters.h \
        mandelbrotfunctions.h \
        window.h

# Default rules for deployment.
#qnx: target.path = /tmp/$${TARGET}/bin
#else: unix:!android: target.path = /opt/$${TARGET}/bin
#!isEmpty(target.path): INSTALLS += target

#LIB SFML
INCLUDEPATH += $$_PRO_FILE_PWD_/SFML-2.5.1/include
DEPENDPATH += $$_PRO_FILE_PWD_/SFML-2.5.1/include

unix: LIBS += -L$$_PRO_FILE_PWD_/SFML-2.5.1/linux/lib -lsfml-window
else:win32: LIBS += -L$$_PRO_FILE_PWD_/SFML-2.5.1/window/lib -lsfml-window

unix: LIBS += -L$$_PRO_FILE_PWD_/SFML-2.5.1/linux/lib -lsfml-graphics
else:win32: LIBS += -L$$_PRO_FILE_PWD_/SFML-2.5.1/window/lib -lsfml-graphics

unix: LIBS += -L$$_PRO_FILE_PWD_/SFML-2.5.1/linux/lib -lsfml-network
else:win32: LIBS += -L$$_PRO_FILE_PWD_/SFML-2.5.1/window/lib -lsfml-network

unix: LIBS += -L$$_PRO_FILE_PWD_/SFML-2.5.1/linux/lib -lsfml-system
else:win32: LIBS += -L$$_PRO_FILE_PWD_/SFML-2.5.1/window/lib -lsfml-system

unix: LIBS += -L$$_PRO_FILE_PWD_/SFML-2.5.1/linux/lib -lsfml-audio
else:win32: LIBS += -L$$_PRO_FILE_PWD_/SFML-2.5.1/window/lib -lsfml-audio

FORMS += \
    interfaceparameters.ui
