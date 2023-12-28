#ifndef BOSSENEMY_H
#define BOSSENEMY_H

#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QObject>

class BossEnemy : public QObject, public QGraphicsPixmapItem {
    Q_OBJECT
public:
    BossEnemy();
public slots:
    void move();

private:
    int side; // To keep track of which side the enemy came from
};

#endif // BOSSENEMY_H
