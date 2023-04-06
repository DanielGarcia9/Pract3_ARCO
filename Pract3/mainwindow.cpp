#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <opencv2/opencv.hpp>
#include <QFileDialog>
#include <QString>
#include <chrono>

using namespace cv;
using namespace std::chrono;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Selecciona un archivo", "/home/", tr("JPEG (*.jpg);;PNG (*.png)"));
    Mat image = imread(filePath.toStdString(), IMREAD_COLOR);
    auto start = high_resolution_clock::now();
    int filas = image.rows;
    int columnas = image.cols;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cv::Vec3b& pixelValue = image.at<cv::Vec3b>(i, j);
            int r = pixelValue[2];
            int g = pixelValue[1];
            int b = pixelValue[0];
            pixelValue[2] = r*0.5;
            pixelValue[1] = g*0.5;
            pixelValue[0] = b*1.5;

      }
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    QString outputFilePath = QFileDialog::getSaveFileName(nullptr, "Guardar imagen", "/home/");

    std::string outputDirStr = outputFilePath.toStdString();
    outputDirStr = outputDirStr + ".jpg";
    std::cout << "Tiempo de ejecución: " << duration.count() << " microsegundos" << std::endl;
    imwrite(outputDirStr, image);
}

