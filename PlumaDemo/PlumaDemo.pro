TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

include(pluma/pluma.pri)


CONFIG(debug, debug|release) {
suffix = debug
}
else{
suffix = release
}

DESTDIR = output/bin_$${suffix}
OBJECTS_DIR = output/temp/temp_$${suffix}
UI_DIR = output/temp/temp_$${suffix}
MOC_DIR = output/temp/temp_$${suffix}
RCC_DIR = output/temp/temp_$${suffix}

SOURCES += \
        main.cpp \
        pluginbase.cpp

LIBS += -ldl

HEADERS += \
    pluginbase.h
