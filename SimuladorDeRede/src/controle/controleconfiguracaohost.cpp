#include "controleconfiguracaohost.h"
#include <QDebug>
ControleConfiguracaoHost::ControleConfiguracaoHost(MainWindow *mainWindow)
{
    this->mainWindow = mainWindow;
    this->dialog = new ConfiguracaoHostDialog(this->mainWindow);
    this->listeners();
}

void ControleConfiguracaoHost::show(){
    this->dialog->show();
}

void ControleConfiguracaoHost::listeners(){
    //Conectar os componentes aos ouvintes
}

void ControleConfiguracaoHost::onClickButtonExcluir(){
    //Evento do click do botão excluir
}

void ControleConfiguracaoHost::onClickButtonGravarFisico(){
    //Evento do click do botão gravar fisico
}

void ControleConfiguracaoHost::onClickButtonNovo(){
    //Evento do click do botão novo
}
