/********************************************************************************
** Form generated from reading UI file 'targetlistwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TARGETLISTWINDOW_H
#define UI_TARGETLISTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include "targetlistwindow.h"

QT_BEGIN_NAMESPACE

class Ui_TargetListWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    CustomLabel *mainpic;
    QTextBrowser *locationText;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout2;
    QCommandLinkButton *newItem;
    QCommandLinkButton *edit;
    QCommandLinkButton *deleteButton;
    QCommandLinkButton *upButton;
    QCommandLinkButton *downButton;
    QTableWidget *targetListTable;

    void setupUi(QDialog *TargetListWindow)
    {
        if (TargetListWindow->objectName().isEmpty())
            TargetListWindow->setObjectName(QStringLiteral("TargetListWindow"));
        TargetListWindow->resize(839, 347);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TargetListWindow->sizePolicy().hasHeightForWidth());
        TargetListWindow->setSizePolicy(sizePolicy);
        TargetListWindow->setSizeGripEnabled(true);
        TargetListWindow->setModal(true);
        verticalLayout_2 = new QVBoxLayout(TargetListWindow);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, -1, -1, -1);
        mainpic = new CustomLabel(TargetListWindow);
        mainpic->setObjectName(QStringLiteral("mainpic"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mainpic->sizePolicy().hasHeightForWidth());
        mainpic->setSizePolicy(sizePolicy1);
        mainpic->setMinimumSize(QSize(350, 200));
        mainpic->setAutoFillBackground(true);
        mainpic->setFrameShape(QFrame::NoFrame);
        mainpic->setFrameShadow(QFrame::Sunken);
        mainpic->setLineWidth(1);
        mainpic->setMidLineWidth(0);
        mainpic->setScaledContents(true);
        mainpic->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(mainpic);

        locationText = new QTextBrowser(TargetListWindow);
        locationText->setObjectName(QStringLiteral("locationText"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(locationText->sizePolicy().hasHeightForWidth());
        locationText->setSizePolicy(sizePolicy2);
        locationText->setMaximumSize(QSize(16777215, 37));
        QFont font;
        font.setPointSize(8);
        locationText->setFont(font);
        locationText->setAutoFillBackground(false);

        verticalLayout_4->addWidget(locationText);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout2 = new QHBoxLayout();
        horizontalLayout2->setSpacing(0);
        horizontalLayout2->setObjectName(QStringLiteral("horizontalLayout2"));
        horizontalLayout2->setSizeConstraint(QLayout::SetNoConstraint);
        newItem = new QCommandLinkButton(TargetListWindow);
        newItem->setObjectName(QStringLiteral("newItem"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(newItem->sizePolicy().hasHeightForWidth());
        newItem->setSizePolicy(sizePolicy3);
        newItem->setMinimumSize(QSize(1, 45));
        newItem->setMaximumSize(QSize(1, 16777215));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI"));
        font1.setPointSize(9);
        newItem->setFont(font1);
        QIcon icon;
        icon.addFile(QStringLiteral(":/round75.png"), QSize(), QIcon::Normal, QIcon::Off);
        newItem->setIcon(icon);
        newItem->setIconSize(QSize(30, 30));

        horizontalLayout2->addWidget(newItem);

        edit = new QCommandLinkButton(TargetListWindow);
        edit->setObjectName(QStringLiteral("edit"));
        sizePolicy3.setHeightForWidth(edit->sizePolicy().hasHeightForWidth());
        edit->setSizePolicy(sizePolicy3);
        edit->setMinimumSize(QSize(100, 45));
        edit->setMaximumSize(QSize(1677215, 16777215));
        edit->setFont(font1);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/clasic.png"), QSize(), QIcon::Normal, QIcon::Off);
        edit->setIcon(icon1);
        edit->setIconSize(QSize(30, 40));

        horizontalLayout2->addWidget(edit);

        deleteButton = new QCommandLinkButton(TargetListWindow);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        sizePolicy3.setHeightForWidth(deleteButton->sizePolicy().hasHeightForWidth());
        deleteButton->setSizePolicy(sizePolicy3);
        deleteButton->setMinimumSize(QSize(100, 45));
        deleteButton->setMaximumSize(QSize(1677215, 16777215));
        deleteButton->setFont(font1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/delete85.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon2);
        deleteButton->setIconSize(QSize(30, 30));

        horizontalLayout2->addWidget(deleteButton);

        upButton = new QCommandLinkButton(TargetListWindow);
        upButton->setObjectName(QStringLiteral("upButton"));
        sizePolicy3.setHeightForWidth(upButton->sizePolicy().hasHeightForWidth());
        upButton->setSizePolicy(sizePolicy3);
        upButton->setMinimumSize(QSize(100, 45));
        upButton->setMaximumSize(QSize(1677215, 16777215));
        upButton->setFont(font1);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        upButton->setIcon(icon3);
        upButton->setIconSize(QSize(30, 30));

        horizontalLayout2->addWidget(upButton);

        downButton = new QCommandLinkButton(TargetListWindow);
        downButton->setObjectName(QStringLiteral("downButton"));
        sizePolicy3.setHeightForWidth(downButton->sizePolicy().hasHeightForWidth());
        downButton->setSizePolicy(sizePolicy3);
        downButton->setMinimumSize(QSize(100, 45));
        downButton->setMaximumSize(QSize(1677215, 16777215));
        downButton->setFont(font1);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        downButton->setIcon(icon4);
        downButton->setIconSize(QSize(30, 30));

        horizontalLayout2->addWidget(downButton);


        verticalLayout->addLayout(horizontalLayout2);

        targetListTable = new QTableWidget(TargetListWindow);
        if (targetListTable->columnCount() < 4)
            targetListTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        targetListTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe UI"));
        font2.setPointSize(11);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font2);
        targetListTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font2);
        targetListTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font2);
        targetListTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        targetListTable->setObjectName(QStringLiteral("targetListTable"));
        sizePolicy1.setHeightForWidth(targetListTable->sizePolicy().hasHeightForWidth());
        targetListTable->setSizePolicy(sizePolicy1);
        targetListTable->setMinimumSize(QSize(50, 100));
        targetListTable->setMaximumSize(QSize(16777215, 16777215));
        QFont font3;
        font3.setPointSize(11);
        targetListTable->setFont(font3);
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

        verticalLayout->addWidget(targetListTable);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(TargetListWindow);

        QMetaObject::connectSlotsByName(TargetListWindow);
    } // setupUi

    void retranslateUi(QDialog *TargetListWindow)
    {
        TargetListWindow->setWindowTitle(QApplication::translate("TargetListWindow", "MainWindow", 0));
        mainpic->setText(QString());
        locationText->setHtml(QApplication::translate("TargetListWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8.25pt;\">Default Text</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        newItem->setToolTip(QApplication::translate("TargetListWindow", "<html><head/><body><p>Shortcut: <span style=\" font-weight:600;\">ctrl+n</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        newItem->setText(QApplication::translate("TargetListWindow", "New Item", 0));
        newItem->setShortcut(QApplication::translate("TargetListWindow", "Ctrl+N", 0));
#ifndef QT_NO_TOOLTIP
        edit->setToolTip(QApplication::translate("TargetListWindow", "<html><head/><body><p>Shortcut: <span style=\" font-weight:600;\">ctrl+e</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        edit->setText(QApplication::translate("TargetListWindow", "Edit", 0));
        edit->setShortcut(QApplication::translate("TargetListWindow", "Ctrl+E", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("TargetListWindow", "<html><head/><body><p>Shortcut: <span style=\" font-weight:600;\">del</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QApplication::translate("TargetListWindow", "Delete", 0));
        deleteButton->setShortcut(QApplication::translate("TargetListWindow", "Del", 0));
#ifndef QT_NO_TOOLTIP
        upButton->setToolTip(QApplication::translate("TargetListWindow", "<html><head/><body><p>Shortcut: <span style=\" font-weight:600;\">Up Key</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        upButton->setText(QApplication::translate("TargetListWindow", "Up", 0));
        upButton->setShortcut(QApplication::translate("TargetListWindow", "Up", 0));
#ifndef QT_NO_TOOLTIP
        downButton->setToolTip(QApplication::translate("TargetListWindow", "<html><head/><body><p>Shortcut: <span style=\" font-weight:600;\">Down Key</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        downButton->setText(QApplication::translate("TargetListWindow", "Down", 0));
        downButton->setShortcut(QApplication::translate("TargetListWindow", "Down", 0));
        QTableWidgetItem *___qtablewidgetitem = targetListTable->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QApplication::translate("TargetListWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = targetListTable->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("TargetListWindow", "Coordinates", 0));
        QTableWidgetItem *___qtablewidgetitem2 = targetListTable->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QApplication::translate("TargetListWindow", "Description", 0));
    } // retranslateUi

};

namespace Ui {
    class TargetListWindow: public Ui_TargetListWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TARGETLISTWINDOW_H
