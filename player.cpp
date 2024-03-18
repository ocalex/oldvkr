#include "player.h"


player::player()
{
     m_pixmap.load ("spy.bmp");
     m_pixmap.setMask(QBitmap("spy.bmp"));
     m_location.setRect(50, 50, 40, 40);
     m_speed = 10;
     m_life = 50;
     m_attack = 20;
     this->sethealth_box();
     m_number_attack = 20;
    setdisplayattack(m_number_attack);


}


void player::setnumberattack(int a){ m_number_attack = a; }


 void player::keyPressEvent(QKeyEvent * event){



 switch(event->key()){

  case Qt::Key_Left:

       if(m_location.left() > 0 )
       m_location.moveLeft(m_location.left()-m_speed);
       signalplayerloc(&m_location);

       if(m_bool){m_location.moveLeft(m_location.left()+m_speed);}
       break;

  case Qt::Key_Right:

      if(m_location.right() < (signalsize_x_scene()-m_speed))
      m_location.moveLeft(m_location.left()+m_speed);
      signalplayerloc(&m_location);
      if(m_bool){m_location.moveLeft(m_location.left()-m_speed);}
      break;

   case Qt::Key_Down:

      if(m_location.bottom() < (signalsize_y_scene()- m_speed) )
      m_location.moveBottom(m_location.bottom() + m_speed);
      signalplayerloc(&m_location);

      if(m_bool){m_location.moveBottom(m_location.bottom()-m_speed);}
      break;
   case Qt::Key_Up:

      if(m_location.top() > 0 )
      m_location.moveBottom(m_location.bottom() - m_speed);
      signalplayerloc(&m_location);
      if(m_bool){m_location.moveBottom(m_location.bottom()+m_speed);}
      break;

    case Qt::Key_Space:
     atack();
    break;
    default:
    QWidget::keyPressEvent(event);
    }

 this->refresh_health();
 if(m_life <= 0){is_live = false;}
 signalpaint();


    }


 void player::atack(){

     if(m_number_attack){

     setattackbox();
     signalpaint();
     QTimer t;

     t.start(30);
     while(t.remainingTime() > 1){}

     int l = m_life;
     this->m_location.setHeight(this->m_location.height()+20);
     this->m_location.setWidth(this->m_location.width()+ 20);

     signalplayerloc(&this->m_location);

    if(m_bool){signalplayerlat(&this->m_location, &m_attack);}

    this->m_location.setHeight(this->m_location.height()-20);
    this->m_location.setWidth(this->m_location.width()- 20);

    m_life = l;

    --m_number_attack;
   setdisplayattack(m_number_attack);
   setpeacebox();
     }

 }


