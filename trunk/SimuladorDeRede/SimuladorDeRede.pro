#-------------------------------------------------
#
# Project created by teste QtCreator 2014-05-12T23:58:46
#
#-------------------------------------------------

QT       += core gui

TARGET = SimuladorDeRede
TEMPLATE = app

HEADERS  += src\controle\controleprincipal.h\
        src\controle\controleconfiguracaohost.h\
        src\controle\controleconfiguracaohub.h\
        src\controle\controleconfiguracaoroteador.h\
        src\controle\controleconfiguracaoswitch.h\
        src\visao\mainwindow.h\
        src\visao\ConfiguracaoHubDialog.h\
        src\visao\ConfiguracaoHostDialog.h\
        src\visao\ConfiguracaoRoteadorDialog.h\
        src\visao\ConfiguracaoSwitchDialog.h \
    src/visao/viewgraphics.h

SOURCES += src\main.cpp\
        src\controle\controleprincipal.cpp\
        src\controle\controleconfiguracaohost.cpp\
        src\controle\controleconfiguracaohub.cpp\
        src\controle\controleconfiguracaoroteador.cpp\
        src\controle\controleconfiguracaoswitch.cpp \
        src\visao\mainwindow.cpp\
        src\visao\ConfiguracaoHubDialog.cpp\
        src\visao\ConfiguracaoHostDialog.cpp\
        src\visao\ConfiguracaoRoteadorDialog.cpp\
        src\visao\ConfiguracaoSwitchDialog.cpp \
    src/visao/viewgraphics.cpp \

FORMS    += src\visao\mainwindow.ui\
        src\visao\ConfiguracaoHubDialog.ui\
        src\visao\ConfiguracaoHostDialog.ui\
        src\visao\ConfiguracaoRoteadorDialog.ui\
        src\visao\ConfiguracaoSwitchDialog.ui

RESOURCES += src\visao\Recursos.qrc
