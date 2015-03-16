/********************************************************************************
** Form generated from reading UI file 'monaffichage.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONAFFICHAGE_H
#define UI_MONAFFICHAGE_H

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

class Ui_monaffichage
{
public:
    QWidget *centralWidget;
    QGraphicsView *ma_vue;
    QPushButton *bton_Quitter;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *monaffichage)
    {
        if (monaffichage->objectName().isEmpty())
            monaffichage->setObjectName(QStringLiteral("monaffichage"));
        monaffichage->resize(317, 381);
        centralWidget = new QWidget(monaffichage);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ma_vue = new QGraphicsView(centralWidget);
        ma_vue->setObjectName(QStringLiteral("ma_vue"));
        ma_vue->setGeometry(QRect(20, 20, 271, 231));
        bton_Quitter = new QPushButton(centralWidget);
        bton_Quitter->setObjectName(QStringLiteral("bton_Quitter"));
        bton_Quitter->setGeometry(QRect(90, 260, 114, 33));
        monaffichage->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(monaffichage);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 317, 27));
        monaffichage->setMenuBar(menuBar);
        mainToolBar = new QToolBar(monaffichage);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        monaffichage->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(monaffichage);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        monaffichage->setStatusBar(statusBar);

        retranslateUi(monaffichage);
        QObject::connect(bton_Quitter, SIGNAL(clicked()), monaffichage, SLOT(close()));

        QMetaObject::connectSlotsByName(monaffichage);
    } // setupUi

    void retranslateUi(QMainWindow *monaffichage)
    {
        monaffichage->setWindowTitle(QApplication::translate("monaffichage", "monaffichage", 0));
        bton_Quitter->setText(QApplication::translate("monaffichage", "Quitter", 0));
    } // retranslateUi

};

namespace Ui {
    class monaffichage: public Ui_monaffichage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONAFFICHAGE_H
