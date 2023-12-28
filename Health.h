#ifndef HEALTH_H
#define HEALTH_H

#include <QGraphicsTextItem>

class Health : public QGraphicsTextItem {
public:
    Health(QGraphicsItem* parent = 0);
    void decrease();
    int getHealth();
    void checkGameOver(); // New method to check for game over condition
    void setHealth(int health);

private:
    int health;
};

#endif // HEALTH_H
