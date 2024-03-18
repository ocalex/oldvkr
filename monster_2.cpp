#include "monster_2.h"

monster_2::monster_2()
{
    QPixmap p;
    p.load ("w.bmp");
    setpixmap(p);
    setlocation(QRect(170, 50, 70, 70));
    setspeed (2) ;
    setbool (true);
    setlife(30);
    setattack(1) ;
    this->sethealth_box();

}
void monster_2::atack(){

this->m_location.setWidth(this->m_location.width()+ 20);

signalplayerloc(&this->m_location);

if(m_bool){signalplayerlat(&this->m_location, &m_attack);}

this->m_location.setWidth(this->m_location.width()- 20);

}
void monster_2::move(){


    while(m_life > 0)     {


       int x = QRandomGenerator::global()->bounded(0, xxx-m_location.width());
       int y = QRandomGenerator::global()->bounded(0, yyy-m_location.height());
       QRect vrem (QRect(x, y, m_location.width(), m_location.height()));
       signalplayerloc(&vrem);
       if(!m_bool)   {
       m_location.moveTo(x, y);
    }

       this->refresh_health();

     signalplayerloc(&m_location);
     if (m_bool)   { atack(); setattackbox(); signalpaint();
         setpeacebox();}
      signalpaint();
      QTimer t;
      t.start(300);
      while(t.remainingTime() > 1){}


                         }


    signal_end();
    is_live = false;
}
