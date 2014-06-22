#ifndef VIEWGRAPHICS_H
#define VIEWGRAPHICS_H

#include "src/controle/controleconfiguracaohost.h"
#include "src/controle/controleconfiguracaohub.h"
#include "src/controle/controleconfiguracaoroteador.h"
#include "src/controle/controleconfiguracaoswitch.h"
#include "src/visao/mainwindow.h"

#include <QGraphicsView>
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QGraphicsItem>
#include <QDebug>
#include <QLabel>
#include <QVariant>

class ViewGraphics : public QGraphicsView
{
    Q_OBJECT
public:
    explicit ViewGraphics(QWidget *parent = 0);
    void dragEnterEvent(QDragEnterEvent *event);
    void dragMoveEvent(QDragMoveEvent *event);
    void dropEvent(QDropEvent *event);
    void mousePressEvent(QGraphicsSceneEvent *event);
    void mouseDoubleClickEvent(QMouseEvent *event);
    void setMainWindow(MainWindow *mainWindow);
private:
    MainWindow *mainWindow;
};

#endif // VIEWGRAPHICS_H
