#ifndef CONTROLECONFIGURACAOHOST_H
#define CONTROLECONFIGURACAOHOST_H

#include "src/visao/ConfiguracaoHostDialog.h"
#include "src/visao/mainwindow.h"
#include <QObject>
#include <QPushButton>
#include <QTabWidget>
#include <QWidget>
#include <QMessageBox>

class ControleConfiguracaoHost : public QObject
{
    Q_OBJECT
public:
    ControleConfiguracaoHost(MainWindow *mainWindow);
    void show();
private:
    ConfiguracaoHostDialog *dialog;
    MainWindow *mainWindow;
    void listeners();
private slots:
    void onClickButtonNovo();
    void onClickButtonGravarFisico();
    void onClickButtonExcluir();
};

#endif // CONTROLECONFIGURACAOHOST_H
