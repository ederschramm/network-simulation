#include "controleconfiguracaoswitch.h"
#include <QDebug>

ControleConfiguracaoSwitch::ControleConfiguracaoSwitch(MainWindow *mainWindow)
{
    qDebug()<<"ControleConfiguracaoSwitch::ControleConfiguracaoSwitch(MainWindow *mainWindow)";
    this->mainWindow = mainWindow;
    this->dialog = new ConfiguracaoSwitchDialog(this->mainWindow->centralWidget());
    this->listeners();
}

void ControleConfiguracaoSwitch::show(){
    qDebug()<<"ControleConfiguracaoSwitch::show()";
    this->dialog->exec();
}

void ControleConfiguracaoSwitch::listeners(){
    qDebug()<<"ControleConfiguracaoSwitch::listeners()";
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

void ControleConfiguracaoSwitch::onClickButtonExcluir(){
    qDebug()<<"ControleConfiguracaoSwitch::onClickButtonExcluir()";
}

void ControleConfiguracaoSwitch::onClickButtonGravar(){
    qDebug()<<"ControleConfiguracaoSwitch::onClickButtonGravar()";
}

void ControleConfiguracaoSwitch::onClickButtonNovo(){
    qDebug()<<"ControleConfiguracaoSwitch::onClickButtonNovo()";
}

