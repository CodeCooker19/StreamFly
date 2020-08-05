#ifndef CTITLEBAR_H
#define CTITLEBAR_H

#include <QWidget>
#include "CCustomButtton.h"

class CTitleBar : public QWidget
{
    Q_OBJECT
public:
    explicit CTitleBar(QWidget *parent = nullptr);

private:
    void        initUI();

private:
    CCustomButtton      *m_pAddInputBtn;
    QPoint              m_posStart;

protected:
    void    paintEvent(QPaintEvent *);
    void    mousePressEvent(QMouseEvent *event);
    void    mouseMoveEvent(QMouseEvent *event);

signals:
    void    addMediaItem(QString);
public slots:

private slots:
    void    onAddMediaFile();
};

#endif // CTITLEBAR_H
