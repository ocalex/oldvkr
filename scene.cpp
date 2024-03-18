#include "scene.h"


scene::scene(QWidget *parent) : QWidget(parent){setAttribute(Qt::WA_StyledBackground);}

void scene::create_monster_1(){
    monster_1* m = new monster_1(m_scene[0]);
    connect(m, SIGNAL(signalpaint()), this, SLOT(slotpaint()));
    connect(m, SIGNAL(signalplayerloc(QRect*)), this, SLOT(slotplayerloc(QRect*)));
    connect(m, SIGNAL(signalplayerlat(QRect*, int*)), this, SLOT(slotplayerat(QRect*, int* )));

    connect(this, SIGNAL(signaltrue()), m, SLOT(slottrue()));
    connect(this, SIGNAL(signalfalse()), m, SLOT(slotfalse()));
    m_scene.push_back(m);

    chran * ch = new chran(m);
    Controller *c = new Controller(ch);
    connect(m, SIGNAL(signal_end()), c, SLOT(handleResults()) );
    m->setWindowFlags(Qt::WindowStaysOnTopHint);

    c->operate();


}
void scene::create_monster_2(){

    monster_2* m = new monster_2();
    m->setcoord(this->width(), this->height());
    connect(m, SIGNAL(signalpaint()), this, SLOT(slotpaint()));
    connect(m, SIGNAL(signalplayerloc(QRect*)), this, SLOT(slotplayerloc(QRect*)));
    connect(m, SIGNAL(signalplayerlat(QRect*, int*)), this, SLOT(slotplayerat(QRect*, int* )));

    connect(this, SIGNAL(signaltrue()), m, SLOT(slottrue()));
    connect(this, SIGNAL(signalfalse()), m, SLOT(slotfalse()));
    m_scene.push_back(m);

    chran * ch = new chran(m);
    Controller *c = new Controller(ch);
    connect(m, SIGNAL(signal_end()), c, SLOT(handleResults()) );
    c->operate();
}

