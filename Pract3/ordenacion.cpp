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
    string fileP = filePath.toStdString();
    ifstream file(fileP);

        if (!file)
        {
            cerr << "No se pudo abrir el archivo" << endl;
        }

        vector<string> words;
            string word;
            while (file >> word)
            {
                words.push_back(word);
            }

    file.close();
    sort(words.begin(), words.end());

    //Cambiar path q sino hay lio xd
    ofstream file2(fileP);

    for (const string& word : words)
        {
            file2 << word << endl;
        }

        file2.close();

}
