#include "ordenar.h"
#include "ui_ordenar.h"
#include <QFileDialog>
#include <QString>
#include <chrono>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <fstream>

using namespace std::chrono;
using namespace std;


ordenar::ordenar(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ordenar)
{
    ui->setupUi(this);
    filePath="";
    count = 0;
    connect(ui->pushButton, &QPushButton::clicked, this, &ordenar::on_pushButton_clicked);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &ordenar::on_pushButton_clicked_1);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &ordenar::on_pushButton_clicked_3);
}

ordenar::~ordenar()
{
    delete ui;
}
void ordenar::on_pushButton_clicked()
{
    filePath = QFileDialog::getOpenFileName(this, "Selecciona un archivo", "/home/", tr("TXT (*.txt)"));
    //exitPath = QFileDialog::getOpenFileName(this, "Selecciona un archivo de guardado", "/home/", tr("TXT (*.txt)"));

}
void ordenar::on_pushButton_clicked_1()
{
    string fileP = filePath.toStdString();
    // string exitP = exitPath.toStdString();
    ifstream file(fileP);

    if (!file)
    {
        cout << "No se pudo abrir el archivo" << endl;
        return; // Salir de la función si no se pudo abrir el archivo
    }

    auto start = high_resolution_clock::now();

    vector<string> words;
    string word;

    while (file >> word)
    {
        words.push_back(word);
    }

    file.close();
    sort(words.begin(), words.end());

    // ofstream file2(exitP);
    ofstream file2(fileP + "_ordenado.txt"); // Nombre del nuevo archivo ordenado

    for (const string &word : words) {
        file2 << word << endl;
    }

    file2.close();

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    float time = duration.count();
    time = time/1000;
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

void ordenar::calcularMedia(){
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

void ordenar::on_pushButton_clicked_3 (){
    count = 0;
    filePath="";
    ui->textBrowser->setText ("");
    ui->textBrowser_2->setText ("");
    ui->textBrowser_3->setText ("");
    ui->textBrowser_4->setText ("");
    ui->textBrowser_5->setText ("");
    ui->textBrowser_6->setText ("");
}
