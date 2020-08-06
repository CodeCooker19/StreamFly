#include "CPhotoWidget.h"
#include <QLabel>
#include <QLayout>

CPhotoWidget::CPhotoWidget(QWidget *parent) : CMediaWidget(parent)
{

}

void CPhotoWidget::importMedia(QString strUrl){
    QVBoxLayout *pMainLayout;
    QLabel *pImageLabel;
    pMainLayout = new QVBoxLayout(this);
    pImageLabel = new QLabel(this);

    pMainLayout->setMargin(0);
    pMainLayout->setSpacing(0);
    pMainLayout->addWidget(pImageLabel);
    this->setLayout(pMainLayout);

    pImageLabel->setPixmap(QPixmap(strUrl));
    pImageLabel->setScaledContents(true);
    pImageLabel->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}
