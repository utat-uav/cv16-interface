#ifndef IMAGEWIDGET_H
#define IMAGEWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QPixmap>
#include <QSize>
#include "targetlistwindow.h"
#include <QMouseEvent>

namespace Ui {
class ImageWidget;
}

class ImageWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ImageWidget(QWidget *parent = 0);
    QString title;
    QString filePath ;
    QString imagePath;
    QString folderPath ;
    QPixmap image;
    void setTitle(QString name);
    void setImage(QString imagePath);
    void setImage(QPixmap resizedImage);
    void setFolderPath(QString folderPath) ;
    void setFilePath(QString filePath) ;
    ~ImageWidget();
    TargetListWindow *targetList;

protected:
    void mouseDoubleClickEvent(QMouseEvent *event);

private:
    Ui::ImageWidget *ui;
    bool targetListInitialized;
};

#endif // IMAGEWIDGET_H
