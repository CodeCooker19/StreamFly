#ifndef CMEDIAITEMWIDGET_H
#define CMEDIAITEMWIDGET_H

#include <QWidget>
#include "UI/MediaWidget/CMediaWidget.h"
#include "../global.h"

class CMediaItemWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CMediaItemWidget(MEDIA_TYPE type, QString strUrl, QWidget *parent = nullptr);

private:
    void        initUI(MEDIA_TYPE type, QString strUrl);
    void        setRoundedCorners(int radius);

private:
    CMediaWidget*       m_pMediaWidget;

signals:

public slots:
};

#endif // CMEDIAITEMWIDGET_H
