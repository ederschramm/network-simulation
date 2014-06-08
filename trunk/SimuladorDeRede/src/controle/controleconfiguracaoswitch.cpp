#include "controleconfiguracaoswitch.h"

ControleConfiguracaoSwitch::ControleConfiguracaoSwitch(MainWindow *mainWindow)
{
    this->mainWindow = mainWindow;
    this->dialog = new ConfiguracaoSwitchDialog(this->mainWindow);
    this->listeners();
}

void ControleConfiguracaoSwitch::show(){
    this->dialog->show();
}

void ControleConfiguracaoSwitch::listeners(){

}

void ControleConfiguracaoSwitch::onClickButtonExcluir(){
    //Evento do botão excluir
}

void ControleConfiguracaoSwitch::onClickButtonGravar(){
    //Evento do botão gravar
}

void ControleConfiguracaoSwitch::onClickButtonNovo(){
    //Evento do botão novo
}

