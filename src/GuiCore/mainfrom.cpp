#include "mainfrom.h"
#include "ui_mainfrom.h"

MainFrom::MainFrom(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainFrom)
{
    ui->setupUi(this);
}

MainFrom::~MainFrom()
{
    delete ui;
}
