#include "controleconfiguracaoroteador.h"

ControleConfiguracaoRoteador::ControleConfiguracaoRoteador(MainWindow *mainWindow)
{
    this->mainWindow = mainWindow;
    this->dialog = new ConfiguracaoRoteadorDialog(this->mainWindow);
    this->listeners();
}

void ControleConfiguracaoRoteador::show(){
    this->dialog->show();
}

void ControleConfiguracaoRoteador::listeners(){

}

void ControleConfiguracaoRoteador::onClickButtonExcluir(){
    //Evento do botão excluir
}

void ControleConfiguracaoRoteador::onClickButtonGravar(){
    //Evento do botão gravar
}

void ControleConfiguracaoRoteador::onClickButtonNovo(){
    //Evento do botão novo
}
