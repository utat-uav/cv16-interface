#ifndef TARGETWINDOW_H
#define TARGETWINDOW_H

#include <QDialog>
#include "targetlistitem.h"

namespace Ui {
class TargetWindow;
}

class TargetWindow : public QDialog
{
    Q_OBJECT

public:
    explicit TargetWindow(TargetListItem *targetListItem, QWidget *parent = 0);
    ~TargetWindow();

private:
    Ui::TargetWindow *ui;
    TargetListItem *targetListItem;
};

#endif // TARGETWINDOW_H
