#ifndef DIRECTION_H
#define DIRECTION_H

#include <QPixmap>

class Direction {
public:
    enum DirectionType { Up, Down, Left, Right };

    Direction(DirectionType dir);

    DirectionType getDirectionType() const;
    QPixmap getPixmap() const;
    QPixmap getBulletPixmap() const;

private:
    DirectionType directionType;
    QPixmap pixmap;
    QPixmap bulletpixmap;

};

#endif // DIRECTION_H
