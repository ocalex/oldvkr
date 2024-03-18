#ifndef CHRAN_H
#define CHRAN_H
#pragma once
#include <QObject>
#include <QTimer>
#include "base_class.h"

class chran : public QObject
{
    Q_OBJECT
    base_class* m_m;// Указатель на хранимый класс

public:
    explicit chran(base_class * m, QObject *parent = nullptr);
signals:
    void signal_paint_scene();
    void signal_end();
public slots:
    void move();
    void slot_end(){ signal_end();}

};

#endif // CHRAN_H
