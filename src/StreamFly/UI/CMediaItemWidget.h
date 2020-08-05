#ifndef CMEDIAITEMWIDGET_H
#define CMEDIAITEMWIDGET_H

#include <QWidget>
#include "UI/MediaWidget/CMediaWidget.h"

class CMediaItemWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CMediaItemWidget(QWidget *parent = nullptr);

private:
    void        initUI();
    void        setRoundedCorners(int radius);

private:
    CMediaWidget*       m_pMediaWidget;

signals:

public slots:
};

#endif // CMEDIAITEMWIDGET_H
