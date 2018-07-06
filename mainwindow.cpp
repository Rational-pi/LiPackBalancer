#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_spinBoxDestinationMatriceLineCount_valueChanged(int arg1)
{
    ui->destinationMatrice->setRowCount(arg1);
    ui->destinationMatrice->itemAt()
}

void MainWindow::on_spinBoxDestinationMatriceRowCount_valueChanged(int arg1)
{
    ui->destinationMatrice->setColumnCount(arg1);
}
