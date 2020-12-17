#include "mainwindow.h"
#include <QSplashScreen>
#include <QTimer>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
//    w.show();

    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap("./IMAGES/splash.png"));
    splash->show();
    QTimer::singleShot(2500,splash,SLOT(close()));
    QTimer::singleShot(2500,&w,SLOT(show()));
    return a.exec();


    return a.exec();
}
