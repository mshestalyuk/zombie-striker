#ifndef GAMEOVER_H
#define GAMEOVER_H

#include <QWidget>
#include "MainWindow.h"

namespace Ui {
class GameOver;
}

class GameOver : public QWidget
{
    Q_OBJECT

public:
    explicit GameOver(QWidget *parent = nullptr);
    ~GameOver();

private slots:
    void on_pushButton_4_pressed();


    void on_pushButton_5_pressed();

private:
    Ui::GameOver *ui;
    MainWindow* mainWin; // Add a MainWindow pointer
};

#endif // GAMEOVER_H
