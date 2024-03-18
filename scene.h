#ifndef SCENE_H
#define SCENE_H

#include <QWidget>
#include <base_class.h>
#include <QVector>
#include "chran.h"
#include <QPainter>
#include <QPixmap>
#include <QBitmap>
#include "player.h"
#include "monster_1.h"
#include "monster_2.h"
#include "monster_3.h"
#include "controller.h"
#include "dialog.h"
#include "user_monster.h"
#include "QGraphicsScene"
#include "playerdialog.h"
#include <QMutex>
#include <QGraphicsView>


class scene : public QWidget
{
    Q_OBJECT
    QVector <base_class*> m_scene;//Хранилище действующих объектов
    Dialog *window;
    playerdialog *window2;
    int m_victory = 0;// Количество очков
    QMutex m_mutex;
    bool on_scene = false;// Находится ли игрок на игровом поле



public:


    explicit scene(QWidget *parent = nullptr);
    virtual void paintEvent(QPaintEvent *event);
    virtual void keyPressEvent(QKeyEvent * event);
    void create_monster_1();
    void create_monster_2();
    void create_monster_3();

    void create_player();
    void murdered();//Проверка на наличие "мертвых" объектов
    void usermonster();
    void userplayer();

    void dialog();
    void Playerdialog();
signals:
    void signaltrue();
    void signalfalse();
    void signaldisplayattack(int a);
    void signalvictory(int v);

public slots:
   void slotnewgame();
   void slotpaint();
   int slotsize_x_scene();
   int slotsize_y_scene();
   void slotplayerloc(QRect* r);
   void slotplayerat(QRect* r , int* at);
   void slotnewmonster(){dialog();};
   void slotnewplayer(){Playerdialog();};

   void slotdr(){delete window;};
   void slotda(){usermonster(); delete window;};
   void slotdr2(){delete window2;};
   void slotda2(){userplayer(); delete window2;};
   void slotrandom();
   void slotsetdisplayattack(int a){signaldisplayattack(a);}
   void slotoffscene(){on_scene = false;}


};

#endif // SCENE_H
