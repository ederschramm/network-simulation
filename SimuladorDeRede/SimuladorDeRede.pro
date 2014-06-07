#-------------------------------------------------
#
# Project created by QtCreator 2014-05-12T23:58:46
#
#-------------------------------------------------

QT       += core gui

TARGET = SimuladorDeRede
TEMPLATE = app


SOURCES += src\main.cpp\
        src\visao\mainwindow.cpp\
        src\modelo\Cabo.cpp\
        src\modelo\Computador.cpp\
        src\modelo\Dado.cpp\
        src\modelo\Datagrama.cpp\
        src\modelo\Equipamento.cpp\
        src\modelo\Frame.cpp\
        src\modelo\Hub.cpp\
        src\modelo\IP.cpp\
        src\modelo\MAC.cpp\
        src\modelo\PortaRede.cpp\
        src\modelo\Roteador.cpp\
        src\modelo\Segmento.cpp\
        src\modelo\Switch.cpp \
        src\visao\ConfiguracaoHubDialog.cpp \
        src\visao\ConfiguracaoHostDialog.cpp \
        src\visao\ConfiguracaoRoteadorDialog.cpp \
        src\visao\ConfiguracaoSwitchDialog.cpp \
    src/controle/controleprincipal.cpp

HEADERS  += src\visao\mainwindow.h\
        src\modelo\A.h\
        src\modelo\Cabo.h\
        src\modelo\Computador.h\
        src\modelo\Dado.h\
        src\modelo\Datagrama.h\
        src\modelo\Equipamento.h\
        src\modelo\Frame.h\
        src\modelo\Hub.h\
        src\modelo\I.h\
        src\modelo\IP.h\
        src\modelo\MAC.h\
        src\modelo\NI.h\
        src\modelo\PortaRede.h\
        src\modelo\Roteador.h\
        src\modelo\Segmento.h\
        src\modelo\Switch.h\
        src\modelo\T.h \
        src\visao\ConfiguracaoHubDialog.h \
        src\visao\ConfiguracaoHostDialog.h \
        src\visao\ConfiguracaoRoteadorDialog.h \
        src\visao\ConfiguracaoSwitchDialog.h \
    src/controle/controleprincipal.h

FORMS    += src\visao\mainwindow.ui \
    src\visao\ConfiguracaoHubDialog.ui \
    src\visao\ConfiguracaoHostDialog.ui \
    src\visao\ConfiguracaoRoteadorDialog.ui \
    src\visao\ConfiguracaoSwitchDialog.ui

RESOURCES += \
    src\visao\Recursos.qrc

