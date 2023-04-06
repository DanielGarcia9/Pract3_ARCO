#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <opencv2/opencv.hpp>
#include <QFileDialog>
#include <QString>
#include <chrono>
#include <vector>
#include <algorithm>

using namespace cv;
using namespace std::chrono;
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_pal, &QPushButton::clicked, this, &MainWindow::on_buttonPal);
    connect(ui->pushButton_img, &QPushButton::clicked, this, &MainWindow::on_buttonImg);

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_buttonPal()
{
    //this->setEnabled (false);
    Ordenacion *ordenar = new Ordenacion(this);
    ordenar->show();
}

void MainWindow::on_buttonImg()
{
    //this->setEnabled (false);
    filtrar *azul = new filtrar(this);
    azul->show();
}




