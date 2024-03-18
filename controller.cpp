#include "controller.h"

Controller::Controller(chran* worker) //: QObject(parent)
{
    m_w = worker;
    worker->moveToThread(&monsterThread);
    connect(&monsterThread, &QThread::finished, worker, &QObject::deleteLater);
    connect(this, &Controller::operate, worker, &chran::move);
    connect(worker, &chran::signal_end, this, &Controller::handleResults);
                monsterThread.start();

}
void Controller::handleResults(){


  monsterThread.exit();

  this->deleteLater();

  m_w->deleteLater();

}
