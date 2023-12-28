#include "Player.h"
#include "Bullet.h"
#include "Enemy.h"
#include "BossEnemy.h"
#include "qgraphicsscene.h"

Player::Player() : currentDirection(Direction::Down) { // Default direction
    // Initialize movement flags
    moveLeft = moveRight = moveUp = moveDown = false;

    // Set initial pixmap
    setPixmap(currentDirection.getPixmap().scaled(75, 75, Qt::KeepAspectRatio));
}

void Player::keyPressEvent(QKeyEvent* event) {
    int stepSize = 10;
    qreal newX, newY;

    qreal sceneWidth = scene()->width();
    qreal sceneHeight = scene()->height();

    switch (event->key()) {
    case Qt::Key_Left:
        newX = x() - stepSize;
        if (newX >= 0) setPos(newX, y());
        setDirection(Direction::Left);
        break;

    case Qt::Key_Right:
        newX = x() + stepSize;
        if (newX + pixmap().width() <= sceneWidth) setPos(newX, y());
        setDirection(Direction::Right);
        break;

    case Qt::Key_Up:
        newY = y() - stepSize;
        if (newY >= 0) setPos(x(), newY);
        setDirection(Direction::Up);
        break;

    case Qt::Key_Down:
        newY = y() + stepSize;
        if (newY + pixmap().height() <= sceneHeight) setPos(x(), newY);
        setDirection(Direction::Down);
        break;

    case Qt::Key_Space:
        // Create a bullet with the current direction
        Bullet* bullet = new Bullet(currentDirection.getDirectionType());
        bullet->setPos(x(), y());
        scene()->addItem(bullet);
        break;

    }
}

void Player::setDirection(const Direction::DirectionType& newDirectionType) {
    if (currentDirection.getDirectionType() != newDirectionType) {
        currentDirection = Direction(newDirectionType);
        setPixmap(currentDirection.getPixmap().scaled(75, 75, Qt::KeepAspectRatio));
    }
}

void Player::spawn() {
    // Create and add enemies
    Enemy* enemy = new Enemy();
    scene()->addItem(enemy);
    BossEnemy* boss = new BossEnemy();
    scene()->addItem(boss);
}
