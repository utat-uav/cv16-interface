#include "targetlistwindow.h"
#include "ui_targetlistwindow.h"

TargetListWindow::TargetListWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TargetListWindow)
{
    colCount = 5;
    ui->setupUi(this);
    targetList = new TargetList(ui->targetListTable);
    connect(ui->targetListTable->horizontalHeader(), SIGNAL(sectionClicked(int)),
         this, SLOT(sort(int)));

    // Set row size
    ui->targetListTable->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);
    ui->targetListTable->horizontalHeader()->setDefaultSectionSize(150);
    ui->targetListTable->horizontalHeader()->setMinimumSectionSize(100);
    ui->targetListTable->verticalHeader()->setDefaultSectionSize(100);
    //ui->targetListTable->setStyleSheet("QTableWidget {selection-background-color: #00000000; selection-color: white}");
}

TargetListWindow::~TargetListWindow()
{
    delete ui;
}

void TargetListWindow::on_newItem_clicked()
{
    TargetMaker* targetMaker = new TargetMaker(this);
    targetMaker->setModal(true);
    targetMaker->setWindowTitle("Create New Target");
    targetMaker->exec();
    if (targetMaker->accepted) {
        targetList->addNewRow(targetMaker->getImageFilePath(), targetMaker->getName(), targetMaker->getCoord(), targetMaker->getDesc());
    }
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
        targetEditor->defaultFileInput = targetList->rows->at(selectedRow)->imageFilePath;
        targetEditor->defaultNameInput = targetList->rows->at(selectedRow)->name->text();
        targetEditor->defaultCoordInput = targetList->rows->at(selectedRow)->coord->text();
        targetEditor->defaultDescInput = targetList->rows->at(selectedRow)->desc->text();
        targetEditor->setDefaultInputs();

        // Opens edit window
        targetEditor->exec();

        if (targetEditor->accepted) {
            targetList->editRow(selectedRow, targetEditor->getImageFilePath(), targetEditor->getName(), targetEditor->getCoord(), targetEditor->getDesc());
        }
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
        if (moveOrder[0] != targetList->rows->length()-1) {
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
        targetList->sortName(0, targetList->rows->length()-1);
        targetList->refreshTable();
    }
}

void TargetListWindow::setMainPic (QString imagePath) {
    if (imagePath != "") {
        QPixmap *pix = new QPixmap();
        pix->load(imagePath);
        mainpic = pix->scaled(381, 381, Qt::KeepAspectRatioByExpanding, Qt::FastTransformation) ;
        ui->mainpic->setPixmap(mainpic);
    }
}

void TargetListWindow::loadTargets(QString folderPath, QString filePath){
    QSettings resultFile(filePath,QSettings::IniFormat);
    for ( int i = 1 ; i <= resultFile.value("Crop Info/Number of Crops").toInt() ; i ++ ){
        QString imagePath = resultFile.value("Crop "+QString::number(i)+"/Image Name").toString() ;
        QString name = imagePath ;
        QString coord = resultFile.value("Crop "+QString::number(i)+"/X").toString()+", "+resultFile.value("Crop "+QString::number(i)+"/Y").toString() ;
        QString desc = "" ;
        targetList->addNewRow(folderPath+"/"+imagePath,name,coord,desc) ;
    }
}
