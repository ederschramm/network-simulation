#-------------------------------------------------
#
# Project created by QtCreator 2014-05-12T23:58:46
#
#-------------------------------------------------

QT       += core gui

TARGET = SimuladorDeRede
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp\
        Cabo.cpp\
        Computador.cpp\
        Dado.cpp\
        Datagrama.cpp\
        Equipamento.cpp\
        Frame.cpp\
        Hub.cpp\
        IP.cpp\
        MAC.cpp\
        PortaRede.cpp\
        Roteador.cpp\
        Segmento.cpp\
        Switch.cpp \
    ConfiguracaoHubDialog.cpp \
    ConfiguracaoHostDialog.cpp \
    ConfiguracaoRoteadorDialog.cpp \
    ConfiguracaoSwitchDialog.cpp

HEADERS  += mainwindow.h\
        A.h\
        Cabo.h\
        Computador.h\
        Dado.h\
        Datagrama.h\
        Equipamento.h\
        Frame.h\
        Hub.h\
        I.h\
        IP.h\
        MAC.h\
        NI.h\
        PortaRede.h\
        Roteador.h\
        Segmento.h\
        Switch.h\
        T.h \
    ConfiguracaoHubDialog.h \
    ConfiguracaoHostDialog.h \
    ConfiguracaoRoteadorDialog.h \
    ConfiguracaoSwitchDialog.h

FORMS    += mainwindow.ui \
    ConfiguracaoHubDialog.ui \
    ConfiguracaoHostDialog.ui \
    ConfiguracaoRoteadorDialog.ui \
    ConfiguracaoSwitchDialog.ui

RESOURCES += \
    Recursos.qrc
