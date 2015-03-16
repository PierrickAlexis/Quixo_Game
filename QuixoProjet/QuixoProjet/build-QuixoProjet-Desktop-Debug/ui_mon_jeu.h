/********************************************************************************
** Form generated from reading UI file 'mon_jeu.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MON_JEU_H
#define UI_MON_JEU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mon_jeu
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QGraphicsView *ma_vue;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mon_jeu)
    {
        if (mon_jeu->objectName().isEmpty())
            mon_jeu->setObjectName(QStringLiteral("mon_jeu"));
        mon_jeu->resize(725, 598);
        centralWidget = new QWidget(mon_jeu);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 450, 114, 33));
        ma_vue = new QGraphicsView(centralWidget);
        ma_vue->setObjectName(QStringLiteral("ma_vue"));
        ma_vue->setGeometry(QRect(50, 20, 631, 411));
        mon_jeu->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mon_jeu);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 725, 27));
        mon_jeu->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mon_jeu);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mon_jeu->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(mon_jeu);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        mon_jeu->setStatusBar(statusBar);

        retranslateUi(mon_jeu);
        QObject::connect(pushButton, SIGNAL(clicked()), mon_jeu, SLOT(close()));

        QMetaObject::connectSlotsByName(mon_jeu);
    } // setupUi

    void retranslateUi(QMainWindow *mon_jeu)
    {
        mon_jeu->setWindowTitle(QApplication::translate("mon_jeu", "mon_jeu", 0));
        pushButton->setText(QApplication::translate("mon_jeu", "Quitter", 0));
    } // retranslateUi

};

namespace Ui {
    class mon_jeu: public Ui_mon_jeu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MON_JEU_H
