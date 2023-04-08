#ifndef ORDENAR_H
#define ORDENAR_H

#include <QMainWindow>

namespace Ui {
class ordenar;
}

class ordenar : public QMainWindow
{
    Q_OBJECT

public:
    explicit ordenar(QWidget *parent = 0);
    ~ordenar();
    void on_pushButton_clicked();
    void calcularMedia();
    void on_pushButton_clicked_1();



private:
    Ui::ordenar *ui;
    int count;
    QString filePath;
    QString exitPath;
};

#endif // ORDENAR_H
