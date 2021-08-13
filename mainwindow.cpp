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


QVector <QVector<qint32> > MainWindow::myGenerateGauss(int MSG_len, double DataSize_MByte)
{
    int number_distribut = DataSize_MByte * (qPow(10, 6))/(sizeof(qint32));
    int number_vector = (number_distribut / MSG_len) + 1;
    timeFORrand = QTime::currentTime();
    qsrand((uint)timeFORrand.msec());
    while(myQVectorGauss.size() != number_vector)
    {
        while(arrayGauss.size() != MSG_len)
        {
            randomNumber_x = 2* (qrand()% int (qPow(10, NUMBER_SIGN_RAND) + 1)/qPow(10, NUMBER_SIGN_RAND)) - 1;
            randomNumber_y = 2* (qrand()% int (qPow(10, NUMBER_SIGN_RAND) + 1)/qPow(10, NUMBER_SIGN_RAND)) - 1;
            //qDebug() << randomNumber_x << randomNumber_y;
            float s =  qPow(randomNumber_x, 2) + qPow(randomNumber_y, 2);
            if (s > 0 && s <= 1)
            {
                numberGauss_z0 = randomNumber_x * sqrt(-2*log(s)/s);
                numberGauss_z1 = randomNumber_y * sqrt(-2*log(s)/s);
                //qDebug() << numberGauss_z0 << numberGauss_z1;
                arrayGauss.append(numberGauss_z0 * qPow(10, 3));
                arrayGauss.append(numberGauss_z1 * qPow(10, 3));
                qint32 a = arrayGauss[0];
            }
        }
        myQVectorGauss.append(arrayGauss);
        arrayGauss.clear();
    }
    return myQVectorGauss;
}
