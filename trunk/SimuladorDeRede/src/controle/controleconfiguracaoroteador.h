#ifndef CONTROLECONFIGURACAOROTEADOR_H
#define CONTROLECONFIGURACAOROTEADOR_H

#include "src/visao/ConfiguracaoRoteadorDialog.h"
#include "src/visao/mainwindow.h"
#include <QObject>

class ControleConfiguracaoRoteador : public QObject
{
    Q_OBJECT
public:
    ControleConfiguracaoRoteador(MainWindow *mainWindow);
    void show();
private:
    MainWindow *mainWindow;
    ConfiguracaoRoteadorDialog *dialog;
    void listeners();
private slots:
    void onClickButtonNovo();
    void onClickButtonGravar();
    void onClickButtonExcluir();
};

#endif // CONTROLECONFIGURACAOROTEADOR_H
