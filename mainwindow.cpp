#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Initializes variables
    cellWidth = 0;
    rowCount = 0;
    items = new QList<ImageWidget*>;

    // Sets number of columns
    setColumnCount(5);
}

void MainWindow::setColumnCount(int col) {
    colCount = col;
    ui->photoListTable->setColumnCount(colCount);
}

MainWindow::~MainWindow()
{
    delete items;
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent* e)
{
    resizeTable();
    QWidget::resizeEvent(e);
}

void MainWindow::resizeTable()
{
    // Gets table width
    tableWidth = ui->photoListTable->width()-19;

    // Calculates cell width based on table width and number of columns
    cellWidth = tableWidth/colCount;

    // Calculates cell height based on cell width
    cellHeight = cellWidth * 4/5 + 23;

    // Rethinks the number of columns
    if (tableWidth < 1150) {
        if (colCount != 4) {
            setColumnCount(4);
            refreshTable();
        }
    }
    else {
        if (colCount != 5) {
            setColumnCount(5);
            refreshTable();
        }
    }

    // Resizes each column
    for (int i = 0; i < colCount; i++) {
        ui->photoListTable->setColumnWidth(i, cellWidth);
    }

    // Resizes rows
    ui->photoListTable->verticalHeader()->setDefaultSectionSize(cellHeight);
}

void MainWindow::refreshTable()
{
    resizeTable();

    // Makes copy of the items
    QList<ImageWidget *> *itemsCopy = new QList<ImageWidget *>;
    for (int i = 0; i < items->size(); i++) {
        ImageWidget *temp = new ImageWidget();
        // Copy all information over
        temp->setImage(items->at(i)->image);
        temp->setTitle(items->at(i)->title);
        temp->setFilePath(items->at(i)->filePath);
        temp->setFolderPath(items->at(i)->folderPath);
        temp->imagePath = items->at(i)->imagePath;

        itemsCopy->append(temp);
    }

    // Clears table
    ui->photoListTable->clear();

    // Recalculates rowCount
    rowCount = ceil((double) items->size() / (double) colCount);
    ui->photoListTable->setRowCount(rowCount);

    // Calculate max col number on the last row
    int cMax = (itemsCopy->size() - (rowCount-1)*colCount) % (colCount+1);

    // Sets new table contents
    int itemCount = 0;
    for (int r = 0; r < rowCount; r++) {

        for (int c = 0; c < colCount; c++) {
            if (!(r == rowCount-1 && c == cMax)) { // ends if the end of the list is hit
                items->replace(itemCount, itemsCopy->at(itemCount));

                // Sets the widget
                ui->photoListTable->setCellWidget(r, c, items->at(itemCount));

                itemCount++;
            }
            else{
                break;
            }
        }

        // Disables extra spaces
        if (r == rowCount-1) {
            for (int c = cMax; c < colCount; c++) {
                ui->photoListTable->setItem(r, c, new QTableWidgetItem());
                ui->photoListTable->item(r, c)->setFlags(Qt::ItemIsSelectable);
            }
        }
    }

    delete itemsCopy;
}

void MainWindow::appendItem(QString folderPath, QString filePath, QString imagePath, QString title)
{
    // Creates item
    ImageWidget *newWidget = new ImageWidget();
    newWidget->setTitle(title);
    newWidget->setImage(imagePath);
    newWidget->setFilePath(filePath) ;
    newWidget->setFolderPath(folderPath) ;

    items->append(newWidget);
}

void MainWindow::indexToCoordinates(int index, int *r, int *c)
{
    // Row index
    *r = ceil((double) (index+1) / (double) colCount) - 1;

    // Column index
    *c = ((index+1) - *r*colCount) % (colCount+1) - 1;
}

void MainWindow::on_loadButton_clicked()
{
    // Gets the directory from a separate window
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"), "/home", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    // Create filter
    QStringList nameFilter;
    nameFilter.append("*.ini");

    // Scans through directory, applying the filter
    QDir directory(dir);
    QStringList fileList = directory.entryList(nameFilter);

    // Goes through each file and opening the image
    foreach ( QString file, fileList){
        QString filePath = dir+"/"+file ;
        QSettings resultFile(filePath,QSettings::IniFormat);
        QString imagePath = resultFile.value("Analysis Parameters/IMAGE","").toString() ; //pass directory to image widget
        if ( imagePath != "" ){
            appendItem(dir, filePath, dir+"/"+imagePath, imagePath);
        }
    }

    /*nameFilter.append("*.png");
    nameFilter.append("*.jpg");

    // Scans through directory, applying the filter
    QDir directory(dir);
    QStringList fileList = directory.entryList(nameFilter);
    foreach (QString filePath, fileList) {
        appendItem(dir+"/"+filePath, filePath);
    }*/

    refreshTable();
}



void MainWindow::on_addItemButton_clicked()
{
    //addItem("");
}

void MainWindow::on_editButton_clicked()
{
    QItemSelectionModel *select = ui->photoListTable->selectionModel();
    QModelIndexList selected = select->selectedIndexes();

    if (select->hasSelection() && selected.length() == 1) {
        // Gets the selected index
        QList<QModelIndex>::iterator i = selected.begin();
        int selectedIndex = (i->row())*colCount + i->column();

        // Makes an edit dialog
        ItemMaker *editDialog = new ItemMaker();
        editDialog->setModal(true);
        editDialog->setWindowTitle("Edit");

        // Sets initial information
        editDialog->setTitle(items->at(selectedIndex)->title);
        editDialog->setFilePath(items->at(selectedIndex)->imagePath);

        // Starts the dialog
        editDialog->exec();

        // If okay was pressed in the edit dialog
        if (editDialog->accepted) {
            // Gets information from edit dialog
            QString title = editDialog->getTitle();
            QString filePath = editDialog->getFilePath();

            // Sets item information
            items->at(selectedIndex)->setTitle(title);
            items->at(selectedIndex)->setImage(filePath);
        }

        delete editDialog;
    }
}

void MainWindow::on_deleteItemButton_clicked()
{
    QItemSelectionModel *select = ui->photoListTable->selectionModel();
    QModelIndexList selected = select->selectedIndexes();
    QList<int> deletionOrder;

    if (select->hasSelection()) {
        // Makes sure everything is deleted in the correct order
        for (QList<QModelIndex>::iterator i = selected.begin(); i != selected.end(); i++) {
            int index = (i->row()) * colCount + i->column();
            deletionOrder.append(index);
        }
        // Sorts into descending order
        qSort(deletionOrder.begin(), deletionOrder.end(), qGreater<int>());

        // Deletes items in the table
        for (int i = 0; i < deletionOrder.length(); i++) {
            int index = deletionOrder.at(i);
            items->removeAt(index);
        }

        // Clears selection
        ui->photoListTable->selectionModel()->clearSelection();

        refreshTable();
    }
}
