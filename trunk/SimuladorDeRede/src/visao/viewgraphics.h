#ifndef VIEWGRAPHICS_H
#define VIEWGRAPHICS_H

#include <QGraphicsView>
#include <QDebug>

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
};

#endif // VIEWGRAPHICS_H
