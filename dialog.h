#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QBitmap>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
    int m_life =0;
    int m_speed =0;
    int m_x = 0;
    int m_y = 0;
    int m_heig  = 0;
    int m_wigh = 0;
    int behavior =0;
    QString m_pix;

public:


    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
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
    void slotbeh(int l){behavior = l;};
    void slota(){signala();};
    void slotr(){signalr();};
signals:

void signala();
void signalr();
private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
