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
    //Evento do click do bot�o excluir
}

void ControleConfiguracaoHub::onClickButtonGravar(){
    //Evento do click do bot�o gravar
}

void ControleConfiguracaoHub::onClickButtonNovo(){
    //Evento do click do bot�o novo
}
