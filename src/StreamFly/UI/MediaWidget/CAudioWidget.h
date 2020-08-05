#ifndef CAUDIOWIDGET_H
#define CAUDIOWIDGET_H

#include <QWidget>
#include "CMediaWidget.h"

class CAudioWidget : public CMediaWidget
{
    Q_OBJECT
public:
    explicit CAudioWidget(QWidget *parent = nullptr);
    void     importMedia(QString strUrl);

signals:

public slots:
};

#endif // CAUDIOWIDGET_H
