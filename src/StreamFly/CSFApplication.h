#ifndef CSFAPPLICATION_H
#define CSFAPPLICATION_H

#include <QObject>
#include <QApplication>
#include "CSFMainWindow.h"
#include "CSFMainDocument.h"


class CSFApplication : public QApplication
{
public:
    explicit CSFApplication(int argc, char *argv[]);
    void            setMainWindow(CSFMainWindow* pWind){m_pMainWindow = pWind;}
    CSFMainWindow*  getMainWindow(){return m_pMainWindow;}
    void            setMainDocument(CSFMainDocument* pDoc){m_pMainDoc = pDoc;}
    CSFMainDocument*    getMainDocument(){return m_pMainDoc;}

private:
    CSFMainWindow*      m_pMainWindow;
    CSFMainDocument*    m_pMainDoc;

signals:

public slots:
};

#endif // CSFAPPLICATION_H
