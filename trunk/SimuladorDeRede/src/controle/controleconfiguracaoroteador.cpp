#include "controleconfiguracaoroteador.h"
#include "QDebug"

ControleConfiguracaoRoteador::ControleConfiguracaoRoteador(MainWindow *mainWindow)
{
    qDebug()<<"ControleConfiguracaoRoteador::ControleConfiguracaoRoteador(MainWindow *mainWindow)";
    this->mainWindow = mainWindow;
    this->dialog = new ConfiguracaoRoteadorDialog(this->mainWindow->centralWidget());
    this->listeners();
}

void ControleConfiguracaoRoteador::show(){
    qDebug()<<"ControleConfiguracaoRoteador::show()";
    this->dialog->exec();
}

void ControleConfiguracaoRoteador::listeners(){
    qDebug()<<"ControleConfiguracaoRoteador::listeners()";
    QGroupBox *gbInterfaceRede;
    QPushButton *btNovo;
    QPushButton *btGravar;
    QPushButton *btExcluir;

    gbInterfaceRede = this->dialog->findChild<QGroupBox*>("gbInterfaceRede");
    btNovo = gbInterfaceRede->findChild<QPushButton*>("btNovo");
    btGravar = gbInterfaceRede->findChild<QPushButton*>("btGravar");
    btExcluir = gbInterfaceRede->findChild<QPushButton*>("btExcluir");

    connect(btNovo,SIGNAL(clicked()),this,SLOT(onClickButtonNovo()));
    connect(btGravar,SIGNAL(clicked()),this,SLOT(onClickButtonGravar()));
    connect(btExcluir,SIGNAL(clicked()),this,SLOT(onClickButtonExcluir()));
}

void ControleConfiguracaoRoteador::onClickButtonExcluir(){
    qDebug()<<"ControleConfiguracaoRoteador::onClickButtonExcluir()";
}

void ControleConfiguracaoRoteador::onClickButtonGravar(){
    qDebug()<<"ControleConfiguracaoRoteador::onClickButtonGravar()";
}

void ControleConfiguracaoRoteador::onClickButtonNovo(){
    qDebug()<<"ControleConfiguracaoRoteador::onClickButtonNovo()";
}
