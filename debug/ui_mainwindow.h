/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCommandLinkButton *loadButton;
    QCommandLinkButton *editButton;
    QCommandLinkButton *deleteItemButton;
    QTableWidget *photoListTable;
    QMenuBar *menuBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mainpic;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout2;
    QCommandLinkButton *newItem;
    QCommandLinkButton *edit;
    QCommandLinkButton *deleteButton;
    QCommandLinkButton *upButton;
    QCommandLinkButton *downButton;
    QTableWidget *targetListTable;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1039, 575);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(1, -1, -1, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        loadButton = new QCommandLinkButton(centralWidget);
        loadButton->setObjectName(QStringLiteral("loadButton"));

        horizontalLayout->addWidget(loadButton);

        editButton = new QCommandLinkButton(centralWidget);
        editButton->setObjectName(QStringLiteral("editButton"));

        horizontalLayout->addWidget(editButton);

        deleteItemButton = new QCommandLinkButton(centralWidget);
        deleteItemButton->setObjectName(QStringLiteral("deleteItemButton"));

        horizontalLayout->addWidget(deleteItemButton);


        verticalLayout->addLayout(horizontalLayout);

        photoListTable = new QTableWidget(centralWidget);
        if (photoListTable->columnCount() < 4)
            photoListTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        photoListTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        photoListTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        photoListTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        photoListTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        photoListTable->setObjectName(QStringLiteral("photoListTable"));
        photoListTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        photoListTable->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        photoListTable->setShowGrid(false);
        photoListTable->horizontalHeader()->setVisible(false);
        photoListTable->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(photoListTable);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1039, 21));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout_4 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mainpic = new QLabel(dockWidgetContents);
        mainpic->setObjectName(QStringLiteral("mainpic"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainpic->sizePolicy().hasHeightForWidth());
        mainpic->setSizePolicy(sizePolicy);
        mainpic->setMinimumSize(QSize(450, 0));
        mainpic->setAutoFillBackground(true);
        mainpic->setFrameShape(QFrame::NoFrame);
        mainpic->setFrameShadow(QFrame::Sunken);
        mainpic->setLineWidth(1);
        mainpic->setMidLineWidth(0);
        mainpic->setScaledContents(false);
        mainpic->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(mainpic);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout2 = new QHBoxLayout();
        horizontalLayout2->setSpacing(0);
        horizontalLayout2->setObjectName(QStringLiteral("horizontalLayout2"));
        horizontalLayout2->setSizeConstraint(QLayout::SetNoConstraint);
        newItem = new QCommandLinkButton(dockWidgetContents);
        newItem->setObjectName(QStringLiteral("newItem"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(newItem->sizePolicy().hasHeightForWidth());
        newItem->setSizePolicy(sizePolicy1);
        newItem->setMinimumSize(QSize(100, 45));
        newItem->setMaximumSize(QSize(1677215, 16777215));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(9);
        newItem->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/round75.png"), QSize(), QIcon::Normal, QIcon::Off);
        newItem->setIcon(icon);
        newItem->setIconSize(QSize(30, 30));

        horizontalLayout2->addWidget(newItem);

        edit = new QCommandLinkButton(dockWidgetContents);
        edit->setObjectName(QStringLiteral("edit"));
        sizePolicy1.setHeightForWidth(edit->sizePolicy().hasHeightForWidth());
        edit->setSizePolicy(sizePolicy1);
        edit->setMinimumSize(QSize(100, 45));
        edit->setMaximumSize(QSize(1677215, 16777215));
        edit->setFont(font);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/clasic.png"), QSize(), QIcon::Normal, QIcon::Off);
        edit->setIcon(icon1);
        edit->setIconSize(QSize(30, 40));

        horizontalLayout2->addWidget(edit);

        deleteButton = new QCommandLinkButton(dockWidgetContents);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        sizePolicy1.setHeightForWidth(deleteButton->sizePolicy().hasHeightForWidth());
        deleteButton->setSizePolicy(sizePolicy1);
        deleteButton->setMinimumSize(QSize(100, 45));
        deleteButton->setMaximumSize(QSize(1677215, 16777215));
        deleteButton->setFont(font);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/delete85.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon2);
        deleteButton->setIconSize(QSize(30, 30));

        horizontalLayout2->addWidget(deleteButton);

        upButton = new QCommandLinkButton(dockWidgetContents);
        upButton->setObjectName(QStringLiteral("upButton"));
        sizePolicy1.setHeightForWidth(upButton->sizePolicy().hasHeightForWidth());
        upButton->setSizePolicy(sizePolicy1);
        upButton->setMinimumSize(QSize(100, 45));
        upButton->setMaximumSize(QSize(1677215, 16777215));
        upButton->setFont(font);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        upButton->setIcon(icon3);
        upButton->setIconSize(QSize(30, 30));

        horizontalLayout2->addWidget(upButton);

        downButton = new QCommandLinkButton(dockWidgetContents);
        downButton->setObjectName(QStringLiteral("downButton"));
        sizePolicy1.setHeightForWidth(downButton->sizePolicy().hasHeightForWidth());
        downButton->setSizePolicy(sizePolicy1);
        downButton->setMinimumSize(QSize(100, 45));
        downButton->setMaximumSize(QSize(1677215, 16777215));
        downButton->setFont(font);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        downButton->setIcon(icon4);
        downButton->setIconSize(QSize(30, 30));

        horizontalLayout2->addWidget(downButton);


        verticalLayout_3->addLayout(horizontalLayout2);

        targetListTable = new QTableWidget(dockWidgetContents);
        if (targetListTable->columnCount() < 4)
            targetListTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        targetListTable->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI"));
        font1.setPointSize(11);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font1);
        targetListTable->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font1);
        targetListTable->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font1);
        targetListTable->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        targetListTable->setObjectName(QStringLiteral("targetListTable"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(targetListTable->sizePolicy().hasHeightForWidth());
        targetListTable->setSizePolicy(sizePolicy2);
        targetListTable->setMinimumSize(QSize(50, 100));
        targetListTable->setMaximumSize(QSize(16777215, 16777215));
        QFont font2;
        font2.setPointSize(11);
        targetListTable->setFont(font2);
        targetListTable->setAlternatingRowColors(false);
        targetListTable->setSelectionMode(QAbstractItemView::ExtendedSelection);
        targetListTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        targetListTable->setIconSize(QSize(0, 0));
        targetListTable->setSortingEnabled(false);
        targetListTable->horizontalHeader()->setCascadingSectionResizes(false);
        targetListTable->horizontalHeader()->setHighlightSections(false);
        targetListTable->horizontalHeader()->setMinimumSectionSize(40);
        targetListTable->horizontalHeader()->setStretchLastSection(true);
        targetListTable->verticalHeader()->setVisible(false);
        targetListTable->verticalHeader()->setStretchLastSection(false);

        verticalLayout_3->addWidget(targetListTable);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_2);

        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        loadButton->setText(QApplication::translate("MainWindow", "Load From Folder", 0));
        editButton->setText(QApplication::translate("MainWindow", "Edit", 0));
        deleteItemButton->setText(QApplication::translate("MainWindow", "Delete", 0));
        mainpic->setText(QString());
#ifndef QT_NO_TOOLTIP
        newItem->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Shortcut: <span style=\" font-weight:600;\">ctrl+n</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        newItem->setText(QApplication::translate("MainWindow", "New Item", 0));
        newItem->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
#ifndef QT_NO_TOOLTIP
        edit->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Shortcut: <span style=\" font-weight:600;\">ctrl+e</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        edit->setText(QApplication::translate("MainWindow", "Edit", 0));
        edit->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Shortcut: <span style=\" font-weight:600;\">del</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QApplication::translate("MainWindow", "Delete", 0));
        deleteButton->setShortcut(QApplication::translate("MainWindow", "Del", 0));
#ifndef QT_NO_TOOLTIP
        upButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Shortcut: <span style=\" font-weight:600;\">Up Key</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        upButton->setText(QApplication::translate("MainWindow", "Up", 0));
        upButton->setShortcut(QApplication::translate("MainWindow", "Up", 0));
#ifndef QT_NO_TOOLTIP
        downButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Shortcut: <span style=\" font-weight:600;\">Down Key</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        downButton->setText(QApplication::translate("MainWindow", "Down", 0));
        downButton->setShortcut(QApplication::translate("MainWindow", "Down", 0));
        QTableWidgetItem *___qtablewidgetitem = targetListTable->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = targetListTable->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Coordinates", 0));
        QTableWidgetItem *___qtablewidgetitem2 = targetListTable->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Description", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
