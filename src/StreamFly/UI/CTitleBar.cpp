#include "CTitleBar.h"
#include "global.h"
#include <QLayout>
#include <QLabel>
#include <QMouseEvent>
#include <QPainter>
#include <QStyleOption>
#include <QFileDialog>
#include <QDebug>

CTitleBar::CTitleBar(QWidget *parent) : QWidget(parent)
{
    initUI();
    connect(m_pAddInputBtn, SIGNAL(clicked(bool)), this, SLOT(onAddMediaFile()));
}

//private:
void CTitleBar::initUI(){
    QHBoxLayout *pMainLayout;
    QLabel *pTitleLabel;
    QFont font(STR_MAIN_FONT_FAMILY, TITLE_FONT_SIZE);

    pTitleLabel = new QLabel(STR_TITLE, this);
    pTitleLabel->setFont(font);

    QPalette palette;
    palette.setColor(QPalette::Window, Qt::transparent);
    palette.setColor(QPalette::WindowText, Qt::white);

    pTitleLabel->setAutoFillBackground(true);
    pTitleLabel->setPalette(palette);

    m_pAddInputBtn = new CCustomButtton(STR_ADD_INPUT, this);
    m_pAddInputBtn->setFixedSize(QSize(g_sizeScreen.width()/9, g_sizeScreen.width()/37.5));
    m_pAddInputBtn->setFont(QFont(STR_MAIN_FONT_FAMILY, INPUT_BT_FONT_SIZE));

    pMainLayout = new QHBoxLayout(this);
    pMainLayout->setSpacing(0);
    pMainLayout->setMargin(0);
    pMainLayout->addSpacing(g_sizeScreen.width()/80);
    pMainLayout->addWidget(pTitleLabel);
    pMainLayout->addStretch();
    pMainLayout->addWidget(m_pAddInputBtn);
    pMainLayout->addSpacing(g_sizeScreen.width()/80);
    this->setLayout(pMainLayout);
}

MEDIA_TYPE CTitleBar::getMediaType(QString strExt){
    MEDIA_TYPE type = NONE_MEDIA;
    if(STR_PHOTO_TYPE.contains(strExt))
        type = PHOTO_MEDIA;
    else if(STR_VIDEO_TYPE.contains(strExt))
        type = VIDEO_MEDIA;
    else if(STR_AUDIO_TYPE.contains(strExt))
        type = AUDIA_MEDIA;

    return type;
}

//protected:
void CTitleBar::paintEvent(QPaintEvent *)
{
    QStyleOption opt;
    opt.init(this);
    QPainter painter(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &painter, this);
}

void CTitleBar::mousePressEvent(QMouseEvent *event)
{
    m_posStart = event->pos();
    QWidget::mousePressEvent(event);
}

void CTitleBar::mouseMoveEvent(QMouseEvent *event)
{
    QPoint delta = event->pos() - m_posStart;
    QWidget * w = window();
    if(w)
        w->move(w->pos() + delta);
    QWidget::mouseMoveEvent(event);
}

//private slots:
void CTitleBar::onAddMediaFile(){
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Media File"),
                                                      "/home",
                                                      STR_PHOTO_TYPE + ";;" + STR_VIDEO_TYPE + ";;" + STR_AUDIO_TYPE);
//    QFileInfo fi(fileName);
//    QString ext = fi.completeSuffix();
    MEDIA_TYPE type = getMediaType(QFileInfo(fileName).completeSuffix());
    qDebug()<< "type:" << type;
    emit(addedMediaItem(type, fileName));
}
