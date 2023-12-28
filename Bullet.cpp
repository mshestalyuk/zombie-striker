#include "Bullet.h"
#include <QTimer>
#include <QGraphicsScene>
#include "BossEnemy.h"
#include "Enemy.h"
#include "Game.h"

// Initialize audio output and bullet sound



Bullet::Bullet(Direction::DirectionType dir) : direction(dir) {
    // Set bullet pixmap based on direction
    setPixmap(direction.getBulletPixmap().scaled(25, 25, Qt::KeepAspectRatio));

    // connect
    QTimer* timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));
    timer->start(50);

    // Initialize and play bullet sound (if required)
    audioOutput = new QAudioOutput(this);
    bulletSound = new QMediaPlayer(this);
    bulletSound->setAudioOutput(audioOutput);
    bulletSound->setSource(QUrl("qrc:/sounds/sound/gun.wav"));  // Replace with your bullet sound path
    audioOutput->setVolume(0.3);  // Set the volume
    bulletSound->play();  // Play the bullet sound
    // ... (existing sound code here)
}

void Bullet::move() {
    QList<QGraphicsItem*> colliding_items = collidingItems();
    for (int i = 0, n = colliding_items.size(); i < n; ++i) {
        if (typeid(*(colliding_items[i])) == typeid(Enemy) ) {
            Game* game = Game::getInstance();

            // increase the score
            game->score->increase();

            // remove and delete both the enemy and the bullet
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            delete colliding_items[i];
            delete this;
            return;
        }
        else if(typeid(*(colliding_items[i])) == typeid(BossEnemy)){
            Game* game = Game::getInstance();

            // increase the score
            game->score->increase();
            game->score->increase();

            // remove and delete both the enemy and the bullet
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            delete colliding_items[i];
            delete this;
            return;
        }
    }

    // Update position based on direction
    switch (direction.getDirectionType()) {
    case Direction::Up:
        setPos(x(), y() - 10);
        break;
    case Direction::Down:
        setPos(x(), y() + 10);
        break;
    case Direction::Left:
        setPos(x() - 10, y());
        break;
    case Direction::Right:
        setPos(x() + 10, y());
        break;
    }

    // Check if bullet is out of scene
    if (pos().y() < 0 || pos().y() > scene()->height() ||
        pos().x() < 0 || pos().x() > scene()->width()) {
        scene()->removeItem(this);
        delete this;
    }
}
