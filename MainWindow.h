#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "aboutauthors.h"
// #include "gameover.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_4_pressed();

    void on_pushButton_pressed();

    void on_pushButton_2_pressed();

private:
    Ui::MainWindow *ui;
    MainWindow* mainWin; // Add a MainWindow pointer
    AboutAuthors authors; // Add a MainWindow pointer

};

#endif // MAINWINDOW_H
