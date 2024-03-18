#include "monster_3.h"


monster_3::monster_3()
{
    m_pixmap.load ("bear2.bmp");
    m_location.setRect(170, 150, 70, 70);
    m_speed = 50;
    m_bool = true;
    m_life = 5;
    this->sethealth_box();

}
QPoint monster_3::setRandom(){
    int random = QRandomGenerator::global()->bounded(0, 3);
    if(random == 1){ return QPoint(35, QRandomGenerator::global()->bounded(35, yyy)) ;}
    else if(random == 2){ return QPoint(QRandomGenerator::global()->bounded(35, xxx), 35)  ;}

    else if(random == 3){ return QPoint(xxx-35, QRandomGenerator::global()->bounded(35, yyy))  ;}

    else{ return QPoint(QRandomGenerator::global()->bounded(35, xxx), yyy-35) ;  }

}
void monster_3::atack(){
    this->m_location.setWidth(this->m_location.width()+ 20);

    signalplayerloc(&this->m_location);

    if(m_bool){signalplayerlat(&this->m_location, &m_attack);}

    this->m_location.setWidth(this->m_location.width()- 20);}

void monster_3::move(){

     m_target = setRandom();

    while(m_life > 0)     {
        signalplayerloc(&m_location);

      if(!m_bool){
    if(m_location.center().x() > m_target.x() ){
    m_location.moveLeft(m_location.left() - 1);
}
    if( m_location.center().x() < m_target.x() ) {
    m_location.moveLeft(m_location.left()+ 1);}

    if( m_location.center().y() < m_target.y() ) {
    m_location.moveBottom(m_location.bottom() + 1);
}
    if( m_location.center().y() > m_target.y() ) {
    m_location.moveBottom(m_location.bottom() - 1);
    }

                 }
     if(m_speed > 10) {m_speed -= 1;}
      if(m_location.contains(m_target)){m_target = setRandom(); m_speed = 50;}

     signalplayerloc(&m_location);
     if (m_bool)   { atack();setattackbox(); signalpaint();
         setpeacebox();}
      QTimer t;
      t.start(m_speed);
      while(t.remainingTime() > 1){}

      this->refresh_health();
      signalpaint();

                           }//end while

    signal_end();
    is_live = false;
}
