#ifndef TARGETLISTITEM_H
#define TARGETLISTITEM_H
#include <QTableWidgetItem>
#include <QLabel>
#include <QWidget>

class TargetListItem
{
public:
    TargetListItem(QTableWidgetItem *i, QTableWidgetItem *n, QTableWidgetItem *c, QTableWidgetItem *d, int x, int y);
    QString imageFilePath; //= "";
    QTableWidgetItem *image;
    QTableWidgetItem *name;
    QTableWidgetItem *coord;
    QTableWidgetItem *desc;
    int x, y;
    ~TargetListItem();
};

#endif // TARGETLISTITEM_H
