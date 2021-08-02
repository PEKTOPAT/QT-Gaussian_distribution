#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.myGenerateGauss(20);
    w.show();

    return a.exec();
}
