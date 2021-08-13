#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#define NUMBER_SIGN_RAND 2

#include <QMainWindow>
#include "QTime"
#include "qmath.h"
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QVector <QVector<qint32> > myGenerateGauss (int MSG_len, double DataSize_MByte);

private:
    Ui::MainWindow *ui;
    QTime timeFORrand;
    double randomNumber_x;
    double randomNumber_y;
    double numberGauss_z0;
    double numberGauss_z1;
    QVector<qint32> arrayGauss;
    QVector <QVector<qint32> > myQVectorGauss;


};

#endif // MAINWINDOW_H
