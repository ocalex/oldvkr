#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include <QThread>
#include "chran.h"

class Controller : public QObject
{
    Q_OBJECT
    chran* m_w;// Указатель на хранимый класс
    QThread monsterThread;

   public:
   Controller(chran *worker);
  ~Controller() {
   monsterThread.quit();
   monsterThread.wait();
        }
   public slots:
      void handleResults();
   signals:
       void operate();
   };



#endif // CONTROLLER_H
