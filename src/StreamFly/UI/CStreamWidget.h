#ifndef CSTREAMWIDGET_H
#define CSTREAMWIDGET_H

#include <QWidget>

class CStreamWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CStreamWidget(QWidget *parent = nullptr);

private:
    void        initUI();

signals:

public slots:
};

#endif // CSTREAMWIDGET_H
