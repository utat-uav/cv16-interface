#include "targetlistwindow.h"
#include "ui_targetlistwindow.h"

TargetListWindow::TargetListWindow(QProcess *classifier, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TargetListWindow)
{
    this->loader = NULL;

    colCount = 5;
    ui->setupUi(this);
    targetList = new TargetList(ui->targetListTable);
    connect(ui->targetListTable->horizontalHeader(), SIGNAL(sectionClicked(int)),
         this, SLOT(sort(int)));

    mainPicWidth = 0;
    mainPicHeight = 0;

    resultFile = NULL;

    this->classifier = classifier;

    // Set row size
    ui->targetListTable->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);
    ui->targetListTable->horizontalHeader()->setDefaultSectionSize(100);
    ui->targetListTable->horizontalHeader()->setMinimumSectionSize(100);
    ui->targetListTable->verticalHeader()->setDefaultSectionSize(100);
    //ui->targetListTable->setStyleSheet("QTableWidget {selection-background-color: #00000000; selection-color: white}");
}

TargetListWindow::~TargetListWindow()
{
    if (loader != 0 && loader->isRunning()) {
        loader->requestInterruption();
        loader->wait();
    }

    delete ui;
    delete targetList;
    delete resultFile;
}

void TargetListWindow::on_newItem_clicked()
{
    TargetMaker* targetMaker = new TargetMaker(this);
    targetMaker->setModal(true);
    targetMaker->setWindowTitle("Create New Target");
    targetMaker->exec();
    if (targetMaker->getAccepted()) {
        targetList->addNewRow(targetMaker->getImageFilePath(), targetMaker->getName(), targetMaker->getCoord(), targetMaker->getDesc(), 0, 0);
    }
    delete targetMaker;
}

void TargetListWindow::on_edit_clicked()
{
    QItemSelectionModel *select = ui->targetListTable->selectionModel();
    QModelIndexList selectedRows = select->selectedRows();

    if (select->hasSelection() && selectedRows.length() == 1) { // only 1 item can be selected
        QList<QModelIndex>::iterator i = selectedRows.begin();
        int selectedRow = i->row(); // gets the selected row number

        // Creates edit window
        targetEditor = new TargetMaker(this);
        targetEditor->setModal(true);
        targetEditor->setWindowTitle("Edit Target");

        // Sets default values
        targetEditor->setDefaultFileInput(targetList->getRows()->at(selectedRow)->imageFilePath);
        targetEditor->setDefaultNameInput(targetList->getRows()->at(selectedRow)->name->text());
        targetEditor->setDefaultCoordInput(targetList->getRows()->at(selectedRow)->coord->text());
        targetEditor->setDefaultDescInput(targetList->getRows()->at(selectedRow)->desc->text());
        targetEditor->setDefaultInputs();

        // Opens edit window
        targetEditor->exec();

        if (targetEditor->getAccepted()) {
            targetList->editRow(selectedRow, targetEditor->getImageFilePath(), targetEditor->getName(), targetEditor->getCoord(), targetEditor->getDesc());
        }

        delete targetEditor;
    }
}

void TargetListWindow::on_deleteButton_clicked()
{
    QItemSelectionModel *select = ui->targetListTable->selectionModel();
    QModelIndexList selectedRows = select->selectedRows();
    QList<int> deletionOrder;

    if (select->hasSelection()) {
        // Makes sure everything is deleted in the correct order
        for (QList<QModelIndex>::iterator i = selectedRows.begin(); i != selectedRows.end(); i++) {
            deletionOrder.append(i->row());
        }
        qSort(deletionOrder.begin(), deletionOrder.end());

        for (int i = 0, decrement = 0; i < deletionOrder.length(); i++, decrement++) {
            targetList->deleteRow(deletionOrder[i] - decrement);
        }
        ui->targetListTable->selectionModel()->clearSelection(); // Deselects all rows
    }
}

void TargetListWindow::on_upButton_clicked()
{
    QItemSelectionModel *select = ui->targetListTable->selectionModel();
    QModelIndexList selectedRows = select->selectedRows();
    QList<int> moveOrder;

    if (select->hasSelection()) {
        // Makes sure everything is moved in the correct order
        for (QList<QModelIndex>::iterator i = selectedRows.begin(); i != selectedRows.end(); i++) {
            moveOrder.append(i->row());
        }
        qSort(moveOrder.begin(), moveOrder.end());

        ui->targetListTable->selectionModel()->clearSelection(); // Deselects all rows
        QItemSelection selectedItems = ui->targetListTable->selectionModel()->selection();
        if (moveOrder[0] != 0) {
            for (int i = 0; i < moveOrder.length(); i++) {
                ui->targetListTable->selectRow(moveOrder[i]-1);
                selectedItems.merge(ui->targetListTable->selectionModel()->selection(), QItemSelectionModel::Select);

                targetList->moveUp(moveOrder[i]);
            }
            ui->targetListTable->selectionModel()->select(selectedItems, QItemSelectionModel::Select); // Reselects new rows
        }
    }
}

