#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QResizeEvent>
#include <QDebug>
#include <QThread>
#include <math.h>
#include <QItemSelectionModel>
#include <QModelIndexList>
#include <QtAlgorithms>
#include "itemmaker.h"
#include <QDirIterator>
#include <QtCore/QCoreApplication>
#include <QSettings>
#include <QTableWidget>
#include "targetlistwindow.h"

namespace Ui {
class MainWindow;
}
class ImageWidget ;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void addTab(QWidget* newTab, QString title) ;
    bool findTab (QWidget* tab) ;
    ~MainWindow();

private slots:
    void on_loadButton_clicked();

    void on_addItemButton_clicked();

    void on_editButton_clicked();

    void on_deleteItemButton_clicked();

    friend class MainLoader;

    void on_MainWindow_destroyed();

    void on_tabWidget_tabCloseRequested(int index);

protected:
    void resizeEvent(QResizeEvent *e);
    void resizeTable();
    void addItem(QString filePath);
    void appendItem(QString folderPath, QString filePath, QString imagePath, QString title, int numTargets);
    void refreshTable();
    void setColumnCount(int col);
    void indexToCoordinates(int index, int *r, int *c);


private:
    Ui::MainWindow *ui;
    QList<ImageWidget *> *items;
    int tableWidth;
    int cellHeight;
    int cellWidth;
    int rowCount;
    int colCount;
    bool noTabs ; //if no images are open or if all of them are closed
};

#endif // MAINWINDOW_H
