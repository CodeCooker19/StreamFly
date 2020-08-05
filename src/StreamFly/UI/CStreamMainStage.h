#ifndef CSTREAMMAINSTAGE_H
#define CSTREAMMAINSTAGE_H

#include <QWidget>
#include <QSlider>
#include "CStreamWidget.h"
#include "CTransitionWidget.h"
#include "CAudioWidget.h"

class CStreamMainStage : public QWidget
{
    Q_OBJECT
public:
    explicit CStreamMainStage(QWidget *parent = nullptr);

private:
    void        initUI();

private:
    CStreamWidget       *m_pPreviewWidget;
    QSlider             *m_pFadeBar;
    CStreamWidget       *m_pOutputWidget;
    CTransitionWidget   *m_pTransitionWidget;
    CAudioWidget        *m_pAudioWidget;

signals:

public slots:
    void    onSelectMediaItem(QString strUrl);
};

#endif // CSTREAMMAINSTAGE_H
