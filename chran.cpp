#include "chran.h"


chran::chran(base_class * m, QObject *parent) : QObject(parent)

{  m_m = m;}


void chran::move(){ m_m->move();}

