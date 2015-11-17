#include "targetwindow.h"
#include "ui_targetwindow.h"

TargetWindow::TargetWindow(TargetListItem *targetListItem, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TargetWindow)
{
    this->targetListItem = targetListItem;
    ui->setupUi(this);

    // Set image
    QPixmap *pix = new QPixmap();
    QPixmap pic;
    pix->load(targetListItem->imageFilePath);
    pic = pix->scaled(280, 280, Qt::KeepAspectRatioByExpanding, Qt::FastTransformation) ;
    ui->targetPic->setPixmap(pic);
    delete pix;

    // Set all other information
    ui->nameLabel->setText(targetListItem->name->text());
    ui->coordinatesLabel->setText(targetListItem->coord->text());
    ui->description->setText(targetListItem->desc->text());
}

TargetWindow::~TargetWindow()
{
    delete ui;
}
