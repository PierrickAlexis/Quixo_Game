#include "monaffichage.h"
#include "ui_monaffichage.h"
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QPixmap>

monaffichage::monaffichage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::monaffichage)
{
    ui->setupUi(this);

    QGraphicsScene * ma_scene;
    ma_scene = new QGraphicsScene();
    QGraphicsPixmapItem * mon_item;
    mon_item = new QGraphicsPixmapItem();
    QPixmap * mon_image = new QPixmap(":neutre.jpg");
    mon_item->setPixmap(* mon_image);

    ma_scene->addItem(mon_item);
    ui->ma_vue->setScene(ma_scene);

}

monaffichage::~monaffichage()
{
    delete ui;
}
