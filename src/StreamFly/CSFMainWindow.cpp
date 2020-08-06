#include "CSFMainWindow.h"
#include "global.h"
#include <QLayout>
#include <QScrollArea>

//public:
CSFMainWindow::CSFMainWindow(QWidget *parent) : QMainWindow(parent)
{
    initUI();

    connect(m_pTitleBar, SIGNAL(addedMediaItem(MEDIA_TYPE, QString)), m_pMediaListWidget, SLOT(onAddedMediaItem(MEDIA_TYPE, QString)));
    connect(m_pMediaListWidget, SIGNAL(selectMediaItem(QString)), m_pStreamMainStage, SLOT(onSelectMediaItem(QString)));
}

//private:
void CSFMainWindow::initUI(){
    QWidget *pMainWidget;
    QVBoxLayout *pMainLayout;
    QScrollArea *pMediaListScrollArea;

    pMainWidget = new QWidget(this);
    pMainLayout = new QVBoxLayout(this);

    m_pTitleBar = new CTitleBar(this);
    m_pTitleBar->setFixedSize(g_sizeScreen.width(), g_sizeScreen.height() * 3/30);

    m_pStreamMainStage = new CStreamMainStage(this);
    m_pStreamMainStage->setFixedSize(g_sizeScreen.width(), g_sizeScreen.height() * 10/30);

    pMediaListScrollArea = new QScrollArea(this);
    pMediaListScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    pMediaListScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    pMediaListScrollArea->setFixedSize(g_sizeScreen.width(), g_sizeScreen.height() * 17/30);

    m_pMediaListWidget = new CMediaListWidget(this);
    m_pMediaListWidget->setFixedWidth(g_sizeScreen.width());
    pMediaListScrollArea->setWidget(m_pMediaListWidget);
    pMediaListScrollArea->setWidgetResizable(true);

    pMainLayout->setSpacing(0);
    pMainLayout->setMargin(0);
    pMainLayout->addWidget(m_pTitleBar);
    pMainLayout->addWidget(m_pStreamMainStage);
    pMainLayout->addWidget(pMediaListScrollArea);

    pMainWidget->setLayout(pMainLayout);
    this->setCentralWidget(pMainWidget);

    this->centralWidget();
}
