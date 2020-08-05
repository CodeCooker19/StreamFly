#include "CMediaItemWidget.h"
#include "../global.h"
#include "UI/MediaWidget/CPhotoWidget.h"
#include <QLayout>

CMediaItemWidget::CMediaItemWidget(QWidget *parent) : QWidget(parent)
{
    initUI();
}

//private:
void CMediaItemWidget::initUI(){
    QVBoxLayout *pMainLayout;

    setFixedSize(g_sizeScreen.width()/6.6, g_sizeScreen.width()/8.3);
    setRoundedCorners(WIDGET_RADIUS_SIZE);

    pMainLayout = new QVBoxLayout(this);
    m_pMediaWidget = new CPhotoWidget(this);
    m_pMediaWidget->setFixedSize(this->width()*0.9, this->height()*0.7);
    pMainLayout->addWidget(m_pMediaWidget);
    this->setLayout(pMainLayout);

    QPalette pal = this->palette();
    pal.setColor(QPalette::Window, PURPLE_COLOR);
    this->setAutoFillBackground(true);
    this->setPalette(pal);
}

void CMediaItemWidget::setRoundedCorners(int radius) {
    QRegion region(0, 0, width(), height(), QRegion::Rectangle);

    // top left
    QRegion round (0, 0, 2*radius, 2*radius, QRegion::Ellipse);
    QRegion corner(0, 0, radius, radius, QRegion::Rectangle);
    region = region.subtracted(corner.subtracted(round));

    // top right
    round = QRegion(width()-2*radius, 0, 2*radius, 2*radius, QRegion::Ellipse);
    corner = QRegion(width()-radius, 0, radius, radius, QRegion::Rectangle);
    region = region.subtracted(corner.subtracted(round));

    // bottom right
    round = QRegion(width()-2*radius, height()-2*radius, 2*radius, 2*radius, QRegion::Ellipse);
    corner = QRegion(width()-radius, height()-radius, radius, radius, QRegion::Rectangle);
    region = region.subtracted(corner.subtracted(round));

    // bottom left
    round = QRegion(0, height()-2*radius, 2*radius, 2*radius, QRegion::Ellipse);
    corner = QRegion(0, height()-radius, radius, radius, QRegion::Rectangle);
    region = region.subtracted(corner.subtracted(round));

    setMask(region);
}
