#include <QtGui/QApplication>
#include "src/controle/controleprincipal.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    qDebug()<<"main()";
    QApplication a(argc, argv);
    ControlePrincipal c;
    return a.exec();
}
