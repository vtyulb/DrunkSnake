#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->widget->setFocus();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::letspaint()
{
    ui->widget->repaint_slot();
}

void MainWindow::on_pushButton_clicked()
{
    letspaint();
}
