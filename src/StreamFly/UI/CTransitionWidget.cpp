#include "CTransitionWidget.h"
#include "global.h"
#include <QLayout>

CTransitionWidget::CTransitionWidget(QWidget *parent) : QWidget(parent)
{
    initUI();
}

//private:
void CTransitionWidget::initUI(){
    QGridLayout *pMainLayout;

    m_pCutBtn = new CCustomButtton(STR_CUT, this);
    m_pRecordBtn = new CCustomButtton(STR_RECORD, this);
    m_pSaveBtn = new CCustomButtton(STR_SAVE, this);
    m_pMergeBtn = new CCustomButtton(STR_MERGE, this);
    m_pStreamBtn = new CCustomButtton(STR_STREAM, this);
    m_pWipeBtn = new CCustomButtton(STR_WIPE, this);
    m_pNewBtn = new CCustomButtton(STR_NEW, this);

    pMainLayout = new QGridLayout(this);
    pMainLayout->setSpacing(0);
    pMainLayout->setMargin(0);
    pMainLayout->addWidget(m_pCutBtn,       0, 0, 1, 1);
    pMainLayout->addWidget(m_pRecordBtn,    0, 1, 1, 1);
    pMainLayout->addWidget(m_pSaveBtn,      0, 2, 1, 1);
    pMainLayout->addWidget(m_pMergeBtn,     1, 0, 1, 1);
    pMainLayout->addWidget(m_pStreamBtn,    1, 1, 1, 1);
    pMainLayout->addWidget(m_pWipeBtn,      2, 0, 1, 1);
    pMainLayout->addWidget(m_pNewBtn,       2, 1, 1, 1);
    this->setLayout(pMainLayout);

    QPalette pal = this->palette();
    pal.setColor(QPalette::Window, DARK_GRAY_COLOR);
    this->setAutoFillBackground(true);
    this->setPalette(pal);
}
