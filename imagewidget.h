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

    // Setters
    void setTitle(QString name);
    void setImage(QString imagePath);
    void setImage(QPixmap resizedImage);
    void setFolderPath(QString folderPath) ;
    void setFilePath(QString filePath) ;
    void setImagePath(QString imagePath);
    void setNumTargets(int numTargets);
    void setSeen(bool seen);

    // Getters
    QString getTitle() const;
    QString getImagePath() const;
    QPixmap getImage() const;
    QString getFolderPath() const;
    QString getFilePath() const;
    TargetListWindow* getTargetList() const;
    int getNumTargets() const;
    bool isInitialized() const;
    bool getSeen() const;

    void deleteTargetListWindow();

    void changeTargetListWindow(TargetListWindow* targetList, bool alreadyInitialized = true);

    ~ImageWidget();

protected:
    void mouseDoubleClickEvent(QMouseEvent *event);
    QString title;
    int numTargets;
    QString filePath ;
    QString imagePath;
    QString folderPath ;
    QPixmap image;
    TargetListWindow *targetList;
    bool targetListInitialized;
    bool seen;

private:
    Ui::ImageWidget *ui;
};

#endif // IMAGEWIDGET_H
