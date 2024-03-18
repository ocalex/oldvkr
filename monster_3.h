#ifndef MONSTER_3_H
#define MONSTER_3_H
#include "base_class.h"
#include "chran.h"
#include <QRect>

class monster_3: public base_class
{
    QPoint m_target;
    int xxx;   // Размер сцены по шкале х

    int yyy; // Размер сцены по шкале у

    virtual void keyPressEvent(QKeyEvent * event){};

public:
    void setcoord(int x, int y){xxx = x; yyy = y;}

    void atack();
    monster_3();
    QPoint setRandom();
    void move();

public slots:
};

#endif // MONSTER_3_H
