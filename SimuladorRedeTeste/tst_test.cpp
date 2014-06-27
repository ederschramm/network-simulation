#include <QtCore/QString>
#include <QtTest/QtTest>

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
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(Test)

#include "tst_test.moc"
