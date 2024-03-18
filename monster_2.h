#ifndef MONSTER_2_H
#define MONSTER_2_H
#include "base_class.h"
#include "chran.h"
#include <QRect>

class monster_2: public base_class
{
    virtual void keyPressEvent(QKeyEvent * event){};
    int xxx;// Размер сцены по шкале х
    int yyy;// Размер сцены по шкале у

public:
   void setcoord(int x, int y){xxx = x; yyy = y;}
    void atack();
    monster_2();
    void move();

public slots:
};

#endif // MONSTER_2_H
