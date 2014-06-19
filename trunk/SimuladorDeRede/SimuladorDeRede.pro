#-------------------------------------------------
#
# Project created by teste QtCreator 2014-05-12T23:58:46
#
#-------------------------------------------------

QT       += core gui

TARGET = SimuladorDeRede
TEMPLATE = app


SOURCES += src\main.cpp\
        src\visao\mainwindow.cpp\
        src\visao\ConfiguracaoHubDialog.cpp\
        src\visao\ConfiguracaoHostDialog.cpp\
        src\visao\ConfiguracaoRoteadorDialog.cpp\
        src\visao\ConfiguracaoSwitchDialog.cpp\
        src\controle\controleprincipal.cpp\
        src\controle\controleconfiguracaohost.cpp\
        src\controle\controleconfiguracaohub.cpp\
        src\controle\controleconfiguracaoroteador.cpp\
        src\controle\controleconfiguracaoswitch.cpp \
    src/modelo/equipamento.cpp \
    src/modelo/interfacerede.cpp \
    src/modelo/computador.cpp \
    src/modelo/roteador.cpp \
    src/modelo/hub.cpp \
    src/modelo/switch.cpp

HEADERS  += src\visao\mainwindow.h\
        src\visao\ConfiguracaoHubDialog.h\
        src\visao\ConfiguracaoHostDialog.h\
        src\visao\ConfiguracaoRoteadorDialog.h\
        src\visao\ConfiguracaoSwitchDialog.h\
        src\controle\controleprincipal.h\
        src\controle\controleconfiguracaohost.h\
        src\controle\controleconfiguracaohub.h\
        src\controle\controleconfiguracaoroteador.h\
        src\controle\controleconfiguracaoswitch.h \
    src/modelo/equipamento.h \
    src/modelo/interfacerede.h \
    src/modelo/computador.h \
    src/modelo/roteador.h \
    src/modelo/hub.h \
    src/modelo/switch.h

FORMS    += src\visao\mainwindow.ui\
        src\visao\ConfiguracaoHubDialog.ui\
        src\visao\ConfiguracaoHostDialog.ui\
        src\visao\ConfiguracaoRoteadorDialog.ui\
        src\visao\ConfiguracaoSwitchDialog.ui

RESOURCES += \
        src\visao\Recursos.qrc

