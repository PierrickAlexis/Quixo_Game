#ifndef MON_JEU_H
#define MON_JEU_H

#include <QMainWindow>

namespace Ui {
class mon_jeu;
}

class mon_jeu : public QMainWindow
{
    Q_OBJECT

public:
    explicit mon_jeu(QWidget *parent = 0);
    ~mon_jeu();
    int y; //Revoir
    int x; //Revoir

private:
    Ui::mon_jeu *ui;
};

#endif // MON_JEU_H
