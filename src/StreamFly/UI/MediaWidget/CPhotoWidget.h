#ifndef CPHOTOWIDGET_H
#define CPHOTOWIDGET_H

#include <QWidget>
#include "CMediaWidget.h"

class CPhotoWidget : public CMediaWidget
{
    Q_OBJECT
public:
    explicit CPhotoWidget(QWidget *parent = nullptr);
    void     importMedia(QString strUrl);
signals:

public slots:
};

#endif // CPHOTOWIDGET_H
