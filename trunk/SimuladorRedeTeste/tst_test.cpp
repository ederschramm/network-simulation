#include <QtCore/QString>
#include <QtTest/QtTest>
#include <string>
#include "src/modelo/cabo.h"
#include "src/modelo/computador.h"
#include "src/modelo/equipamento.h"
#include "src/modelo/frame.h"
#include "src/modelo/interfacerede.h"
#include "src/modelo/observador.h"
#include "src/modelo/observavel.h"
#include "src/modelo/switch.h"

using namespace std;

class Test : public QObject
{
    Q_OBJECT
    
public:
    Test();
    
private Q_SLOTS:
    void pcCrossPc();
};

Test::Test()
{
}

void Test::pcCrossPc()
{
    Computador *pc01 = new Computador();
    Computador *pc02 = new Computador();
    InterfaceRede *i01 = new InterfaceRede();
    InterfaceRede *i02 = new InterfaceRede();
    Cabo *cabo = new Cabo();

    cabo->setTipo("cross");
    i01->setNumero(1);
    i01->setCabo(cabo);
    i01->setEquipamento(pc01);
    cabo->setA(i01);
    pc01->setNome("PC 01");
    pc01->addInterfaceRede(i01);
    pc01->configuraIP(1,"10.0.0.1");
    pc01->configuraMAC(1, "AA:AA:AA:AA:AA:AA");

    i02->setNumero(1);
    i02->setCabo(cabo);
    i02->setEquipamento(pc02);
    cabo->setB(i02);
    pc02->setNome("PC 01");
    pc02->addInterfaceRede(i02);
    pc02->configuraIP(1, "10.0.0.2");
    pc02->configuraMAC(1, "BB:BB:BB:BB:BB:BB");

    Frame *frame = new Frame();
    frame->setDestino("BB:BB:BB:BB:BB:BB");
    frame->setOrigem("AA:AA:AA:AA:AA:AA");
    pc01->findInterfaceRede(1)->enviaFrame(frame);

    QCOMPARE(QString::fromStdString(frame->getDestino()),
             QString::fromStdString(i02->getFrame()->getDestino()));
    QCOMPARE(QString::fromStdString(frame->getOrigem()),
             QString::fromStdString(i02->getFrame()->getOrigem()));
}

QTEST_APPLESS_MAIN(Test)

#include "tst_test.moc"
