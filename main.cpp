#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include "MainWindow.h" // Include the MainWindow header


int main(int argc, char* argv[]) {
    QApplication a(argc, argv);

    MainWindow mainWindow; // Create a MainWindow object
    mainWindow.show(); // Show the MainWindow
    return a.exec();
}
