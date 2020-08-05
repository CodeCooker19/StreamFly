#include "CMediaWidget.h"
#include "../../global.h"

CMediaWidget::CMediaWidget(QWidget *parent) : QWidget(parent)
{
    initBackground();
}

void CMediaWidget::initBackground(){
    QPalette pal = this->palette();
    pal.setColor(QPalette::Window, BLACK_COLOR);
    this->setAutoFillBackground(true);
    this->setPalette(pal);
}
