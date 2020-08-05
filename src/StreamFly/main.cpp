#include "global.h"
#include "CSFApplication.h"
#include "CSFMainWindow.h"
#include <QScreen>

QSize   g_sizeScreen;
CSFApplication  *g_pApp;

int main(int argc, char *argv[])
{
    CSFApplication a(argc, argv);
    g_pApp = &a;

    QSize sizeScreen;
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect  screenGeometry = screen->geometry();
    sizeScreen = screenGeometry.size();

    if(sizeScreen.width() > DEFAULT_SCREEN_WIDTH){
        g_sizeScreen =  QSize(DEFAULT_SCREEN_WIDTH, DEFAULT_SCREEN_WIDTH/2);
    }
    else {
        g_sizeScreen =  QSize(MIN_SCREEN_WIDTH, MIN_SCREEN_WIDTH/2);
    }


    QPalette pal = a.palette();
    pal.setColor(QPalette::Window, PURPLE_COLOR);
    a.setPalette(pal);

    CSFMainWindow w;
    g_pApp->setMainWindow(&w);
    w.setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    w.resize(g_sizeScreen);
//    w.showFullScreen();
    w.show();

    return a.exec();
}
