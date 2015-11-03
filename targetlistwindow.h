#ifndef TARGETLISTWINDOW_H
#define TARGETLISTWINDOW_H

#include <QMainWindow>
#include "targetmaker.h"
#include "targetlist.h"

namespace Ui {
class TargetListWindow;
}

class TargetListWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TargetListWindow(QWidget *parent = 0);
    Ui::TargetListWindow *ui ;
    TargetList *targetList;
    int colCount;
    ~TargetListWindow();

private slots:
    void on_newItem_clicked();

    void on_edit_clicked();

    void on_deleteButton_clicked();

    void on_upButton_clicked();

    void on_downButton_clicked();

    void sort(int col);

private:
    TargetMaker *targetMaker;
    TargetMaker *targetEditor;
};

#endif // TARGETLISTWINDOW_H
