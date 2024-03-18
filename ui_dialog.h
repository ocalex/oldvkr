/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QSpinBox *spinBox_2;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QSpinBox *spinBox_3;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QSpinBox *spinBox_4;
    QWidget *widget4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QSpinBox *spinBox_5;
    QWidget *widget5;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QSpinBox *spinBox_6;
    QWidget *widget6;
    QVBoxLayout *verticalLayout_7;
    QComboBox *comboBox;
    QLabel *label_7;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(200, 230, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 40, 35, 41));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setValue(10);

        verticalLayout->addWidget(spinBox);

        widget1 = new QWidget(Dialog);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(90, 40, 35, 41));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        spinBox_2 = new QSpinBox(widget1);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setValue(1);

        verticalLayout_2->addWidget(spinBox_2);

        widget2 = new QWidget(Dialog);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(10, 140, 38, 41));
        verticalLayout_3 = new QVBoxLayout(widget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        spinBox_3 = new QSpinBox(widget2);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setValue(90);

        verticalLayout_3->addWidget(spinBox_3);

        widget3 = new QWidget(Dialog);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(90, 140, 38, 41));
        verticalLayout_4 = new QVBoxLayout(widget3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_4->addWidget(label_4);

        spinBox_4 = new QSpinBox(widget3);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setValue(90);

        verticalLayout_4->addWidget(spinBox_4);

        widget4 = new QWidget(Dialog);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        widget4->setGeometry(QRect(10, 220, 35, 41));
        verticalLayout_5 = new QVBoxLayout(widget4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_5->addWidget(label_5);

        spinBox_5 = new QSpinBox(widget4);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setValue(80);

        verticalLayout_5->addWidget(spinBox_5);

        widget5 = new QWidget(Dialog);
        widget5->setObjectName(QString::fromUtf8("widget5"));
        widget5->setGeometry(QRect(90, 220, 35, 41));
        verticalLayout_6 = new QVBoxLayout(widget5);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_6->addWidget(label_6);

        spinBox_6 = new QSpinBox(widget5);
        spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));
        spinBox_6->setValue(80);

        verticalLayout_6->addWidget(spinBox_6);

        widget6 = new QWidget(Dialog);
        widget6->setObjectName(QString::fromUtf8("widget6"));
        widget6->setGeometry(QRect(190, 60, 135, 121));
        verticalLayout_7 = new QVBoxLayout(widget6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(widget6);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout_7->addWidget(comboBox);

        label_7 = new QLabel(widget6);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_7->addWidget(label_7);

        lineEdit = new QLineEdit(widget6);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_7->addWidget(lineEdit);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), Dialog, SLOT(slotmlife(int)));
        QObject::connect(spinBox_2, SIGNAL(valueChanged(int)), Dialog, SLOT(slotmspeed(int)));
        QObject::connect(spinBox_3, SIGNAL(valueChanged(int)), Dialog, SLOT(slotmx(int)));
        QObject::connect(spinBox_4, SIGNAL(valueChanged(int)), Dialog, SLOT(slotmy(int)));
        QObject::connect(spinBox_6, SIGNAL(valueChanged(int)), Dialog, SLOT(slotmh(int)));
        QObject::connect(spinBox_5, SIGNAL(valueChanged(int)), Dialog, SLOT(slotmw(int)));
        QObject::connect(lineEdit, SIGNAL(textChanged(QString)), Dialog, SLOT(slotmpix(QString)));
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(slota()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(slotr()));
        QObject::connect(comboBox, SIGNAL(currentIndexChanged(int)), Dialog, SLOT(slotbeh(int)));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "life", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "speed", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "x coord", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "y coord", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "wight", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "height", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Dialog", "angry", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Dialog", "blind", nullptr));

        label_7->setText(QCoreApplication::translate("Dialog", "Name image", nullptr));
        lineEdit->setText(QCoreApplication::translate("Dialog", "e.bmp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
