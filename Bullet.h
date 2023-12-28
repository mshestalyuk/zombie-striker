#ifndef BULLET_H
#define BULLET_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include "Direction.h"
#include "qmediaplayer.h"

class Bullet : public QObject, public QGraphicsPixmapItem {
    Q_OBJECT
public:
    Bullet(Direction::DirectionType dir);

public slots:
    void move();

private:
    Direction direction;
    QMediaPlayer *bulletSound;
    QAudioOutput *audioOutput;

};

#endif // BULLET_H

