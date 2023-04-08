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
    void on_pushButton_2_clicked();


private:
    Ui::ordenar *ui;
};

#endif // ORDENAR_H
