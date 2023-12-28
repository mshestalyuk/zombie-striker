#include "Game.h"
#include <QTimer>
#include <QGraphicsTextItem>
#include <QFont>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QImage>

Game* Game::instance = nullptr;

Game* Game::getInstance(QWidget* parent) {
    if (instance == nullptr) {
        instance = new Game(parent);
    }
    return instance;
}


Game::Game(QWidget* parent) : QGraphicsView(parent) {
    // create a scene

    scene = new QGraphicsScene();
    scene->setSceneRect(0, 0, 800, 600); // make the scene 800x600 instead of infinity by infinity (default)
    this->setWindowTitle("ZOMBIE STRIKER");

    QImage bg(":/images/images/bg.jpg");
    setBackgroundBrush(QBrush(bg.scaled(800, 600, Qt::KeepAspectRatioByExpanding)));
    // make the newly created scene the scene to visualize (since Game is a QGraphicsView Widget,
    // it can be used to visualize scenes)
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800, 600);

    // create an item to add to the scene
    player = new Player();
    player->setPos(350, 250); // TODO generalize to always be in the middle bottom of screen

    // make the player focusable and set it to be the current focus
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    // add the player to the scene
    scene->addItem(player);

    // create the score/health
    score = new Score();
    scene->addItem(score);
    health = new Health();
    health->setPos(health->x(), health->y() + 25);
    scene->addItem(health);

    // spawn enemies
    QTimer* timer = new QTimer();
    QObject::connect(timer, SIGNAL(timeout()), player, SLOT(spawn()));
    timer->start(2000);


    // play background music

    audioOutput = new QAudioOutput(this);  // Pass 'this' to set Game as the parent
    music = new QMediaPlayer(this);        // Pass 'this' to set Game as the parent

    // Set up and play music
    music->setAudioOutput(audioOutput);
    music->setSource(QUrl("qrc:/sounds/sound/bgmusic.mp3"));
    audioOutput->setVolume(0.1);
    music->play();

    show();
}

void Game::cleanupAndClose() {
    if (music) {
        music->stop();
        delete music;
        music = nullptr;
    }

    if (audioOutput) {
        delete audioOutput;
        audioOutput = nullptr;
    }

    // Delete or stop other resources like timers, player, scene, etc.
    // ...

    this->close(); // Close the game window
}

// In Game.cpp
Game::~Game() {
    cleanupAndClose(); // Ensure cleanup is done
    delete instance;
    // Reset the static instance
    instance = nullptr;
}

