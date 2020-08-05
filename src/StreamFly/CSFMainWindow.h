#ifndef CSFMAINWINDOW_H
#define CSFMAINWINDOW_H

#include <QMainWindow>
#include "UI/CTitleBar.h"
#include "UI/CStreamMainStage.h"
#include "UI/CMediaListWidget.h"

class CSFMainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit CSFMainWindow(QWidget *parent = nullptr);

private:
    void        initUI();

private:
    CTitleBar           *m_pTitleBar;
    CStreamMainStage    *m_pStreamMainStage;
    CMediaListWidget    *m_pMediaListWidget;

signals:

public slots:
};

#endif // CSFMAINWINDOW_H
