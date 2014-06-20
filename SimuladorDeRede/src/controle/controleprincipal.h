#ifndef CONTROLEPRINCIPAL_H
#define CONTROLEPRINCIPAL_H

#include "src/visao/mainwindow.h"
#include "src/modelo/Equipamento.h"
#include "src/modelo/Computador.h"
#include "src/modelo/Hub.h"
#include "src/modelo/Roteador.h"
#include "src/modelo/Switch.h"

#include <QObject>
#include <QPushButton>
#include <QMessageBox>
#include <QLabel>
#include <map>
#include <sstream>

using namespace std;

class ControlePrincipal : public QObject
{
    Q_OBJECT
public:
    ControlePrincipal();
private:
    MainWindow* mainWindow;
    void listeners();
    map<QLabel*, Equipamento*> equipamentos;
    string equipamento;
private slots:
    void onClickButtonComputador();
    void onClickButtonSwitch();
    void onClickButtonHub();
    void onClickButtonRoteador();
    void onClickButtonCaboStraight();
    void onClickButtonCaboCross();
};

#endif // CONTROLEPRINCIPAL_H
