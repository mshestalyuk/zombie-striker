/********************************************************************************
** Form generated from reading UI file 'gameover.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOVER_H
#define UI_GAMEOVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameOver
{
public:
    QPushButton *pushButton_4;
    QTextBrowser *textBrowser;
    QPlainTextEdit *plainTextEdit;
    QTextBrowser *textBrowser_2;

    void setupUi(QWidget *GameOver)
    {
        if (GameOver->objectName().isEmpty())
            GameOver->setObjectName("GameOver");
        GameOver->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GameOver->sizePolicy().hasHeightForWidth());
        GameOver->setSizePolicy(sizePolicy);
        pushButton_4 = new QPushButton(GameOver);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(300, 230, 200, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(16);
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(189, 235, 232);"));
        textBrowser = new QTextBrowser(GameOver);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(260, 120, 280, 60));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        textBrowser->setFont(font1);
        textBrowser->setContextMenuPolicy(Qt::DefaultContextMenu);
        textBrowser->setAutoFillBackground(true);
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        textBrowser->setFrameShape(QFrame::NoFrame);
        textBrowser->setFrameShadow(QFrame::Sunken);
        plainTextEdit = new QPlainTextEdit(GameOver);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(0, 0, 800, 600));
        sizePolicy.setHeightForWidth(plainTextEdit->sizePolicy().hasHeightForWidth());
        plainTextEdit->setSizePolicy(sizePolicy);
        plainTextEdit->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/bg_menu.jpg);"));
        textBrowser_2 = new QTextBrowser(GameOver);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(260, 180, 280, 60));
        textBrowser_2->setFont(font1);
        textBrowser_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        textBrowser_2->setAutoFillBackground(true);
        textBrowser_2->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        textBrowser_2->setFrameShape(QFrame::NoFrame);
        textBrowser_2->setFrameShadow(QFrame::Sunken);
        plainTextEdit->raise();
        pushButton_4->raise();
        textBrowser->raise();
        textBrowser_2->raise();

        retranslateUi(GameOver);

        QMetaObject::connectSlotsByName(GameOver);
    } // setupUi

    void retranslateUi(QWidget *GameOver)
    {
        GameOver->setWindowTitle(QCoreApplication::translate("GameOver", "ZOMBIE STRIKER - GAME OVER", nullptr));
        pushButton_4->setText(QCoreApplication::translate("GameOver", "EXIT", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("GameOver", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Times New Roman'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:20pt; font-weight:700;\">GAME OVER</span></p></body></html>", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("GameOver", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Times New Roman'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">THANKS FOR PLAYING</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameOver: public Ui_GameOver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOVER_H
