#ifndef CMEDIALISTWIDGET_H
#define CMEDIALISTWIDGET_H

#include <QWidget>
#include <QLayout>
#include "CMediaItemWidget.h"
#include "../global.h"

class CMediaListWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CMediaListWidget(QWidget *parent = nullptr);
    void        addMediaItem(CMediaItemWidget *pMediaItem);

private:
    void        initUI();

private:
    QGridLayout     *m_pGridLayout;
    QList<CMediaItemWidget *> m_listMediaItem;

signals:
    void    selectMediaItem(QString);

public slots:
    void    onAddedMediaItem(MEDIA_TYPE type, QString strUrl);
};

#endif // CMEDIALISTWIDGET_H
