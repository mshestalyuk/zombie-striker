#include "Direction.h"

Direction::Direction(DirectionType dir) : directionType(dir) {
    switch (dir) {
    case Up:
        pixmap.load(":/images/images/player_up.png");
        bulletpixmap.load(":/images/images/bullet_up.png");
        break;
    case Down:
        pixmap.load(":/images/images/player_down.png");
        bulletpixmap.load(":/images/images/bullet_down.png");
        break;
    case Left:
        pixmap.load(":/images/images/player_left.png");
        bulletpixmap.load(":/images/images/bullet_left.png");
        break;
    case Right:
        pixmap.load(":/images/images/player_right.png");
        bulletpixmap.load(":/images/images/bullet_right.png");
        break;
    default:
        pixmap.load(":/images/images/player_default.png");
        bulletpixmap.load(":/images/images/bullet_default.png");
        break;
    }
}

Direction::DirectionType Direction::getDirectionType() const {
    return directionType;
}

QPixmap Direction::getPixmap() const {
    return pixmap;
}

QPixmap Direction::getBulletPixmap() const {
    return bulletpixmap;
}
