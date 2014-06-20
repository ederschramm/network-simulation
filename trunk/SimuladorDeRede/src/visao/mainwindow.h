#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QWidget>
#include <QGraphicsView>

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
    QGraphicsView *diagrama;
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
