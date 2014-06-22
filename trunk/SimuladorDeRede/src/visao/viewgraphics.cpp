#include "src/visao/viewgraphics.h"

ViewGraphics::ViewGraphics(QWidget *parent) :
    QGraphicsView(parent)
{
    qDebug()<<"ViewGraphics::ViewGraphics(QWidget *parent)";
}

void ViewGraphics::setMainWindow(MainWindow *mainWindow){
    this->mainWindow = mainWindow;
}

void ViewGraphics::dragEnterEvent(QDragEnterEvent *event) {
    qDebug()<<"ViewGraphics::dragEnterEvent(QDragEnterEvent *event)";

    if (event->mimeData()->hasFormat("application/x-dnditemdata")) {
        event->setDropAction(Qt::MoveAction);
        event->accept();
    } else {
        event->ignore();
    }
}

void ViewGraphics::dragMoveEvent(QDragMoveEvent *event) {
    qDebug()<<"ViewGraphics::dragMoveEvent(QDragMoveEvent * event)";
}

void ViewGraphics::dropEvent(QDropEvent *event){
    qDebug()<<"ViewGraphics::dropEvent(QDropEvent *event)";

    if (event->mimeData()->hasFormat("application/x-dnditemdata")) {
        QByteArray itemData = event->mimeData()->data("application/x-dnditemdata");
        QDataStream dataStream(&itemData, QIODevice::ReadOnly);

        QPixmap pixmap;
        QPoint offset;
        dataStream >> pixmap >> offset;

        QLabel *newIcon = new QLabel(this);
        newIcon->setPixmap(pixmap);
        newIcon->move(event->pos() - offset);
        newIcon->show();
        newIcon->setAttribute(Qt::WA_DeleteOnClose);

        if (event->source() == this) {
            event->setDropAction(Qt::MoveAction);
            event->accept();
        } else {
            event->acceptProposedAction();
        }
    } else {
        event->ignore();
    }
}

void ViewGraphics::mousePressEvent(QGraphicsSceneEvent *event) {
    qDebug()<<"ViewGraphics::nousePressEvent(QGraphicsSceneEvent *event)";
}

void ViewGraphics::mouseDoubleClickEvent(QMouseEvent *event) {
    qDebug()<<"ViewGraphics::mouseDoubleClickEvent(QMouseEvent *event)";

    QGraphicsItem *item = itemAt(event->x(), event->y());
    QVariant data = item->data(1);

    if(item){
        if (data == QVariant("laComputador")){
            ControleConfiguracaoHost *controlPC = new ControleConfiguracaoHost(this->mainWindow);
            controlPC->show();
        } else if (data == QVariant("laSwitch")){

        } else if (data == QVariant("laHub")){

        } else {

        }
    }
}
