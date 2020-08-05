#include "CStreamAudioWidget.h"
#include "global.h"
#include <QLayout>
#include <QTimer>

CStreamAudioWidget::CStreamAudioWidget(QWidget *parent) : QWidget(parent)
{
    initUI();
//    QTimer *timer = new QTimer(this);
//    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
//    timer->setInterval(3000);
//    timer->start();
//    qrand();
}

//private:
void CStreamAudioWidget::initUI(){
    QHBoxLayout *pMainLayout = new QHBoxLayout(this);
    QString style = R"(
                    QProgressBar {
                    border: 0px solid grey;
                    background-color: #39047a;
                    }

                    QProgressBar::chunk {
                    background-color:
                    qlineargradient(y0: 0, y1: 1,
                    stop: 0 green, stop: 0.5 green,
                    stop: 0.8 orange,
                    stop: 1 red);
                    })";

    m_pLeftAudioBar = new QProgressBar(this);
    m_pLeftAudioBar->setOrientation(Qt::Vertical);
    m_pLeftAudioBar->setTextVisible(false);
    m_pLeftAudioBar->setMinimum(0);
    m_pLeftAudioBar->setMaximum(100);
    m_pLeftAudioBar->setValue(100);
    m_pLeftAudioBar->setStyleSheet(style);

    m_pRightAudioBar = new QProgressBar(this);
    m_pRightAudioBar->setOrientation(Qt::Vertical);
    m_pRightAudioBar->setTextVisible(false);
    m_pRightAudioBar->setMinimum(0);
    m_pRightAudioBar->setMaximum(100);
    m_pRightAudioBar->setValue(100);
    m_pRightAudioBar->setStyleSheet(style);

    pMainLayout->setSpacing(0);
    pMainLayout->setMargin(0);
    pMainLayout->addWidget(m_pLeftAudioBar);
    pMainLayout->addWidget(m_pRightAudioBar);
    this->setLayout(pMainLayout);

    QPalette pal = this->palette();
    pal.setColor(QPalette::Window, PURPLE_COLOR);
    this->setAutoFillBackground(true);
    this->setPalette(pal);
}

//private slots:
void CStreamAudioWidget::update(){
    int nRand;
    nRand = rand()%100;
    m_pLeftAudioBar->setValue(nRand);
    m_pRightAudioBar->setValue(nRand);
    update();
}
