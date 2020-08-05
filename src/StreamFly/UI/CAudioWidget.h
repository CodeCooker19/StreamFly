#ifndef CAUDIOWIDGET_H
#define CAUDIOWIDGET_H

#include <QWidget>
#include <QProgressBar>

class CAudioWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CAudioWidget(QWidget *parent = nullptr);

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

#endif // CAUDIOWIDGET_H
