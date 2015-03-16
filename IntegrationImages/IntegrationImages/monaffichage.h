#ifndef MONAFFICHAGE_H
#define MONAFFICHAGE_H

#include <QMainWindow>

namespace Ui {
class monaffichage;
}

class monaffichage : public QMainWindow
{
    Q_OBJECT

public:
    explicit monaffichage(QWidget *parent = 0);
    ~monaffichage();

private:
    Ui::monaffichage *ui;
};

#endif // MONAFFICHAGE_H
