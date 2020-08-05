#ifndef CVIDEOWIDGET_H
#define CVIDEOWIDGET_H

#include <QWidget>
#include "CMediaWidget.h"

class CVideoWidget : public CMediaWidget
{
    Q_OBJECT
public:
    explicit CVideoWidget(QWidget *parent = nullptr);
    void     importMedia(QString strUrl);
signals:

public slots:
};

#endif // CVIDEOWIDGET_H
