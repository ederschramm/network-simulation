#-------------------------------------------------
#
# Project created by QtCreator 2014-06-27T00:44:34
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = tst_test
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += tst_test.cpp \
    ../SimuladorDeRede/src/modelo/switch.cpp \
    ../SimuladorDeRede/src/modelo/observavel.cpp \
    ../SimuladorDeRede/src/modelo/observador.cpp \
    ../SimuladorDeRede/src/modelo/interfacerede.cpp \
    ../SimuladorDeRede/src/modelo/frame.cpp \
    ../SimuladorDeRede/src/modelo/equipamento.cpp \
    ../SimuladorDeRede/src/modelo/computador.cpp \
    ../SimuladorDeRede/src/modelo/cabo.cpp \
    ../SimuladorDeRede/src/modelo/segmento.cpp \
    ../SimuladorDeRede/src/modelo/datagrama.cpp \
    ../SimuladorDeRede/src/modelo/dado.cpp

HEADERS += \
    ../SimuladorDeRede/src/modelo/switch.h \
    ../SimuladorDeRede/src/modelo/observavel.h \
    ../SimuladorDeRede/src/modelo/observador.h \
    ../SimuladorDeRede/src/modelo/interfacerede.h \
    ../SimuladorDeRede/src/modelo/frame.h \
    ../SimuladorDeRede/src/modelo/equipamento.h \
    ../SimuladorDeRede/src/modelo/computador.h \
    ../SimuladorDeRede/src/modelo/cabo.h \
    ../SimuladorDeRede/src/modelo/segmento.h \
    ../SimuladorDeRede/src/modelo/datagrama.h \
    ../SimuladorDeRede/src/modelo/dado.h

INCLUDEPATH +=../SimuladorDeRede
