#ifndef CONTROLEPRINCIPAL_H
#define CONTROLEPRINCIPAL_H

#include "src/visao/mainwindow.h"
#include <QObject>
#include <QPushButton>
#include <QMessageBox>

class ControlePrincipal : public QObject
{
    Q_OBJECT
public:
    ControlePrincipal();
private:
    MainWindow* mainWindow;
    void listeners();
private slots:
    void onClickButtonComputador();
    void onClickButtonSwitch();
    void onClickButtonHub();
    void onClickButtonRoteador();
    void onClickButtonCaboStraight();
    void onClickButtonCaboCross();
};

#endif // CONTROLEPRINCIPAL_H
