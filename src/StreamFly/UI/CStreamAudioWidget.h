#ifndef CSTREAMAUDIOWIDGET_H
#define CSTREAMAUDIOWIDGET_H

#include <QWidget>
#include <QProgressBar>

class CStreamAudioWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CStreamAudioWidget(QWidget *parent = nullptr);

private:
    void        initUI();

private:
    QProgressBar        *m_pLeftAudioBar;
    QProgressBar        *m_pRightAudioBar;
signals:

public slots:

private slots:
    void    update();
};

#endif // CSTREAMAUDIOWIDGET_H
