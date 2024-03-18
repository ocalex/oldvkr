#include "monster_1.h"


monster_1::monster_1(base_class *target)
{
    m_pixmap.load ("e.bmp");
    m_location.setRect(170, 150, 70, 70);
    m_speed = 2;
    m_bool = true;
    m_target = target;
    m_life = 30;
    this->sethealth_box();

}
void monster_1::atack(){

    m_target->setlife((m_target->getlife()-2));
}

void monster_1::movetotarget(){
    if(m_location.center().x() > m_target->getlocation()->center().x() ){
    m_location.moveLeft(m_location.left()- m_speed);
}
    if( m_location.center().x() < m_target->getlocation()->center().x() ) {
    m_location.moveLeft(m_location.left()+  m_speed);}
    if( m_location.center().y() < m_target->getlocation()->center().y() ) {
    m_location.moveBottom(m_location.bottom() + m_speed);
}
    if( m_location.center().y() > m_target->getlocation()->center().y() ) {
    m_location.moveBottom(m_location.bottom() - m_speed);
}
}


void monster_1::move(){


    while(m_life > 0 && !m_target.isNull() )     {
        signalplayerloc(&m_location);

      if(!m_bool){movetotarget();}
      else {atack(); setattackbox(); signalpaint();       setpeacebox();
}

      QTimer t;
      t.start(70);
      while(t.remainingTime() > 1){}

      signalpaint();
      this->refresh_health();

                                            }

      signal_end();
      is_live = false;
}
