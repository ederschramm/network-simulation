#include "controleconfiguracaohost.h"
#include <QDebug>
ControleConfiguracaoHost::ControleConfiguracaoHost(MainWindow *mainWindow)
{
    this->mainWindow = mainWindow;
    this->dialog = new ConfiguracaoHostDialog(this->mainWindow);
    this->listeners();
}

void ControleConfiguracaoHost::show(){
    this->dialog->exec();
}

void ControleConfiguracaoHost::listeners(){
    QTabWidget *tabWidget;
    QWidget *tabFisico;
    QWidget *tabLogico;
    QWidget *tabPrompt;
    QPushButton *btNovo;
    QPushButton *btGravarFisico;
    QPushButton *btExcluir;

    tabWidget = this->dialog->findChild<QTabWidget*>("tabWidget");
    tabFisico = tabWidget->findChild<QWidget*>("tabFisico");
    tabLogico = tabWidget->findChild<QWidget*>("tabLogico");
    tabPrompt = tabWidget->findChild<QWidget*>("tabPrompt");

    btNovo = tabFisico->findChild<QPushButton*>("btNovo");
    btGravarFisico = tabFisico->findChild<QPushButton*>("btGravarFisico");
    btExcluir = tabFisico->findChild<QPushButton*>("btExcluir");

    connect(btNovo, SIGNAL(clicked()), this,SLOT(onClickButtonNovo()));
    connect(btGravarFisico, SIGNAL(clicked()), this,SLOT(onClickButtonGravarFisico()));
    connect(btExcluir,SIGNAL(clicked()),this,SLOT(onClickButtonExcluir()));
}

void ControleConfiguracaoHost::onClickButtonExcluir(){
    QMessageBox message;
    message.setText("Excluir");
    message.exec();
}

void ControleConfiguracaoHost::onClickButtonGravarFisico(){
    QMessageBox message;
    message.setText("Gravar Físico");
    message.exec();
}

void ControleConfiguracaoHost::onClickButtonNovo(){
    qDebug("Novo");
}
