#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //QString filePath = QFileDialog::getOpenFileName(this, "Selecciona un archivo", "/home/");  Para seleccionar archivo
}

MainWindow::~MainWindow()
{
    delete ui;
}

