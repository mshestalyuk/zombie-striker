#include "Health.h"
#include "Game.h"
#include "gameover.h"
#include <QFont>

Health::Health(QGraphicsItem* parent) : QGraphicsTextItem(parent) {
    // initialize the score to 0
    health = 3;

    // draw the text
    setPlainText(QString("Health: ") + QString::number(health)); // Health: 3
    setDefaultTextColor(Qt::red);
    setFont(QFont("times", 16));
}

void Health::decrease() {
    health--;
    setPlainText(QString("Health: ") + QString::number(health)); // Health: 2
    checkGameOver(); // Check if the game should end

}

int Health::getHealth() {
    return health;
}

void Health::setHealth(int health){
    this->health = health;
}

void Health::checkGameOver() {
    if (health == 0 || health == -1) {
        Game::getInstance()->cleanupAndClose(); // Clean up and close the game
        // Rest of the game over logic
        GameOver* window = new GameOver();
        window->show();
    }
}
