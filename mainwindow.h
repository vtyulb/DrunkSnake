#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QApplication *app, QWidget *parent = 0);
    ~MainWindow();

private slots:
    void letspaint();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
