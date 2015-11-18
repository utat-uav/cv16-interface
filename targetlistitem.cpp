#include "targetlistitem.h"

TargetListItem::TargetListItem(QTableWidgetItem *i, QTableWidgetItem *n, QTableWidgetItem *c, QTableWidgetItem *d, int x, int y)
{
    image = i;
    name = n;
    coord = c;
    desc = d;
    this->x = x;
    this->y = y;

    imageFilePath = "";
}

TargetListItem::~TargetListItem()
{
    delete image;
    delete name;
    delete coord;
    delete desc;
}
