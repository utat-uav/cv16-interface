#ifndef TARGETLISTWINDOW_H
#define TARGETLISTWINDOW_H

#include <QDialog>
#include "targetmaker.h"
#include "targetwindow.h"
#include "targetlist.h"
#include <QSettings>
#include <QPainter>
#include <QPixmap>
#include <QColor>
#include <QThread>

// LOADER THREAD
class Loader : public QThread
{
public:
    explicit Loader(TargetList *targetList, QString folderPath, QString filePath)
    {
        this->targetList = targetList;
        this->folderPath = folderPath;
        this->filePath = filePath;
    }
    void run();
private:
    TargetList *targetList;
    QString folderPath, filePath;
};

namespace Ui {
class TargetListWindow;
}

class TargetListWindow : public QDialog
{
    Q_OBJECT

public:
    explicit TargetListWindow(QWidget *parent = 0);
    Ui::TargetListWindow *ui ;
    TargetList *targetList;
    int colCount;
    ~TargetListWindow();
    void setMainPic (QString imagePath) ;
    void loadTargets (QString folderPath, QString filePath) ;

private slots:
    void on_newItem_clicked();

    void on_edit_clicked();

    void on_deleteButton_clicked();

    void on_upButton_clicked();

    void on_downButton_clicked();

    void sort(int col);

    void on_targetListTable_doubleClicked(const QModelIndex &index);

    void on_targetListTable_clicked(const QModelIndex &index);

private:
    //TargetMaker *targetMaker;
    TargetMaker *targetEditor;
    Loader *loader;
    QPixmap mainpic ;
    int mainPicWidth, mainPicHeight;
    QSettings *resultFile;
};

#endif // TARGETLISTWINDOW_H
