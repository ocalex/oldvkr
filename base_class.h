#ifndef BASE_CLASS_H
#define BASE_CLASS_H
#pragma once
#include <QWidget>
#include <QPainter>
#include <QRect>
#include <QRandomGenerator>
#include <QTimer>

class base_class : public QWidget
{
    Q_OBJECT
protected:
    int m_life = 1;// Количество жизней объекта
    int m_speed = 1;// Скорость объекта
    int m_attack = 3;// Количество атак которые може совершить объект
    QPixmap m_pixmap;// Изображение объекта
    QRect m_location;// Местоположение объекта
    QRect m_health_box;// Местоположение хранилищаизображения жизней объекта
    QPixmap m_health_pixmap;
    QPixmap m_temp;
    bool is_live = true;// Может ли объект действовать


    bool m_bool;
public:

  void setlife(int life){m_life = life;}
  void setspeed(int speed){m_speed = speed;}
  void setattack(int attack){ m_attack= attack;}
  void setpixmap(QPixmap pix){m_pixmap= pix;}
  void setlocation(QRect location){m_location = location;}
  void setbool(int boool){m_bool = boool;}
  void sethealth_box();
  void setislive(){is_live = false;}
  void setattackbox();
  void setpeacebox();



  bool getbool(){ return m_bool; }
  bool getislive(){ return is_live; }
  int getlife(){ return m_life;}
  int getspeed(){return m_speed;}
  int getattack(){ return m_attack;}
  QPixmap getpixmap(){return m_pixmap;}
  QRect* getlocation(){return &m_location;}


  void refresh_health();//Обновление здоровья объекта


  explicit base_class(QWidget *parent = nullptr);

  void paint(QPainter &f);
  virtual void keyPressEvent(QKeyEvent * event)=0;
  virtual void move() = 0;
  virtual void atack() = 0;
  virtual void setnumberattack(int a){};

 ~base_class(){};

protected:
    bool stopmove();

public: signals:
   void signalpaint();
   int signalsize_x_scene();
   int signalsize_y_scene();
   void signalmoveend();
   void signalplayerloc(QRect* r);
   void signalplayerlat(QRect* r , int * at);
   void setdisplayattack(int a);
   void signaloffscene();



   void signal_end();
   public slots:
   void slottrue(){m_bool = true;}
   void slotfalse(){m_bool = false;}


};

#endif // BASE_CLASS_H
