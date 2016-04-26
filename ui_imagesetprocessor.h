/********************************************************************************
** Form generated from reading UI file 'imagesetprocessor.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGESETPROCESSOR_H
#define UI_IMAGESETPROCESSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ImageSetProcessor
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *pythonPath;
    QPushButton *browsePythonPath;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *imageSetFolder;
    QPushButton *browseImageSetFolder;
    QHBoxLayout *horizontalLayout_5;
    QLabel *gpsLogLabel;
    QLineEdit *gpsLogPath;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *processedFolderName;
    QPushButton *browseProcessedFolder;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ImageSetProcessor)
    {
        if (ImageSetProcessor->objectName().isEmpty())
            ImageSetProcessor->setObjectName(QStringLiteral("ImageSetProcessor"));
        ImageSetProcessor->resize(405, 174);
        verticalLayout = new QVBoxLayout(ImageSetProcessor);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(ImageSetProcessor);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);

        horizontalLayout_4->addWidget(label_3);

        pythonPath = new QLineEdit(ImageSetProcessor);
        pythonPath->setObjectName(QStringLiteral("pythonPath"));

        horizontalLayout_4->addWidget(pythonPath);

        browsePythonPath = new QPushButton(ImageSetProcessor);
        browsePythonPath->setObjectName(QStringLiteral("browsePythonPath"));

        horizontalLayout_4->addWidget(browsePythonPath);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(ImageSetProcessor);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        imageSetFolder = new QLineEdit(ImageSetProcessor);
        imageSetFolder->setObjectName(QStringLiteral("imageSetFolder"));

        horizontalLayout->addWidget(imageSetFolder);

        browseImageSetFolder = new QPushButton(ImageSetProcessor);
        browseImageSetFolder->setObjectName(QStringLiteral("browseImageSetFolder"));

        horizontalLayout->addWidget(browseImageSetFolder);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        gpsLogLabel = new QLabel(ImageSetProcessor);
        gpsLogLabel->setObjectName(QStringLiteral("gpsLogLabel"));
        gpsLogLabel->setFont(font);

        horizontalLayout_5->addWidget(gpsLogLabel);

        gpsLogPath = new QLineEdit(ImageSetProcessor);
        gpsLogPath->setObjectName(QStringLiteral("gpsLogPath"));

        horizontalLayout_5->addWidget(gpsLogPath);

        pushButton = new QPushButton(ImageSetProcessor);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_5->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(ImageSetProcessor);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        processedFolderName = new QLineEdit(ImageSetProcessor);
        processedFolderName->setObjectName(QStringLiteral("processedFolderName"));

        horizontalLayout_2->addWidget(processedFolderName);

        browseProcessedFolder = new QPushButton(ImageSetProcessor);
        browseProcessedFolder->setObjectName(QStringLiteral("browseProcessedFolder"));

        horizontalLayout_2->addWidget(browseProcessedFolder);


        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(ImageSetProcessor);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ImageSetProcessor);
        QObject::connect(buttonBox, SIGNAL(accepted()), ImageSetProcessor, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ImageSetProcessor, SLOT(reject()));

        QMetaObject::connectSlotsByName(ImageSetProcessor);
    } // setupUi

    void retranslateUi(QDialog *ImageSetProcessor)
    {
        ImageSetProcessor->setWindowTitle(QApplication::translate("ImageSetProcessor", "Dialog", 0));
        label_3->setText(QApplication::translate("ImageSetProcessor", "Python Folder", 0));
        pythonPath->setText(QApplication::translate("ImageSetProcessor", "C:/Python27", 0));
        browsePythonPath->setText(QApplication::translate("ImageSetProcessor", "Browse", 0));
        label->setText(QApplication::translate("ImageSetProcessor", "Image Set Folder", 0));
        browseImageSetFolder->setText(QApplication::translate("ImageSetProcessor", "Browse", 0));
        gpsLogLabel->setText(QApplication::translate("ImageSetProcessor", "GPS Log", 0));
        pushButton->setText(QApplication::translate("ImageSetProcessor", "Browse", 0));
        label_2->setText(QApplication::translate("ImageSetProcessor", "Output Folder", 0));
        browseProcessedFolder->setText(QApplication::translate("ImageSetProcessor", "Browse", 0));
    } // retranslateUi

};

namespace Ui {
    class ImageSetProcessor: public Ui_ImageSetProcessor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGESETPROCESSOR_H
