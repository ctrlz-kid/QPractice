#include "displaycontrolwidget.h"
#include "mainfrom.h"

DisplayControlWidget::DisplayControlWidget()
{
    this->m_mainWidget = new MainFrom();
}

DisplayControlWidget::~DisplayControlWidget()
{
    delete m_mainWidget;
    m_mainWidget = nullptr;
}

QWidget *DisplayControlWidget::mainWidget()
{
    return m_mainWidget;
}
