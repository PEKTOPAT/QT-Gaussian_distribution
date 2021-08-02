#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


float  MainWindow::myGenerateGauss(int size_distribution)
{
    timeFORrand = QTime::currentTime();
    qsrand((uint)timeFORrand.msec());
    randomNumber_1 = qrand()% int (qPow(10, NUMBER_SIGN_RAND) + 1)/qPow(10, NUMBER_SIGN_RAND) - 0.5;
    randomNumber_2 = qrand()% int (qPow(10, NUMBER_SIGN_RAND) + 1)/qPow(10, NUMBER_SIGN_RAND) - 0.5;
    qDebug() << "time2" << randomNumber;


//    float sum = 0;
//    for (int i = 0; i < size_distribution; ++i)
//        sum += (float) qrand() / RAND_MAX;
//    qDebug() << "Number = " << sum / size_distribution;
//    return sum / size_distribution;
}
