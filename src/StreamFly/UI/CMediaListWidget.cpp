#include "CMediaListWidget.h"
#include "../global.h"

CMediaListWidget::CMediaListWidget(QWidget *parent) : QWidget(parent)
{
    initUI();
}

void CMediaListWidget::addMediaItem(CMediaItemWidget *pMediaItem){
    int nCount, row, col;

    nCount = m_listMediaItem.count();
    row = nCount / MEDIA_ROW_COUNT;
    col = nCount % MEDIA_ROW_COUNT;
    m_pGridLayout->addWidget(pMediaItem, row, col, 1, 1);

    m_listMediaItem.append(pMediaItem);
}

//private:
void CMediaListWidget::initUI(){
    m_pGridLayout = new QGridLayout(this);
    this->setLayout(m_pGridLayout);

    for(int i=0; i<17; i++){
        CMediaItemWidget *pTempMediaItem = new CMediaItemWidget(NONE_MEDIA, "", this);
        addMediaItem(pTempMediaItem);
    }

    QPalette pal = this->palette();
    pal.setColor(QPalette::Window, LIGHT_GRAY_COLOR);
    this->setAutoFillBackground(true);
    this->setPalette(pal);
}

//public slots:
void CMediaListWidget::onAddedMediaItem(MEDIA_TYPE type, QString strUrl){
    CMediaItemWidget *pMediaItem = NULL;

    pMediaItem = new CMediaItemWidget(type, strUrl, this);
    addMediaItem(pMediaItem);
}
