#ifndef PLAYERDIALOG_H
#define PLAYERDIALOG_H

#include <QDialog>
#include <QBitmap>

namespace Ui {
class playerdialog;
}

class playerdialog : public QDialog
{
    Q_OBJECT
public:
    int m_life = 0;
    int m_speed = 0;
    int m_x = 0;
    int m_y = 0;
    int m_heig = 0;
    int m_wigh = 0;
    int behavior = 0;
    QString m_pix;

private:
    int getm_life(){return m_life;}
    int getm_speed(){return m_speed;}
    int getm_x(){return m_x;}
    int getm_y(){return m_y;}
    int get_heig(){return m_heig;}
    int getm_wigh(){return m_wigh;}
    int getgehavior(){return behavior;}
    QString gem_pix(){return m_pix;}
public slots:
    void slotmlife(int l){m_life = l;};
    void slotmspeed(int l){m_speed = l;};
    void slotmx(int l){m_x = l;};
    void slotmy(int l){m_y = l;};
    void slotmh(int l){m_heig = l;};
    void slotmw(int l){m_wigh = l;};
    void slotmpix(QString pix){m_pix = pix;};
    void slota(){signala();};
    void slotr(){signalr();};
signals:

void signala();
void signalr();
public:
     playerdialog(QWidget *parent = nullptr);
    ~playerdialog();

private:
    Ui::playerdialog *ui;
};

#endif // PLAYERDIALOG_H
