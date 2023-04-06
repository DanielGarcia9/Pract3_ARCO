#include "ordenacion.h"
#include "ui_ordenacion.h"
#include <QFileDialog>
#include <QString>
#include <chrono>
#include <vector>
#include <algorithm>
#include <string>

using namespace cv;
using namespace std::chrono;
using namespace std;

Ordenacion::Ordenacion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ordenacion)
{
    ui->setupUi(this);
}

Ordenacion::~Ordenacion()
{
    delete ui;
}

void Ordenacion::on_pushButton_2_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Selecciona un archivo", "/home/", tr("TXT (*.txt)"));
    QString exitPath = QFileDialog::getOpenFileName(this, "Selecciona un archivo de guardado", "/home/", tr("TXT (*.txt)"));

    auto start = high_resolution_clock::now();

    string fileP = filePath.toStdString();
    string exitP = exitPath.toStdString();
    ifstream file(fileP);

    if(!file){
        cerr << "No se pudo abrir el archivo" << endl;
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
