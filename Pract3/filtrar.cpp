#include "filtrar.h"
#include "ui_filtrar.h"
#include <QFileDialog>
#include <QString>
#include <chrono>
#include <vector>
#include <algorithm>
#include <string>

using namespace cv;
using namespace std::chrono;
using namespace std;


filtrar::filtrar(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::filtrar)
{
    ui->setupUi(this);
}

filtrar::~filtrar()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Selecciona un archivo", "/home/", tr("JPEG (*.jpg);;PNG (*.png)"));
    QString outputFilePath = QFileDialog::getSaveFileName(nullptr, "Guardar imagen", "/home/");

    auto start = high_resolution_clock::now();
    Mat image = imread(filePath.toStdString(), IMREAD_COLOR);
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

    string outputDirStr = outputFilePath.toStdString();
    outputDirStr = outputDirStr + ".jpg";
    imwrite(outputDirStr, image);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Tiempo de ejecución: " << duration.count() << " microsegundos" << endl;
}
