/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QTextBrowser *textBrowser1;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(250, 60, 280, 60));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        textBrowser->setFont(font);
        textBrowser->setContextMenuPolicy(Qt::DefaultContextMenu);
        textBrowser->setAutoFillBackground(true);
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: transparent ;"));
        textBrowser->setFrameShape(QFrame::NoFrame);
        textBrowser->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(290, 160, 200, 50));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(16);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(170, 255, 255);"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(290, 230, 200, 50));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(170, 255, 255);"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(290, 300, 200, 50));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(170, 255, 255);"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(290, 370, 200, 50));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(170, 255, 255);"));
        textBrowser1 = new QTextBrowser(centralwidget);
        textBrowser1->setObjectName("textBrowser1");
        textBrowser1->setGeometry(QRect(0, 0, 800, 600));
        sizePolicy.setHeightForWidth(textBrowser1->sizePolicy().hasHeightForWidth());
        textBrowser1->setSizePolicy(sizePolicy);
        textBrowser1->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/bg_menu.jpg);"));
        MainWindow->setCentralWidget(centralwidget);
        textBrowser1->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        textBrowser1->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "ZOMBIE STRIKER - MAINMENU", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Times New Roman'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:20pt; font-weight:700;\">STRIKER ZOMBIE</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PLAY", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "ABOUT GAME", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "OPTIONS", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
