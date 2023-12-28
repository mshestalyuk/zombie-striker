#ifndef ENEMY_H
#define ENEMY_H

#include <QGraphicsPixMapItem>
#include <QObject>

class Enemy : public QObject, public QGraphicsPixmapItem {
    Q_OBJECT
public:

    Enemy();
public slots:
    void move();
private:
    int side; // To keep track of which side the enemy came from
};

#endif // ENEMY_H
