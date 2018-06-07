QT -= gui
QT += sql

CONFIG += c++11 console
CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


INCLUDEPATH += include/

SOURCES += \
    main.cpp \
    src/DatabaseTableField.cpp \
    src/ContactTable.cpp \
    src/DatabaseTable.cpp \
    src/DatabaseTableType.cpp \
    src/Database.cpp

HEADERS += \
    include/ContactTable.h \
    include/DatabaseTableType.h \
    include/DatabaseTable.h \
    include/DatabaseTableField.h \
    include/Database.h \
    include/Config.h
