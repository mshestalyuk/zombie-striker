#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include <QMediaPlayer>
#include <QAudioOutput>
#include "Player.h"
#include "Score.h"
#include "Health.h"

class Game : public QGraphicsView {
public:
    static Game* getInstance(QWidget* parent = nullptr);
    QMediaPlayer* music;
    QAudioOutput* audioOutput;
    QGraphicsScene* scene;
    Player* player;
    Score* score;
    Health* health;
    void cleanupAndClose(); // New method for cleanup
    ~Game();
private:
    Game(QWidget* parent = nullptr); // Private constructor
    static Game* instance; // Static instance
};

#endif // GAME_H
