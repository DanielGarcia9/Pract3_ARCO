#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <opencv2/opencv.hpp>
#include <QFileDialog>
#include <QString>

using namespace cv;

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

void MainWindow::on_pushBotonPrueba_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Selecciona un archivo", "/home/", tr("JPEG (*.jpg);;PNG (*.png);;Todos los archivos (*)"));
    Mat image = imread(filePath.toStdString(), IMREAD_COLOR);

    int filas = image.rows;
    int columnas = image.cols;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cv::Vec3b& pixelValue = image.at<cv::Vec3b>(i, j);
            int r = pixelValue[2];
            int g = pixelValue[1];
            int b = pixelValue[0];

            pixelValue[2] = cv::saturate_cast<uchar>(0.393*r + 0.769*g + 0.189*b);  //Es sepia hay que cambiarlo
            pixelValue[1] = cv::saturate_cast<uchar>(0.349*r + 0.686*g + 0.168*b);
            pixelValue[0] = cv::saturate_cast<uchar>(0.272*r + 0.534*g + 0.131*b);
      }
    }

    QString outputFilePath = QFileDialog::getSaveFileName(nullptr, "Guardar imagen", "/home/");

    std::string outputDirStr = outputFilePath.toStdString();
    outputDirStr = outputDirStr + ".jpg";
    imwrite(outputDirStr, image);
}
