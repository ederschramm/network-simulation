#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QPushButton *btComputador;
    QPushButton *btSwitch;
    QPushButton *btHub;
    QPushButton *btRoteador;
    QPushButton *btCaboStraight;
    QPushButton *btCaboCross;
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
