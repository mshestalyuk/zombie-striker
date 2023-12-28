#include "aboutauthors.h"
#include "MainWindow.h"
#include "ui_aboutauthors.h"

AboutAuthors::AboutAuthors(QWidget *parent)
    : QWidget(parent), ui(new Ui::AboutAuthors)
{
    ui->setupUi(this);
}


AboutAuthors::~AboutAuthors()
{
    delete ui;
}

void AboutAuthors::on_pushButton_4_pressed()
{
    QApplication::exit(0);
}


void AboutAuthors::on_pushButton_3_pressed()
{
    MainWindow* window = new MainWindow();
    window->show(); // Show the Game window
    this->close(); // Hide the MainWindow
    // Or, if you want to close it instead: this->close();
}

