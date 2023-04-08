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
}

ordenar::~ordenar()
{
    delete ui;
}
void ordenar::on_pushButton_2_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Selecciona un archivo", "/home/", tr("TXT (*.txt)"));
    QString exitPath = QFileDialog::getOpenFileName(this, "Selecciona un archivo de guardado", "/home/", tr("TXT (*.txt)"));

    auto start = high_resolution_clock::now();

    string fileP = filePath.toStdString();
    string exitP = exitPath.toStdString();
    ifstream file(fileP);

    if(!file){
        cout << "No se pudo abrir el archivo" << endl;
    }

    vector<string> words;
    string word;

    while (file >> word){
        words.push_back(word);
    }

    file.close();
    sort(words.begin(), words.end());

    ofstream file2(exitP);

    for(const string& word : words){
        file2 << word << endl;
    }

    file2.close();

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Tiempo de ejecución: " << duration.count() << " microsegundos" << endl;

}
