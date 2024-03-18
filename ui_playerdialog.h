/********************************************************************************
** Form generated from reading UI file 'playerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYERDIALOG_H
#define UI_PLAYERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_playerdialog
{
public:
    QDialogButtonBox *buttonBox;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *spinBox_5;
    QSpinBox *spinBox_6;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit;

    void setupUi(QDialog *playerdialog)
    {
        if (playerdialog->objectName().isEmpty())
            playerdialog->setObjectName(QString::fromUtf8("playerdialog"));
        playerdialog->resize(400, 342);
        buttonBox = new QDialogButtonBox(playerdialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        spinBox = new QSpinBox(playerdialog);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(30, 40, 42, 22));
        spinBox_2 = new QSpinBox(playerdialog);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(150, 40, 42, 22));
        spinBox_3 = new QSpinBox(playerdialog);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setGeometry(QRect(30, 110, 42, 22));
        spinBox_4 = new QSpinBox(playerdialog);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setGeometry(QRect(150, 110, 42, 22));
        label = new QLabel(playerdialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 47, 13));
        label_2 = new QLabel(playerdialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 20, 47, 13));
        label_3 = new QLabel(playerdialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 100, 47, 13));
        label_4 = new QLabel(playerdialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(150, 90, 47, 13));
        spinBox_5 = new QSpinBox(playerdialog);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setGeometry(QRect(30, 200, 42, 22));
        spinBox_6 = new QSpinBox(playerdialog);
        spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));
        spinBox_6->setGeometry(QRect(150, 200, 42, 22));
        label_5 = new QLabel(playerdialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 180, 47, 13));
        label_6 = new QLabel(playerdialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(150, 180, 47, 13));
        lineEdit = new QLineEdit(playerdialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(250, 190, 113, 20));

        retranslateUi(playerdialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), playerdialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), playerdialog, SLOT(reject()));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), playerdialog, SLOT(slotmlife(int)));
        QObject::connect(spinBox_2, SIGNAL(valueChanged(int)), playerdialog, SLOT(slotmspeed(int)));
        QObject::connect(spinBox_3, SIGNAL(valueChanged(int)), playerdialog, SLOT(slotmx(int)));
        QObject::connect(spinBox_4, SIGNAL(valueChanged(int)), playerdialog, SLOT(slotmy(int)));
        QObject::connect(buttonBox, SIGNAL(accepted()), playerdialog, SLOT(slota()));
        QObject::connect(spinBox_5, SIGNAL(valueChanged(int)), playerdialog, SLOT(slotmh(int)));
        QObject::connect(spinBox_6, SIGNAL(valueChanged(int)), playerdialog, SLOT(slotmw(int)));
        QObject::connect(lineEdit, SIGNAL(textChanged(QString)), playerdialog, SLOT(slotmpix(QString)));
        QObject::connect(buttonBox, SIGNAL(rejected()), playerdialog, SLOT(slotr()));

        QMetaObject::connectSlotsByName(playerdialog);
    } // setupUi

    void retranslateUi(QDialog *playerdialog)
    {
        playerdialog->setWindowTitle(QCoreApplication::translate("playerdialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("playerdialog", "Life", nullptr));
        label_2->setText(QCoreApplication::translate("playerdialog", "Speed", nullptr));
        label_3->setText(QCoreApplication::translate("playerdialog", "X coord", nullptr));
        label_4->setText(QCoreApplication::translate("playerdialog", "Y coord", nullptr));
        label_5->setText(QCoreApplication::translate("playerdialog", "Hight", nullptr));
        label_6->setText(QCoreApplication::translate("playerdialog", "Wight", nullptr));
        lineEdit->setText(QCoreApplication::translate("playerdialog", "spy.bmp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class playerdialog: public Ui_playerdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYERDIALOG_H
