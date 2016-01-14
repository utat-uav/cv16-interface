/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
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
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_2;
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_5;
    QWidget *tab_2;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *consoleOutput;
    QLineEdit *consoleCommander;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1200, 800);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
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
        loadButton->setAutoFillBackground(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/round75.png"), QSize(), QIcon::Normal, QIcon::Off);
        loadButton->setIcon(icon);

        horizontalLayout->addWidget(loadButton);

        editButton = new QCommandLinkButton(centralWidget);
        editButton->setObjectName(QStringLiteral("editButton"));
        editButton->setAutoFillBackground(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/clasic.png"), QSize(), QIcon::Normal, QIcon::Off);
        editButton->setIcon(icon1);

        horizontalLayout->addWidget(editButton);

        deleteItemButton = new QCommandLinkButton(centralWidget);
        deleteItemButton->setObjectName(QStringLiteral("deleteItemButton"));
        deleteItemButton->setAutoFillBackground(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/delete85.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteItemButton->setIcon(icon2);

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
        menuBar->setGeometry(QRect(0, 0, 1200, 21));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockWidget_2 = new QDockWidget(MainWindow);
        dockWidget_2->setObjectName(QStringLiteral("dockWidget_2"));
        dockWidget_2->setMinimumSize(QSize(397, 400));
        dockWidget_2->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        horizontalLayout_2 = new QHBoxLayout(dockWidgetContents_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tabWidget = new QTabWidget(dockWidgetContents_2);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_5 = new QVBoxLayout(tab);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        horizontalLayout_2->addWidget(tabWidget);

        dockWidget_2->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget_2);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidget->setMinimumSize(QSize(300, 137));
        dockWidget->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        consoleOutput = new QTextBrowser(dockWidgetContents);
        consoleOutput->setObjectName(QStringLiteral("consoleOutput"));
        consoleOutput->setMinimumSize(QSize(0, 0));
        consoleOutput->setMaximumSize(QSize(230535, 16777215));

        verticalLayout_3->addWidget(consoleOutput);

        consoleCommander = new QLineEdit(dockWidgetContents);
        consoleCommander->setObjectName(QStringLiteral("consoleCommander"));

        verticalLayout_3->addWidget(consoleCommander);

        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "CV Interface", 0));
        loadButton->setText(QApplication::translate("MainWindow", "Load From Folder", 0));
        editButton->setText(QApplication::translate("MainWindow", "Edit", 0));
        deleteItemButton->setText(QApplication::translate("MainWindow", "Delete", 0));
        dockWidget_2->setWindowTitle(QApplication::translate("MainWindow", "Target Lists", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", 0));
        dockWidget->setWindowTitle(QApplication::translate("MainWindow", "Classifier Console", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
