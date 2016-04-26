/********************************************************************************
** Form generated from reading UI file 'targetwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TARGETWINDOW_H
#define UI_TARGETWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TargetWindow
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *targetPic;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label1;
    QLabel *nameLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *coordinatesLabel;
    QLabel *label;
    QTextBrowser *description;
    QHBoxLayout *horizontalLayout_4;
    QCommandLinkButton *classifyButton;
    QCommandLinkButton *zbar;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TargetWindow)
    {
        if (TargetWindow->objectName().isEmpty())
            TargetWindow->setObjectName(QStringLiteral("TargetWindow"));
        TargetWindow->resize(533, 319);
        verticalLayout = new QVBoxLayout(TargetWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        targetPic = new QLabel(TargetWindow);
        targetPic->setObjectName(QStringLiteral("targetPic"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(targetPic->sizePolicy().hasHeightForWidth());
        targetPic->setSizePolicy(sizePolicy);
        targetPic->setMinimumSize(QSize(110, 0));
        targetPic->setAutoFillBackground(true);
        targetPic->setFrameShape(QFrame::NoFrame);
        targetPic->setFrameShadow(QFrame::Sunken);
        targetPic->setLineWidth(1);
        targetPic->setMidLineWidth(0);
        targetPic->setScaledContents(false);
        targetPic->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(targetPic);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_2->setContentsMargins(0, -1, -1, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        label1 = new QLabel(TargetWindow);
        label1->setObjectName(QStringLiteral("label1"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label1->sizePolicy().hasHeightForWidth());
        label1->setSizePolicy(sizePolicy1);
        label1->setMaximumSize(QSize(80, 16777215));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label1->setFont(font);

        horizontalLayout_2->addWidget(label1);

        nameLabel = new QLabel(TargetWindow);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        horizontalLayout_2->addWidget(nameLabel);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        label_2 = new QLabel(TargetWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(80, 16777215));
        label_2->setFont(font);

        horizontalLayout_3->addWidget(label_2);

        coordinatesLabel = new QLabel(TargetWindow);
        coordinatesLabel->setObjectName(QStringLiteral("coordinatesLabel"));

        horizontalLayout_3->addWidget(coordinatesLabel);


        verticalLayout_2->addLayout(horizontalLayout_3);

        label = new QLabel(TargetWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        description = new QTextBrowser(TargetWindow);
        description->setObjectName(QStringLiteral("description"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(description->sizePolicy().hasHeightForWidth());
        description->setSizePolicy(sizePolicy2);
        description->setMaximumSize(QSize(16777215, 160));
        description->setReadOnly(true);

        verticalLayout_2->addWidget(description);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetFixedSize);
        classifyButton = new QCommandLinkButton(TargetWindow);
        classifyButton->setObjectName(QStringLiteral("classifyButton"));
        sizePolicy1.setHeightForWidth(classifyButton->sizePolicy().hasHeightForWidth());
        classifyButton->setSizePolicy(sizePolicy1);
        classifyButton->setMinimumSize(QSize(128, 0));
        classifyButton->setMaximumSize(QSize(128, 16777215));

        horizontalLayout_4->addWidget(classifyButton);

        zbar = new QCommandLinkButton(TargetWindow);
        zbar->setObjectName(QStringLiteral("zbar"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(zbar->sizePolicy().hasHeightForWidth());
        zbar->setSizePolicy(sizePolicy3);
        zbar->setMaximumSize(QSize(128, 16777215));

        horizontalLayout_4->addWidget(zbar);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(TargetWindow);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TargetWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), TargetWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TargetWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(TargetWindow);
    } // setupUi

    void retranslateUi(QDialog *TargetWindow)
    {
        TargetWindow->setWindowTitle(QApplication::translate("TargetWindow", "Dialog", 0));
        targetPic->setText(QString());
        label1->setText(QApplication::translate("TargetWindow", "Name:", 0));
        nameLabel->setText(QApplication::translate("TargetWindow", "TextLabel", 0));
        label_2->setText(QApplication::translate("TargetWindow", "Coordinates:", 0));
        coordinatesLabel->setText(QApplication::translate("TargetWindow", "TextLabel", 0));
        label->setText(QApplication::translate("TargetWindow", "Description:", 0));
        classifyButton->setText(QApplication::translate("TargetWindow", "Classify", 0));
        zbar->setText(QApplication::translate("TargetWindow", "zbar", 0));
    } // retranslateUi

};

namespace Ui {
    class TargetWindow: public Ui_TargetWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TARGETWINDOW_H
