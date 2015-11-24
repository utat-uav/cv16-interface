#include "imagewidget.h"
#include "ui_imagewidget.h"

ImageWidget::ImageWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ImageWidget)
{
    imagePath = "";
    title = "";
    ui->setupUi(this);

    this->seen = false;

    // Initialize imageLabel
    //setImage(":/images/Untitled.png");

    //ui->imageLabel->setScaledContents(true);
    //ui->imageLabel->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );

    targetList = new TargetListWindow();
    targetListInitialized = false;

    ui->colourLabel->setStyleSheet("QLabel { background-color : yellow; color : blue; }");
}

ImageWidget::~ImageWidget()
{
    delete targetList;
    delete ui;
}

QString ImageWidget::getTitle() const
{
    return this->title;
}

int ImageWidget::getNumTargets() const
{
    return this->numTargets;
}

QString ImageWidget::getImagePath() const
{
    return this->imagePath;
}

QPixmap ImageWidget::getImage() const
{
    return this->image;
}

QString ImageWidget::getFolderPath() const
{
    return this->folderPath;
}

QString ImageWidget::getFilePath() const
{
    return this->filePath;
}

void ImageWidget::setTitle(QString name)
{
    ui->imageCaption->setText(name);
    title = name;
}

void ImageWidget::setSeen(bool seen)
{
    if (seen)
        ui->colourLabel->setStyleSheet("QLabel { background-color : green; color : blue; }");
    else
        ui->colourLabel->setStyleSheet("QLabel { background-color : yellow; color : blue; }");
    this->seen = seen;
}

void ImageWidget::setFolderPath(QString folderPath){
    this->folderPath = folderPath ;
}

void ImageWidget::setFilePath(QString filePath){
    this->filePath = filePath ;
}

void ImageWidget::setImagePath(QString imagePath)
{
    this->imagePath = imagePath;
}

void ImageWidget::setNumTargets(int numTargets)
{
    QString s = QString::number(numTargets);
    QString numTargetsString = s + " targets";
    this->ui->numTargetDisplay->setText(numTargetsString);
    this->numTargets = numTargets;
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

bool ImageWidget::isInitialized() const
{
    return this->targetListInitialized;
}

void ImageWidget::deleteTargetListWindow()
{
    delete this->targetList;
}

bool ImageWidget::getSeen() const
{
    return this->seen;
}

void ImageWidget::changeTargetListWindow(TargetListWindow* targetList, bool alreadyInitialized)
{
    this->targetList = targetList;
    this->targetListInitialized = alreadyInitialized;
}

TargetListWindow* ImageWidget::getTargetList() const
{
    return this->targetList;
}

void ImageWidget::mouseDoubleClickEvent(QMouseEvent *event){
    if ( event->button() == Qt::LeftButton ){
        ui->colourLabel->setStyleSheet("QLabel { background-color : green; color : blue; }"); // Mark as seen
        this->seen = true;
        if (!targetListInitialized) {
            targetList->setWindowFlags(Qt::Window);
            targetList->setModal(false);
            targetList->setWindowTitle(title);
            targetList->setMainPic(imagePath);
            targetList->loadTargets(folderPath, filePath) ;
            targetListInitialized = true;
        }
        targetList->show();
    }
}
