#include "controleconfiguracaohost.h"
#include <QDebug>
ControleConfiguracaoHost::ControleConfiguracaoHost(MainWindow *mainWindow)
{
    qDebug() << "ControleConfiguracaoHost::ControleConfiguracaoHost(MainWindow *mainWindow)";
    this->mainWindow = mainWindow;
    this->dialog = new ConfiguracaoHostDialog(this->mainWindow->centralWidget());
    this->listeners();
}

void ControleConfiguracaoHost::show(){
    qDebug() << "ControleConfiguracaoHost::show()";
    this->dialog->exec();
}

void ControleConfiguracaoHost::listeners(){
    qDebug() << "ControleConfiguracaoHost::listeners()";
    QTabWidget *tabWidget;
    QWidget *tabFisico;
    QWidget *tabLogico;
    QWidget *tabPrompt;
    QPushButton *btNovo;
    QPushButton *btGravarFisico;
    QPushButton *btExcluir;
    QPushButton *btGravarLogico;

    tabWidget = this->dialog->findChild<QTabWidget*>("tabWidget");
    tabFisico = tabWidget->findChild<QWidget*>("tabFisico");
    tabLogico = tabWidget->findChild<QWidget*>("tabLogico");
    tabPrompt = tabWidget->findChild<QWidget*>("tabPrompt");
    btNovo = tabFisico->findChild<QPushButton*>("btNovo");
    btGravarFisico = tabFisico->findChild<QPushButton*>("btGravarFisico");
    btExcluir = tabFisico->findChild<QPushButton*>("btExcluir");
    btGravarLogico = tabLogico->findChild<QPushButton*>("btGravarLogico");

    connect(btNovo,SIGNAL(clicked()),this,SLOT(onClickButtonNovo()));
    connect(btGravarFisico,SIGNAL(clicked()),this,SLOT(onClickButtonGravarFisico()));
    connect(btExcluir,SIGNAL(clicked()),this,SLOT(onClickButtonExcluir()));
    connect(btGravarLogico,SIGNAL(clicked()),this,SLOT(onClickButtonGravarLogico()));
}

void ControleConfiguracaoHost::onClickButtonExcluir(){
    qDebug()<<"ControleConfiguracaoHost::onClickButtonExcluir()";
}

void ControleConfiguracaoHost::onClickButtonGravarFisico(){
    qDebug()<<"ControleConfiguracaoHost::onClickButtonGravarFisico()";
}

void ControleConfiguracaoHost::onClickButtonNovo(){
    qDebug() << "ControleConfiguracaoHost::onClickButtonNovo()";
}

void ControleConfiguracaoHost::onClickButtonGravarLogico(){
    qDebug()<<"ControleConfiguracaoHost::onClickButtonGravarLogico()";
}
