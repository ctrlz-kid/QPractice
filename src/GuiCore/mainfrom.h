#ifndef MAINFROM_H
#define MAINFROM_H

#include <QWidget>

namespace Ui {
class MainFrom;
}

class MainFrom : public QWidget
{
    Q_OBJECT

public:
    explicit MainFrom(QWidget *parent = 0);
    ~MainFrom();

private:
    Ui::MainFrom *ui;
};

#endif // MAINFROM_H
