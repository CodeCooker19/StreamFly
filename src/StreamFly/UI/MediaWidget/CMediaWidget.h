#ifndef CMEDIAWIDGET_H
#define CMEDIAWIDGET_H

#include <QWidget>

class CMediaWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CMediaWidget(QWidget *parent = nullptr);
    void        initBackground();
    virtual void     importMedia(QString strUrl) = 0;

signals:

public slots:
};

#endif // CMEDIAWIDGET_H
