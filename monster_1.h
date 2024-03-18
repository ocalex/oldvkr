#ifndef MONSTER_1_H
#define MONSTER_1_H
#include "base_class.h"
#include "chran.h"
#include <QRect>
#include <QPointer>
#include <QtMath>

class monster_1: public base_class
{
    QPointer <base_class> m_target;// Безопасный указатель на цель объекта

    virtual void keyPressEvent(QKeyEvent * event){};


public:
    void atack();
    monster_1(base_class *target);
    void move();
    void movetotarget();

public slots:
};

#endif // MONSTER_1_H
