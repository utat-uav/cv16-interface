#include "imagewidget.h"
#include "ui_imagewidget.h"

ImageWidget::ImageWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ImageWidget)
{
    imagePath = "";
    title = "";
    ui->setupUi(this);

    // Initialize imageLabel
    //setImage(":/images/Untitled.png");

    //ui->imageLabel->setScaledContents(true);
    ui->imageLabel->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );

    targetList = new TargetListWindow();
    targetListInitialized = false;
}

ImageWidget::~ImageWidget()
{
    delete targetList;
    delete ui;
}

void ImageWidget::setTitle(QString name)
{
    ui->imageCaption->setText(name);
    title = name;
}

void ImageWidget::setFolderPath(QString folderPath){
    this->folderPath = folderPath ;
}

void ImageWidget::setFilePath(QString filePath){
    this->filePath = filePath ;
}

void ImageWidget::setImage(QString imagePath)
{
    if (imagePath != "") {
        QPixmap *pix = new QPixmap();
        pix->load(imagePath);
        image = pix->scaled(240, 240, Qt::KeepAspectRatioByExpanding, Qt::FastTransformation);
        ui->imageLabel->setPixmap(image);
        this->imagePath = imagePath;
        delete pix;
    }
}

void ImageWidget::setImage(QPixmap resizedImage)
{
    ui->imageLabel->setPixmap(resizedImage);
    image = resizedImage;
}

void ImageWidget::mouseDoubleClickEvent(QMouseEvent *event){
    if ( event->button() == Qt::LeftButton ){
        if (!targetListInitialized) {
            targetList->setModal(false);
            targetList->setWindowTitle(title);
            targetList->setMainPic(imagePath);
            targetList->loadTargets(folderPath, filePath) ;
            targetListInitialized = true;
        }
        targetList->show();
    }
}
