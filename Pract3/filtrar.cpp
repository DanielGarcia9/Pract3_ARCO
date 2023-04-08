#include "filtrar.h"
#include "ui_filtrar.h"
#include <QFileDialog>
#include <QString>
#include <chrono>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <opencv2/opencv.hpp>"
#include <opencv2/core/mat.hpp>

using namespace cv;
using namespace std::chrono;
using namespace std;

filtrar::filtrar(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::filtrar)
{
    ui->setupUi(this);
    filePath="";
    exitPath="";
    count = 0;
    connect(ui->pushButton, &QPushButton::clicked, this, &filtrar::on_pushButton_clicked);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &filtrar::on_pushButton_clicked_1);
}

filtrar::~filtrar()
{
    delete ui;
}

void filtrar::on_pushButton_clicked()
{
    filePath = QFileDialog::getOpenFileName(this, "Selecciona un archivo", "/home/", tr("JPEG (.jpg);;PNG (.png)"));
    exitPath = QFileDialog::getSaveFileName(nullptr, "Guardar imagen", "/home/");

}

void filtrar::on_pushButton_clicked_1()
{
    auto start = high_resolution_clock::now();
    Mat image = imread(filePath.toStdString(), IMREAD_COLOR);
    int filas = image.rows;
    int columnas = image.cols;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cv::Vec3b& pixelValue =  image.at<cv::Vec3b>(i, j);
            int r = pixelValue[2];
            int g = pixelValue[1];
            int b = pixelValue[0];
            pixelValue[2] = r*0.5;
            pixelValue[1] = g*0.5;
            pixelValue[0] = b*1.5;
        }
    }
    string outputDirStr = exitPath.toStdString();
    outputDirStr = outputDirStr + ".jpg";
    imwrite(outputDirStr, image);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    float time = duration.count();
    QString tiempo = QString::number(time);
    count++;
    switch(count){
    case 1:
        ui->textBrowser->setText(tiempo);
        break;
    case 2:
        ui->textBrowser_2->setText(tiempo);
        break;
    case 3:
        ui->textBrowser_3->setText(tiempo);
        break;
    case 4:
        ui->textBrowser_4->setText(tiempo);
        break;
    case 5:
        ui->textBrowser_5->setText(tiempo);
        break;
    case 6:
        calcularMedia();
        break;
    }
}

void filtrar::calcularMedia(){
    QString text1 = ui->textBrowser->toPlainText ();
    QString text2 = ui->textBrowser_2->toPlainText ();
    QString text3 = ui->textBrowser_3->toPlainText ();
    QString text4 = ui->textBrowser_4->toPlainText ();
    QString text5 = ui->textBrowser_5->toPlainText ();

    float time1= text1.toFloat();
    float time2= text2.toFloat();
    float time3= text3.toFloat();
    float time4= text4.toFloat();
    float time5= text5.toFloat();
    float media = (time1+time2+time3+time4+time5)/5;
    QString tiempo = QString::number(media);
    ui->textBrowser_6->setText(tiempo);

}
