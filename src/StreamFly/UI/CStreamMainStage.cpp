#include "CStreamMainStage.h"
#include "global.h"
#include <QLayout>

CStreamMainStage::CStreamMainStage(QWidget *parent) : QWidget(parent)
{
    initUI();
}

//private:
void CStreamMainStage::initUI(){
    QHBoxLayout *pMainLayout;

    QWidget *pStreamWidget = new QWidget(this);
    QHBoxLayout *pStreamLayout = new QHBoxLayout(this);
    m_pPreviewWidget = new CStreamWidget(this);
    m_pPreviewWidget->setFixedWidth(g_sizeScreen.width()/4);

    m_pFadeBar = new QSlider(this);
    m_pFadeBar->setOrientation(Qt::Vertical);
    m_pFadeBar->setFixedWidth(g_sizeScreen.width()/12);
    m_pFadeBar->setMinimum(FADE_BAR_MIN);
    m_pFadeBar->setMaximum(FADE_BAR_MAX);

    QString style = R"(
                    QSlider::groove:vertical {
                    background:  #39047a;
                    width: 28px;
                    }

                    QSlider::sub-page:vertical {
                    background: #39047a;
                    width:: 0px;
                    }

                    QSlider::add-page:vertical {
                    background: #39047a;
                    width: 0px;
                    }

                    QSlider::handle:vertical {
                    background: url(:/src/scrollbar.png);
                    width: 70px;
                    height: 11px;
                    margin: 0 -20px 0 -20px
                    }

                    QSlider::handle:vertical:hover {
                    background: #515052;
                    })";

    m_pFadeBar->setStyleSheet(style);

    m_pOutputWidget = new CStreamWidget(this);
    m_pOutputWidget->setFixedWidth(g_sizeScreen.width()/4);

    pStreamLayout->setSpacing(0);
    pStreamLayout->addWidget(m_pPreviewWidget);
    pStreamLayout->addWidget(m_pFadeBar);
    pStreamLayout->addWidget(m_pOutputWidget);
    pStreamWidget->setLayout(pStreamLayout);

    m_pTransitionWidget = new CTransitionWidget(this);
    m_pTransitionWidget->setFixedWidth(g_sizeScreen.width()/3);

    m_pAudioWidget = new CAudioWidget(this);
    m_pAudioWidget->setFixedWidth(g_sizeScreen.width()/15);

    pMainLayout = new QHBoxLayout(this);
    pMainLayout->setSpacing(0);
    pMainLayout->setMargin(0);
    pMainLayout->addStretch();
    pMainLayout->addWidget(pStreamWidget);
    pMainLayout->addStretch();
    pMainLayout->addWidget(m_pTransitionWidget);
    pMainLayout->addWidget(m_pAudioWidget);
    this->setLayout(pMainLayout);

    QPalette pal = this->palette();
    pal.setColor(QPalette::Window, Qt::white);
    this->setAutoFillBackground(true);
    this->setPalette(pal);
}

//public slots:
void CStreamMainStage::onSelectMediaItem(QString strUrl){

}