void TargetListWindow::on_downButton_clicked()
{
    QItemSelectionModel *select = ui->targetListTable->selectionModel();
    QModelIndexList selectedRows = select->selectedRows();
    QList<int> moveOrder;

    if (select->hasSelection()) {
        // Makes sure everything is moved in the correct order
        for (QList<QModelIndex>::iterator i = selectedRows.begin(); i != selectedRows.end(); i++) {
            moveOrder.append(i->row());
        }
        qSort(moveOrder.begin(), moveOrder.end(), qGreater<int>());

        ui->targetListTable->selectionModel()->clearSelection(); // Deselects all rows
        QItemSelection selectedItems = ui->targetListTable->selectionModel()->selection();
        if (moveOrder[0] != targetList->getRows()->length()-1) {
            for (int i = 0; i < moveOrder.length(); i++) {
                ui->targetListTable->selectRow(moveOrder[i]+1);
                selectedItems.merge(ui->targetListTable->selectionModel()->selection(), QItemSelectionModel::Select);

                targetList->moveDown(moveOrder[i]);
            }
            ui->targetListTable->selectionModel()->select(selectedItems, QItemSelectionModel::Select); // Reselects new rows
        }
    }
}

void TargetListWindow::sort(int col)
{
    if (col == 1) {
        targetList->sortName(0, targetList->getRows()->length()-1);
        targetList->refreshTable();
    }
}

void TargetListWindow::setMainPic (QString imagePath) {
    if (imagePath != "") {
        QPixmap pix;
        pix.load(imagePath);
        mainpic = pix.scaled(381, 381, Qt::KeepAspectRatioByExpanding, Qt::FastTransformation) ;
        ui->mainpic->setPixmap(mainpic);
    }
}

void TargetListWindow::loadTargets(QString folderPath, QString filePath){
    // Starts a new thread to load it
    loader = new Loader(targetList, folderPath, filePath);
    loader->start();

    // Get height
    resultFile = new QSettings(filePath, QSettings::IniFormat);
    mainPicWidth = resultFile->value("Analysis Parameters/Width").toInt();
    mainPicHeight = resultFile->value("Analysis Parameters/Height").toInt();

    //connect(loader, SIGNAL(finished()), loader, SLOT(deleteLater()));
}

void Loader::run()
{
    QSettings resultFile(filePath, QSettings::IniFormat);
    for ( int i = 1 ; i <= resultFile.value("Crop Info/Number of Crops").toInt() ; i ++ ){
        if (!this->isInterruptionRequested()) {
            QString imagePath = resultFile.value("Crop "+QString::number(i)+"/Image Name").toString() ;
            QString name = imagePath ;
            QString coord = resultFile.value("Crop "+QString::number(i)+"/X").toString()+", "+resultFile.value("Crop "+QString::number(i)+"/Y").toString() ;
            int x = resultFile.value("Crop "+QString::number(i)+"/X").toInt();
            int y = resultFile.value("Crop "+QString::number(i)+"/Y").toInt();
            QString desc = "" ;
            try {
                targetList->addNewRow(folderPath+"/"+imagePath,name,coord,desc, x, y);
            }
            catch (std::exception& e) {
                return;
            }
        }
    }

    if (!this->isInterruptionRequested()) {
        try {
            targetList->refreshTable();
        }
        catch (std::exception& e) {
            return;
        }
    }
}

void TargetListWindow::on_targetListTable_doubleClicked(const QModelIndex &index)
{
    int rowNum = index.row();
    TargetWindow *targetWindow = new TargetWindow(classifier, targetList->getRows()->at(rowNum), this);
    targetWindow->setModal(true);
    targetWindow->setWindowTitle("Target");

    // Opens edit window
    targetWindow->exec();
    delete targetWindow;
}

void TargetListWindow::on_targetListTable_clicked(const QModelIndex &index)
{
    int rowNum = index.row();
    TargetListItem* rowItem = targetList->getRows()->at(rowNum);
    int x = rowItem->x;
    int y = rowItem->y;

    QPixmap pixmap;
    QPainter painter;
    QPen white(Qt::white);

    pixmap = this->mainpic;
    painter.begin(&pixmap);
    painter.setPen(white);

    // Draw Box around target
    QRect rect;
    int boxSize = pixmap.width()/15;
    rect.setX((double) x/mainPicWidth*pixmap.width()-boxSize/2);
    rect.setY((double) y/mainPicHeight*pixmap.height()-boxSize/2);
    rect.setHeight(boxSize);
    rect.setWidth(boxSize);
    painter.drawRect(rect);
    painter.end();
    ui->mainpic->setPixmap(pixmap);
}
