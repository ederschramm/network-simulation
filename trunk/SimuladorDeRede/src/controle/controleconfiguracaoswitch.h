#ifndef CONTROLECONFIGURACAOSWITCH_H
#define CONTROLECONFIGURACAOSWITCH_H

#include "src/visao/mainwindow.h"
#include "src/visao/ConfiguracaoSwitchDialog.h"
#include <QObject>

class ControleConfiguracaoSwitch : public QObject
{
    Q_OBJECT
public:
    ControleConfiguracaoSwitch(MainWindow *mainWindow);
    void show();
private:
    MainWindow *mainWindow;
    ConfiguracaoSwitchDialog *dialog;
    void listeners();
private slots:
    void onClickButtonNovo();
    void onClickButtonGravar();
    void onClickButtonExcluir();
};

#endif // CONTROLECONFIGURACAOSWITCH_H
