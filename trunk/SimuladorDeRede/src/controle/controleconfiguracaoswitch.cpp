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
    //Evento do bot�o excluir
}

void ControleConfiguracaoSwitch::onClickButtonGravar(){
    //Evento do bot�o gravar
}

void ControleConfiguracaoSwitch::onClickButtonNovo(){
    //Evento do bot�o novo
}

