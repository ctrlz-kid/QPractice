#include "mainfrom.h"
#include "ui_mainfrom.h"
#include <QDebug>


// 静态单件方式
class ClsA
{
public:
    int x;

    static ClsA* instance();
};

ClsA* ClsA::instance()
{
    static ClsA a;
    return &a;
}


MainFrom::MainFrom(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainFrom)
{
    ui->setupUi(this);



    char ch[] = "123456";

    char* p = ch;

    char** pp = &p;

    qDebug() << ch;
    qDebug() << p;

    // 输出buffer的内存位置
    qDebug() << QString("0x%1").arg((long long)*pp, 0, 16);


    ClsA* a = ClsA::instance();
    a->x = 1;

    ClsA* b = ClsA::instance();
    int y = a->x;
    a->x = 2;

}

MainFrom::~MainFrom()
{
    delete ui;
}
