#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QApplication *app, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->widget->setFocus();

    QObject::connect(ui->startButton, SIGNAL(clicked()), this, SLOT(letspaint()));
    QObject::connect(ui->qtAction, SIGNAL(triggered()), app, SLOT(aboutQt()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::letspaint()
{
    ui->widget->repaint_slot();
}

