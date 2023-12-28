#include "mainwindow.h"
#include "Game.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), authors(nullptr)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_4_pressed()
{
    QApplication::exit(0);
}



void MainWindow::on_pushButton_pressed()
{
        Game::getInstance()->show(); // Show the Game window
        this->hide(); // Hide the MainWindow
        // Or, if you want to close it instead: this->close();

}

void MainWindow::on_pushButton_2_pressed()
{
        authors.show(); // Show the Game window
        this->hide(); // Hide the MainWindow
}

