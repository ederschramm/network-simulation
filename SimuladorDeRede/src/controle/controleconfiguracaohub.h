#ifndef CONTROLECONFIGURACAOHUB_H
#define CONTROLECONFIGURACAOHUB_H

#include "src/visao/mainwindow.h"
#include "src/visao/ConfiguracaoHubDialog.h"
#include <QObject>
#include <QGroupBox>
#include <QPushButton>

class MainWindow;

class ControleConfiguracaoHub : public QObject
{
    Q_OBJECT
public:
    ControleConfiguracaoHub(MainWindow *mainWindow);
    void show();
private:
    MainWindow *mainWindow;
    ConfiguracaoHubDialog *dialog;
    void listeners();
private slots:
    void onClickButtonNovo();
    void onClickButtonGravar();
    void onClickButtonExcluir();
};

#endif // CONTROLECONFIGURACAOHUB_H