void scene::create_monster_3(){

    monster_3* m = new monster_3();
    m->setcoord(this->width(), this->height());
    connect(m, SIGNAL(signalpaint()), this, SLOT(slotpaint()));
    connect(m, SIGNAL(signalplayerloc(QRect*)), this, SLOT(slotplayerloc(QRect*)));
    connect(m, SIGNAL(signalplayerlat(QRect*, int*)), this, SLOT(slotplayerat(QRect*, int* )));

    connect(this, SIGNAL(signaltrue()), m, SLOT(slottrue()));
    connect(this, SIGNAL(signalfalse()), m, SLOT(slotfalse()));
    m_scene.push_back(m);

    chran * ch = new chran(m);
    Controller *c = new Controller(ch);
    connect(m, SIGNAL(signal_end()), c, SLOT(handleResults()) );
    c->operate();
}
void scene::create_player(){
    player* p = new player();
    m_scene.push_front(p);
    connect(p, SIGNAL(signalpaint()), this, SLOT(slotpaint()));
    connect(p, SIGNAL(signalsize_x_scene()), this, SLOT(slotsize_x_scene()));
    connect(p, SIGNAL(signalsize_y_scene()), this, SLOT(slotsize_y_scene()));

    connect(p, SIGNAL(setdisplayattack(int)), this, SLOT(slotsetdisplayattack(int)));

    connect(p, SIGNAL(signalplayerloc(QRect*)), this, SLOT(slotplayerloc(QRect*)));
    connect(p, SIGNAL(signalplayerlat(QRect*, int*)), this, SLOT(slotplayerat(QRect*, int*)));
    connect(p, SIGNAL(signaloffscene()), this, SLOT(slotoffscene()));



    connect(this, SIGNAL(signaltrue()), p, SLOT(slottrue()));
    connect(this, SIGNAL(signalfalse()), p, SLOT(slotfalse()));
    on_scene = true;
}


 void scene::paintEvent(QPaintEvent *event){

     murdered();
    QPainter g (this);

    for(base_class* f: m_scene) { f->paint(g);}

  }
 void scene::slotnewgame(){


    // std::for_each(m_scene.begin(), m_scene.end(), [](base_class* m){  m->setislive();});
    this->murdered();
     m_victory = 0;

     setFocus();

     create_player();


}

 void scene::slotpaint(){  this->repaint(); }

  void scene::keyPressEvent(QKeyEvent * event){

     player* d = static_cast<player*>(m_scene[0]);
     d->keyPressEvent(event);
     this->repaint();
 }

  int scene::slotsize_x_scene(){ return this->width();}

  int scene::slotsize_y_scene(){ return this->height();}

  void scene::slotplayerloc(QRect* r){

      for(auto monstr: m_scene){
          if (r->intersects(*monstr->getlocation()) && r != (monstr->getlocation()))
          {signaltrue(); return;}

                               }
        signalfalse();

  }

  void scene::slotplayerat(QRect* r, int* at){//Произведение атаки


      m_mutex.lock();
      for(auto monstr: m_scene){
          if (r->intersects(*monstr->getlocation()) && r != (monstr->getlocation()))
          {monstr->setlife(monstr->getlife()-(*at)) ;
          }

      }
      m_mutex.unlock();
  }
  void scene::murdered(){


     m_mutex.lock();

     base_class** firsttoremove = std::stable_partition(m_scene.begin(), m_scene.end(),[](base_class* m)
     {
            return m->getislive();});


     std::for_each(firsttoremove, m_scene.end(), [](base_class* m){  m->deleteLater();});

     std::for_each(firsttoremove, m_scene.end(), [](base_class* m){ m = nullptr;});

     m_scene.erase(firsttoremove, m_scene.end());

      if(m_scene.size() < 2 && on_scene){ slotrandom();}

      m_mutex.unlock();
  }

  void scene::usermonster(){
      user_monster* m = new user_monster();

      m->setspeed(window->getm_speed());
      m->setlife(window->getm_life());
      m->setpixmap(window->gem_pix());
      m->setlocation(QRect(window->getm_x(), window->getm_y(), window->getm_wigh(), window->getm_wigh()));
      m->setbehav(window->getgehavior());
      connect(m, SIGNAL(signalpaint()), this, SLOT(slotpaint()));
      connect(m, SIGNAL(signalplayerloc(QRect*)), this, SLOT(slotplayerloc(QRect*)));
      connect(this, SIGNAL(signaltrue()), m, SLOT(slottrue()));
      connect(this, SIGNAL(signalfalse()), m, SLOT(slotfalse()));
      m_scene.push_back(m);



      chran * ch = new chran(m);
      Controller *c = new Controller(ch);
      connect(m, SIGNAL(signal_end()), c, SLOT(handleResults()) );
      c->operate();
  }
  void scene::dialog(){
       window = new Dialog ;
       connect(window, SIGNAL(signala()), this, SLOT(slotda()));
       connect(window, SIGNAL(signalr()), this, SLOT(slotdr()));

       window->show();
  }
  void scene::Playerdialog(){
       window2 = new playerdialog() ;
       connect(window2, SIGNAL(signala()), this, SLOT(slotda2()));
       connect(window2, SIGNAL(signalr()), this, SLOT(slotdr2()));

       window2->show();

  }
  void scene::userplayer(){
      player* m = new player();
      m->setspeed(window->getm_speed());
      m->setlife(window->getm_life());
      m->setpixmap(window->gem_pix());
      m->setlocation(QRect(window->getm_x(), window->getm_y(), window->getm_wigh(), window->getm_wigh()));

      connect(m, SIGNAL(signalpaint()), this, SLOT(slotpaint()));
      connect(m, SIGNAL(signalsize_x_scene()), this, SLOT(slotsize_x_scene()));
      connect(m, SIGNAL(signalsize_y_scene()), this, SLOT(slotsize_y_scene()));
      connect(m, SIGNAL(signalplayerloc(QRect*)), this, SLOT(slotplayerloc(QRect*)));
      connect(m, SIGNAL(signalplayerlat(QRect*, int*)), this, SLOT(slotplayerat(QRect*, int*)));

      connect(this, SIGNAL(signaltrue()), m, SLOT(slottrue()));
      connect(this, SIGNAL(signalfalse()), m, SLOT(slotfalse()));
      m_scene.push_front(m);


  }

  void scene::slotrandom(){
      int random = QRandomGenerator::global()->bounded(0, 3);


      if(random == 0){create_monster_1();

           ++m_victory; signalvictory(m_victory);}


      else if(random == 1){create_monster_2();
          m_scene[0]->setnumberattack(7);}


      else{ create_monster_3(); }
  }
