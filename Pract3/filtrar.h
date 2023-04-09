#ifndef FILTRAR_H
#define FILTRAR_H

#include <QMainWindow>

namespace Ui {
class filtrar;
}

class filtrar : public QMainWindow
{
    Q_OBJECT

public:
    explicit filtrar(QWidget *parent = 0);
    ~filtrar();
    void on_pushButton_clicked();
    void on_pushButton_clicked_1();
    void on_pushButton_clicked_3();
    void calcularMedia();

private:
    Ui::filtrar *ui;
    int count;
    QString filePath;
    QString exitPath;
};

#endif // FILTRAR_H
