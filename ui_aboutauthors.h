/********************************************************************************
** Form generated from reading UI file 'aboutauthors.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTAUTHORS_H
#define UI_ABOUTAUTHORS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutAuthors
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser1;

    void setupUi(QWidget *AboutAuthors)
    {
        if (AboutAuthors->objectName().isEmpty())
            AboutAuthors->setObjectName("AboutAuthors");
        AboutAuthors->resize(800, 600);
        textBrowser = new QTextBrowser(AboutAuthors);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(240, 40, 311, 60));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        textBrowser->setFont(font);
        textBrowser->setContextMenuPolicy(Qt::DefaultContextMenu);
        textBrowser->setAutoFillBackground(true);
        textBrowser->setStyleSheet(QString::fromUtf8("background: transparent;"));
        textBrowser->setFrameShape(QFrame::NoFrame);
        textBrowser->setFrameShadow(QFrame::Sunken);
        pushButton_3 = new QPushButton(AboutAuthors);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(150, 350, 200, 50));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(16);
        pushButton_3->setFont(font1);
        pushButton_3->setAutoFillBackground(false);
        pushButton_3->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(170, 255, 255);\n"
"selection-background-color: rgb(0, 255, 255);"));
        pushButton_4 = new QPushButton(AboutAuthors);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(410, 350, 203, 50));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(170, 255, 255);"));
        textBrowser_2 = new QTextBrowser(AboutAuthors);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(150, 120, 461, 181));
        textBrowser_2->setStyleSheet(QString::fromUtf8("background: transparent;"));
        textBrowser_2->setFrameShape(QFrame::NoFrame);
        textBrowser1 = new QTextBrowser(AboutAuthors);
        textBrowser1->setObjectName("textBrowser1");
        textBrowser1->setGeometry(QRect(0, 0, 800, 600));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textBrowser1->sizePolicy().hasHeightForWidth());
        textBrowser1->setSizePolicy(sizePolicy);
        textBrowser1->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/bg_menu.jpg);"));
        textBrowser1->raise();
        textBrowser1->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        textBrowser_2->raise();

        retranslateUi(AboutAuthors);

        QMetaObject::connectSlotsByName(AboutAuthors);
    } // setupUi

    void retranslateUi(QWidget *AboutAuthors)
    {
        AboutAuthors->setWindowTitle(QCoreApplication::translate("AboutAuthors", "ZOMBIE STRIKER - ABOUT", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("AboutAuthors", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Times New Roman'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:700;\">ABOUT AUTHORS</span></p></body></html>", nullptr));
        pushButton_3->setText(QCoreApplication::translate("AboutAuthors", "MAIN MENU", nullptr));
        pushButton_4->setText(QCoreApplication::translate("AboutAuthors", "EXIT", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("AboutAuthors", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700; color:#000000;\">STRIKER ZOMBIE</span><span style=\" font-size:12pt; color:#000000;\"> - it's a game created by Maksymilian Shestalyuk.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; color:#000000;\"><br /></p>\n"
"<p align=\"ri"
                        "ght\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#000000;\">All rights are reserved!</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutAuthors: public Ui_AboutAuthors {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTAUTHORS_H
