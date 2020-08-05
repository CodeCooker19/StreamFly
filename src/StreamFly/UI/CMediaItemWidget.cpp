#include "CMediaItemWidget.h"
#include "UI/MediaWidget/CBlankWidget.h"
#include "UI/MediaWidget/CPhotoWidget.h"
#include "UI/MediaWidget/CVideoWidget.h"
#include "UI/MediaWidget/CAudioWidget.h"
#include "UI/MediaWidget/CCameraWidget.h"
#include <QLayout>

CMediaItemWidget::CMediaItemWidget(MEDIA_TYPE type, QString strUrl, QWidget *parent) : QWidget(parent)
{
    m_pMediaWidget = NULL;
    initUI(type, strUrl);
}

//private:
void CMediaItemWidget::initUI(MEDIA_TYPE type, QString strUrl){
    QVBoxLayout *pMainLayout;

    setFixedSize(g_sizeScreen.width()/6.6, g_sizeScreen.width()/8.3);
    setRoundedCorners(WIDGET_RADIUS_SIZE);

    pMainLayout = new QVBoxLayout(this);

    switch (type) {
    case NONE_MEDIA:
        m_pMediaWidget = new CBlankWidget(this);
        break;
    case PHOTO_MEDIA:
        m_pMediaWidget = new CPhotoWidget(this);
        break;
    case VIDEO_MEDIA:
        m_pMediaWidget = new CVideoWidget(this);
        break;
    case AUDIO_MEDIA:
        m_pMediaWidget = new CAudioWidget(this);
        break;
    case CAMERA_MEDIA:
        m_pMediaWidget = new CCameraWidget(this);
        break;
    default:
        m_pMediaWidget = new CBlankWidget(this);
        break;
    }

    if(m_pMediaWidget == NULL)
        return;

    m_pMediaWidget->setFixedSize(this->width()*0.9, this->height()*0.7);
    m_pMediaWidget->importMedia(strUrl);

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
