#ifndef DISPLAYCONTROLWIDGET_H
#define DISPLAYCONTROLWIDGET_H

#include "guicore_global.h"
#include <QWidget>


class MainFrom;

class GUICORESHARED_EXPORT DisplayControlWidget
{
public:
    DisplayControlWidget();
    ~DisplayControlWidget();


    QWidget *mainWidget();

private:
    MainFrom* m_mainWidget;
};



#endif // DISPLAYCONTROLWIDGET_H
