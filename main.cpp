#include "mainwindow.h"
#include <QPushButton>
#include <QPropertyAnimation>
#include <QApplication>
#include <QParallelAnimationGroup>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
