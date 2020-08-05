#ifndef CMEDIAITEMWIDGET_H
#define CMEDIAITEMWIDGET_H

#include <QWidget>

class CMediaItemWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CMediaItemWidget(QWidget *parent = nullptr);

private:
    void        initUI();
    void        setRoundedCorners(int radius);

signals:

public slots:
};

#endif // CMEDIAITEMWIDGET_H
