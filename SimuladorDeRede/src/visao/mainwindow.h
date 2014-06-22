#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QWidget>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QMouseEvent>
#include <QDropEvent>
#include <QDebug>
#include <QByteArray>
#include <QDataStream>
#include <QMimeData>
#include <QDrag>

namespace Ui {
class MainWindow;
class Widget;
class QDragEnterEvent;
class QDropEvent;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QGraphicsScene *scene;
private slots:
    void mousePressEvent(QMouseEvent *event);
    void dragEnterEvent(QDragEnterEvent *event);
    void dragMoveEvent(QDragMoveEvent *event);
    void dropEvent(QDropEvent *event);
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
