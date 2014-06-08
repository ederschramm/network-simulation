#include "controleconfiguracaohub.h"
#include "QDebug"

ControleConfiguracaoHub::ControleConfiguracaoHub(MainWindow *mainWindow)
{
    qDebug()<<"ControleConfiguracaoHub::ControleConfiguracaoHub(MainWindow *mainWindow)";
    this->mainWindow = mainWindow;
    this->dialog = new ConfiguracaoHubDialog(this->mainWindow->centralWidget());
    this->listeners();
}

void ControleConfiguracaoHub::show(){
    qDebug()<<"ControleConfiguracaoHub::show()";
    this->dialog->exec();
}

void ControleConfiguracaoHub::listeners(){
    qDebug()<<"ControleConfiguracaoHub::listeners()";
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

void ControleConfiguracaoHub::onClickButtonExcluir(){
    qDebug()<<"ControleConfiguracaoHub::onClickButtonExcluir()";
}

void ControleConfiguracaoHub::onClickButtonGravar(){
    qDebug()<<"ControleConfiguracaoHub::onClickButtonGravar()";
}

void ControleConfiguracaoHub::onClickButtonNovo(){
    qDebug()<<"ControleConfiguracaoHub::onClickButtonNovo()";
}
