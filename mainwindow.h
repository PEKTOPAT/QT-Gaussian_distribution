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

    float myGenerateGauss (int size_distribution);

private:
    Ui::MainWindow *ui;
    QTime timeFORrand;
    float randomNumber_1;
    float randomNumber_2;
};

#endif // MAINWINDOW_H
