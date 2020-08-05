#ifndef CTRANSITIONWIDGET_H
#define CTRANSITIONWIDGET_H

#include <QWidget>
#include "CCustomButtton.h"

class CTransitionWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CTransitionWidget(QWidget *parent = nullptr);

private:
    void        initUI();

private:
    CCustomButtton      *m_pCutBtn;
    CCustomButtton      *m_pRecordBtn;
    CCustomButtton      *m_pSaveBtn;
    CCustomButtton      *m_pMergeBtn;
    CCustomButtton      *m_pStreamBtn;
    CCustomButtton      *m_pWipeBtn;
    CCustomButtton      *m_pNewBtn;

signals:

public slots:
};

#endif // CTRANSITIONWIDGET_H
