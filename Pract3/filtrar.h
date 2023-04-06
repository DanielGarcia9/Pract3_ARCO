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

private:
    Ui::filtrar *ui;
};

#endif // FILTRAR_H
