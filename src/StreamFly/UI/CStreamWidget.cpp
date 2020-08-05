#include "CStreamWidget.h"
#include "global.h"
#include <QLayout>

CStreamWidget::CStreamWidget(QWidget *parent) : QWidget(parent)
{
    initUI();
}

//private:
void CStreamWidget::initUI(){
    QPalette pal = this->palette();
    pal.setColor(QPalette::Window, PURPLE_COLOR);
    this->setAutoFillBackground(true);
    this->setPalette(pal);
}
