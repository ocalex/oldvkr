#include "playerdialog.h"
#include "ui_playerdialog.h"

playerdialog::playerdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::playerdialog)
{
    ui->setupUi(this);
}

playerdialog::~playerdialog()
{
    delete ui;
}
