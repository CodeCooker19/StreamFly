#ifndef CCAMERAWIDGET_H
#define CCAMERAWIDGET_H

#include <QWidget>
#include "CMediaWidget.h"

class CCameraWidget : public CMediaWidget
{
    Q_OBJECT
public:
    explicit CCameraWidget(QWidget *parent = nullptr);
    void     importMedia(QString strUrl);

signals:

public slots:
};

#endif // CCAMERAWIDGET_H
