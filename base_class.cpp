#include "base_class.h"

base_class::base_class(QWidget *parent) : QWidget(parent){}

void base_class::sethealth_box(){

    m_health_box.setRect(m_location.x(), m_location.y() - 10, m_life, 15);

    m_health_pixmap.load ("drip.bmp");//Установить изображение количества жизней
                                }

void base_class::refresh_health(){

    if(m_location.y() > 10) {m_health_box.setRect(m_location.x(), m_location.y() - 10, m_life, 15);}
    else{ m_health_box.setRect(m_location.x(), m_location.bottom() + 10, m_life, 7); }

                                 }

void base_class::setattackbox(){
    m_temp = m_pixmap;
    m_pixmap.fill(Qt::red);
}

void base_class::setpeacebox(){
    m_pixmap = m_temp;
}
void base_class::paint(QPainter &f){
    f.drawPixmap(m_location, m_pixmap);
    f.drawPixmap(m_health_box, m_health_pixmap);
}
