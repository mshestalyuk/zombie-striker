#include "gameover.h"
#include "ui_gameover.h"

GameOver::GameOver(QWidget *parent): QWidget(parent), ui(new Ui::GameOver)
{
    ui->setupUi(this);
}

GameOver::~GameOver()
{
    delete ui;
}

void GameOver::on_pushButton_4_pressed()
{
    QApplication::exit(0);
}



void GameOver::on_pushButton_5_pressed()
{
    MainWindow* window = new MainWindow();
    window->show(); // Show the Game window
    this->close(); // Hide the MainWindow
}

