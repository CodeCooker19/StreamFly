#ifndef CTITLEBAR_H
#define CTITLEBAR_H

#include <QWidget>
#include "CCustomButtton.h"
#include "../global.h"

class CTitleBar : public QWidget
{
    Q_OBJECT
public:
    explicit CTitleBar(QWidget *parent = nullptr);

private:
    void        initUI();
    MEDIA_TYPE  getMediaType(QString strExt);

private:
    CCustomButtton      *m_pAddInputBtn;
    QPoint              m_posStart;

protected:
    void    paintEvent(QPaintEvent *);
    void    mousePressEvent(QMouseEvent *event);
    void    mouseMoveEvent(QMouseEvent *event);

signals:
    void    addedMediaItem(MEDIA_TYPE, QString);
public slots:

private slots:
    void    onAddMediaFile();
};

#endif // CTITLEBAR_H
