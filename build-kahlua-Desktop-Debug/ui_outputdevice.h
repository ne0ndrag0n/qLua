/********************************************************************************
** Form generated from reading UI file 'outputdevice.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUTDEVICE_H
#define UI_OUTPUTDEVICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OutputDevice
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *graphics;
    QGridLayout *gridLayout_2;
    QLabel *display;
    QWidget *text;
    QGridLayout *gridLayout_3;
    QTextBrowser *console;

    void setupUi(QDialog *OutputDevice)
    {
        if (OutputDevice->objectName().isEmpty())
            OutputDevice->setObjectName(QStringLiteral("OutputDevice"));
        OutputDevice->resize(640, 480);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OutputDevice->sizePolicy().hasHeightForWidth());
        OutputDevice->setSizePolicy(sizePolicy);
        OutputDevice->setSizeGripEnabled(false);
        gridLayout = new QGridLayout(OutputDevice);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(OutputDevice);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        graphics = new QWidget();
        graphics->setObjectName(QStringLiteral("graphics"));
        gridLayout_2 = new QGridLayout(graphics);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        display = new QLabel(graphics);
        display->setObjectName(QStringLiteral("display"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(display->sizePolicy().hasHeightForWidth());
        display->setSizePolicy(sizePolicy1);
        display->setAutoFillBackground(false);

        gridLayout_2->addWidget(display, 0, 0, 1, 1);

        stackedWidget->addWidget(graphics);
        text = new QWidget();
        text->setObjectName(QStringLiteral("text"));
        gridLayout_3 = new QGridLayout(text);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        console = new QTextBrowser(text);
        console->setObjectName(QStringLiteral("console"));

        gridLayout_3->addWidget(console, 0, 0, 1, 1);

        stackedWidget->addWidget(text);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(OutputDevice);

        QMetaObject::connectSlotsByName(OutputDevice);
    } // setupUi

    void retranslateUi(QDialog *OutputDevice)
    {
        OutputDevice->setWindowTitle(QApplication::translate("OutputDevice", "Program Output", 0));
        display->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OutputDevice: public Ui_OutputDevice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUTDEVICE_H
