#include "controleconfiguracaohub.h"

ControleConfiguracaoHub::ControleConfiguracaoHub(MainWindow *mainWindow)
{
    this->mainWindow = mainWindow;
    this->dialog = new ConfiguracaoHubDialog(this->mainWindow);
    this->listeners();
}

void ControleConfiguracaoHub::show(){
    this->dialog->show();
}

void ControleConfiguracaoHub::listeners(){

}

void ControleConfiguracaoHub::onClickButtonExcluir(){
    //Evento do click do botão excluir
}

void ControleConfiguracaoHub::onClickButtonGravar(){
    //Evento do click do botão gravar
}

void ControleConfiguracaoHub::onClickButtonNovo(){
    //Evento do click do botão novo
}
