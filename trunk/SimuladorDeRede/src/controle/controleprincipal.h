#ifndef CONTROLEPRINCIPAL_H
#define CONTROLEPRINCIPAL_H

#include "src/visao/mainwindow.h"
#include "src/modelo/Equipamento.h"
#include "src/modelo/Computador.h"

#include <QObject>
#include <QPushButton>
#include <QMessageBox>
#include <vector>

using namespace std;

class ControlePrincipal : public QObject
{
    Q_OBJECT
public:
    ControlePrincipal();
private:
    MainWindow* mainWindow;
    void listeners();
    vector<Equipamento*> equipamentos;
private slots:
    void onClickButtonComputador();
    void onClickButtonSwitch();
    void onClickButtonHub();
    void onClickButtonRoteador();
    void onClickButtonCaboStraight();
    void onClickButtonCaboCross();
};

#endif // CONTROLEPRINCIPAL_H
