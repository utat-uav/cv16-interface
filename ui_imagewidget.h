/********************************************************************************
** Form generated from reading UI file 'imagewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEWIDGET_H
#define UI_IMAGEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *imageLabel;
    QLabel *imageCaption;

    void setupUi(QWidget *ImageWidget)
    {
        if (ImageWidget->objectName().isEmpty())
            ImageWidget->setObjectName(QStringLiteral("ImageWidget"));
        ImageWidget->resize(414, 224);
        verticalLayout_2 = new QVBoxLayout(ImageWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        imageLabel = new QLabel(ImageWidget);
        imageLabel->setObjectName(QStringLiteral("imageLabel"));
        imageLabel->setMinimumSize(QSize(0, 0));
        imageLabel->setScaledContents(false);
        imageLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(imageLabel);

        imageCaption = new QLabel(ImageWidget);
        imageCaption->setObjectName(QStringLiteral("imageCaption"));
        imageCaption->setMaximumSize(QSize(16777215, 23));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        imageCaption->setFont(font);
        imageCaption->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(imageCaption);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(ImageWidget);

        QMetaObject::connectSlotsByName(ImageWidget);
    } // setupUi

    void retranslateUi(QWidget *ImageWidget)
    {
        ImageWidget->setWindowTitle(QApplication::translate("ImageWidget", "Form", 0));
        imageLabel->setText(QString());
        imageCaption->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ImageWidget: public Ui_ImageWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEWIDGET_H
