#include "Enemy.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h> // rand() -> really large int
#include <QDebug>
#include "Game.h"


Enemy::Enemy() : QObject(), QGraphicsPixmapItem() {
    // Choose a random side (0: top, 1: bottom, 2: left, 3: right)
    int side = rand() % 4;
    int random_position;

    if (side <= 1) { // Top or Bottom
        random_position = rand() % 700; // Assuming 700 is the width of the scene
        setPos(random_position, side == 0 ? 0 : 700); // 700 here is assumed to be the height of the scene
    }
    else { // Left or Right
        random_position = rand() % 700; // Assuming 700 is the height of the scene
        setPos(side == 2 ? 0 : 700, random_position); // 700 here is assumed to be the width of the scene
    }

    // drew the rect
    QPixmap originalPixmap(":/images/images/zombie.png");
    QPixmap scaledPixmap = originalPixmap.scaled(75, 75, Qt::KeepAspectRatio);
    setPixmap(scaledPixmap);
    // connect
    QTimer* timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    timer->start(50);

    // Store the side for movement
    this->side = side;
}

void Enemy::move() {
    // Update position based on the side
    switch (side) {
    case 0: // Top
        setPos(x(), y() + 5);
        break;
    case 1: // Bottom
        setPos(x(), y() - 5);
        break;
    case 2: // Left
        setPos(x() + 5, y());
        break;
    case 3: // Right
        setPos(x() - 5, y());
        break;
    }

    QList<QGraphicsItem*> colliding_items = collidingItems();
    for (int i = 0, n = colliding_items.size(); i < n; ++i) {
        if (typeid(*(colliding_items[i])) == typeid(Player)) {
            // Decrease the health
            Game* game = Game::getInstance();
            game->health->decrease();

            // Remove the enemy from the scene
            scene()->removeItem(this);
            delete this;
            return;
        }
    }

    // Check if enemy is out of scene
    if ((side <= 1 && (pos().y() < 0 || pos().y() > 700)) ||
        (side > 1 && (pos().x() < 0 || pos().x() > 700))) {
        scene()->removeItem(this);
        delete this;
    }
}
