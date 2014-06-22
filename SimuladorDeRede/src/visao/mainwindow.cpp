#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,554,409);
    ViewGraphics *view = new ViewGraphics(ui->diagrama);
    view->setScene(scene);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *event){

    // imprimindo mensagem de debug
    qDebug()<<"MainWindow::mousePressEvent(QMouseEvent *event)";

    QLabel *label = static_cast<QLabel*>(childAt(event->pos()));
    if (!label || label->objectName()=="centralWidget"
            || label->objectName()==""
            || label->objectName()=="diagrama"){
        return;
    }

    // imprimindo mensagem para debug
    qDebug()<<label->objectName();

    QPixmap pixmap = *label->pixmap();
    QByteArray itemData;
    QDataStream dataStream(&itemData, QIODevice::WriteOnly);
    dataStream << pixmap << QPoint(event->pos() - label->pos());
    QMimeData *mimeData = new QMimeData();
    mimeData->setData("application/x-dnditemdata", itemData);
    QDrag *drag = new QDrag(this);
    drag->setMimeData(mimeData);
    drag->setPixmap(pixmap);
    drag->setHotSpot(event->pos() - label->pos());
    QPoint pointAtual = event->pos();

    if(pointAtual.x() > ui->diagrama->geometry().x()
            && pointAtual.y() > ui->diagrama->geometry().y()
            && pointAtual.x() < ui->diagrama->width()) {
        label->close();
    }

    if (drag->exec(Qt::CopyAction | Qt::MoveAction, Qt::CopyAction) == Qt::MoveAction) {
        label->show();
        label->setPixmap(pixmap);
    }
}

void MainWindow::dragEnterEvent(QDragEnterEvent *event){
    // mensagem de debug
    qDebug()<<"MainWindow::dragEnterEvent(QDragEnterEvent *event)";

    if (event->mimeData()->hasFormat("application/x-dnditemdata")) {
        QPoint pointAtual = event->pos();
        if(pointAtual.x() > ui->diagrama->geometry().x()
                && pointAtual.y() > ui->diagrama->geometry().y()
                && pointAtual.x() < ui->diagrama->width()) {
            event->setDropAction(Qt::MoveAction);
            event->accept();
        }
    } else {
        event->ignore();
    }
}

void MainWindow::dragMoveEvent(QDragMoveEvent *event){
    // mensagem de debug
    qDebug()<<"MainWindow::dragMoveEvent(QDragMoveEvent *event)";

    if (event->mimeData()->hasFormat("application/x-dnditemdata")) {
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

void MainWindow::dropEvent(QDropEvent *event){
    //mensagem de debug
    qDebug()<<"MainWindow::dropEvent(QDropEvent *event)";

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
