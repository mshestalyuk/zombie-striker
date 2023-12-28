#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QKeyEvent>
#include "Direction.h"

class Player : public QObject, public QGraphicsPixmapItem {
    Q_OBJECT
public:
    Player();
    void keyPressEvent(QKeyEvent* event);
    void setDirection(const Direction::DirectionType& newDirectionType);

public slots:
    void spawn();

private:
    Direction currentDirection;
    bool moveLeft, moveRight, moveUp, moveDown;
};

#endif // PLAYER_H
