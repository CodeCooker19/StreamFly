#ifndef CBLANKWIDGET_H
#define CBLANKWIDGET_H

#include <QWidget>
#include "CMediaWidget.h"

class CBlankWidget : public CMediaWidget
{
    Q_OBJECT
public:
    explicit CBlankWidget(QWidget *parent = nullptr);
    void     importMedia(QString strUrl);

signals:

public slots:
};

#endif // CBLANKWIDGET_H
