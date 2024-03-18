#ifndef PLAYER_H
#define PLAYER_H
#include "base_class.h"
#include <QImage>
#include <QPicture>
#include <QPaintEvent>
#include <QPushButton>
#include <QPropertyAnimation>
#include <QPainter>
#include <QPixmap>
#include <QBitmap>
#include <QKeyEvent>

class player: public base_class
{
    int m_number_attack;//  Количество атак которые может совершить игрок

public:
    player();
    virtual void keyPressEvent(QKeyEvent * event);
    virtual void move() {};
    virtual void atack();
    virtual void setnumberattack(int a);


    ~player(){qDebug("delete_player_class"); signaloffscene(); }


};

#endif // PLAYER_H
