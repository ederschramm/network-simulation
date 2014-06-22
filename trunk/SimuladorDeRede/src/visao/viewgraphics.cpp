#include "viewgraphics.h"

ViewGraphics::ViewGraphics(QWidget *parent) :
    QGraphicsView(parent)
{
    qDebug()<<"ViewGraphics::ViewGraphics(QWidget *parent)";
}

void ViewGraphics::dragEnterEvent(QDragEnterEvent *event) {
    qDebug()<<"ViewGraphics::dragEnterEvent(QDragEnterEvent *event)";
}

void ViewGraphics::dragMoveEvent(QDragMoveEvent *event) {
    qDebug()<<"ViewGraphics::dragMoveEvent(QDragMoveEvent * event)";
}

void ViewGraphics::dropEvent(QDropEvent *event){
    qDebug()<<"ViewGraphics::dropEvent(QDropEvent *event)";
}

void ViewGraphics::mousePressEvent(QGraphicsSceneEvent *event) {
    qDebug()<<"ViewGraphics::nousePressEvent(QGraphicsSceneEvent *event)";
}

void ViewGraphics::mouseDoubleClickEvent(QMouseEvent *event) {
    qDebug()<<"ViewGraphics::mouseDoubleClickEvent(QMouseEvent *event)";
}
