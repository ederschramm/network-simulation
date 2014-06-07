#include <QtGui/QApplication>
#include "src/controle/controleprincipal.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ControlePrincipal c;
    return a.exec();
}
