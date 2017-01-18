/********************************************************************************
** Form generated from reading UI file 'fenetre.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETRE_H
#define UI_FENETRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Fenetre
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *global;
    QLCDNumber *lcd_humiditee;
    QLCDNumber *lcd_temperature;
    QPushButton *bouton_temperature;
    QPushButton *bouton_humiditee;

    void setupUi(QWidget *Fenetre)
    {
        if (Fenetre->objectName().isEmpty())
            Fenetre->setObjectName(QStringLiteral("Fenetre"));
        Fenetre->resize(817, 421);
        gridLayoutWidget = new QWidget(Fenetre);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 661, 381));
        global = new QGridLayout(gridLayoutWidget);
        global->setSpacing(6);
        global->setContentsMargins(11, 11, 11, 11);
        global->setObjectName(QStringLiteral("global"));
        global->setContentsMargins(0, 0, 0, 0);
        lcd_humiditee = new QLCDNumber(gridLayoutWidget);
        lcd_humiditee->setObjectName(QStringLiteral("lcd_humiditee"));

        global->addWidget(lcd_humiditee, 5, 0, 1, 1);

        lcd_temperature = new QLCDNumber(gridLayoutWidget);
        lcd_temperature->setObjectName(QStringLiteral("lcd_temperature"));

        global->addWidget(lcd_temperature, 3, 0, 1, 1);

        bouton_temperature = new QPushButton(gridLayoutWidget);
        bouton_temperature->setObjectName(QStringLiteral("bouton_temperature"));
        bouton_temperature->setFlat(true);

        global->addWidget(bouton_temperature, 0, 0, 1, 1);

        bouton_humiditee = new QPushButton(gridLayoutWidget);
        bouton_humiditee->setObjectName(QStringLiteral("bouton_humiditee"));
        bouton_humiditee->setFlat(true);

        global->addWidget(bouton_humiditee, 4, 0, 1, 1);


        retranslateUi(Fenetre);

        QMetaObject::connectSlotsByName(Fenetre);
    } // setupUi

    void retranslateUi(QWidget *Fenetre)
    {
        Fenetre->setWindowTitle(QApplication::translate("Fenetre", "Fenetre", 0));
        bouton_temperature->setText(QApplication::translate("Fenetre", "Temperature:", 0));
        bouton_humiditee->setText(QApplication::translate("Fenetre", "Humidit\303\251e", 0));
    } // retranslateUi

};

namespace Ui {
    class Fenetre: public Ui_Fenetre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETRE_H
