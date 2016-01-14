#ifndef TARGETWINDOW_H
#define TARGETWINDOW_H

#include <QDialog>
#include "targetlistitem.h"
#include <QProcess>

namespace Ui {
class TargetWindow;
}

class TargetWindow : public QDialog
{
    Q_OBJECT

public:
    explicit TargetWindow(QProcess *classifier, TargetListItem *targetListItem, QWidget *parent = 0);
    ~TargetWindow();

private slots:
    void on_testButton_clicked();

private:
    QProcess *classifier;
    Ui::TargetWindow *ui;
    TargetListItem *targetListItem;
};

#endif // TARGETWINDOW_H
