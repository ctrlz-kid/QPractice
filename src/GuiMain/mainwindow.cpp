#include "mainwindow.h"
#include "ui_mainwindow.h"


#include <QWidget>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    w = new DisplayControlWidget();
    w->mainWidget()->setParent(ui->centralWidget);
}

MainWindow::~MainWindow()
{
    delete w;
    w= 0;
    delete ui;
}
