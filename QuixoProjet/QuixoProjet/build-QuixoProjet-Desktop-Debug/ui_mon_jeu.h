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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mon_jeu
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mon_jeu)
    {
        if (mon_jeu->objectName().isEmpty())
            mon_jeu->setObjectName(QStringLiteral("mon_jeu"));
        mon_jeu->resize(400, 300);
        menuBar = new QMenuBar(mon_jeu);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        mon_jeu->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mon_jeu);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mon_jeu->addToolBar(mainToolBar);
        centralWidget = new QWidget(mon_jeu);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        mon_jeu->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(mon_jeu);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        mon_jeu->setStatusBar(statusBar);

        retranslateUi(mon_jeu);

        QMetaObject::connectSlotsByName(mon_jeu);
    } // setupUi

    void retranslateUi(QMainWindow *mon_jeu)
    {
        mon_jeu->setWindowTitle(QApplication::translate("mon_jeu", "mon_jeu", 0));
    } // retranslateUi

};

namespace Ui {
    class mon_jeu: public Ui_mon_jeu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MON_JEU_H
