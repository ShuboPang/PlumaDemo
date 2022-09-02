
INCLUDEPATH += $$PWD/include/

HEADERS += \
    $$PWD/include/Pluma/Config.hpp \
    $$PWD/include/Pluma/Connector.hpp \
    $$PWD/include/Pluma/Dir.hpp \
    $$PWD/include/Pluma/DLibrary.hpp \
    $$PWD/include/Pluma/Host.hpp \
    $$PWD/include/Pluma/PluginManager.hpp \
    $$PWD/include/Pluma/Pluma.hpp \
    $$PWD/include/Pluma/Provider.hpp \
    $$PWD/include/Pluma/uce-dirent.h

#SOURCES += \
#    $$PWD/include/Pluma/Pluma.inl

LIBS += -L$$PWD/lib -lPlumaLib
