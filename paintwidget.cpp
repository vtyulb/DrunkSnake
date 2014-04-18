#include "paintwidget.h"

PaintWidget::PaintWidget(QWidget *parent) :
    QWidget(parent)
{
    length = 3;
    score = 0;
    x_head = 20;
    y_head = 20;
    cur_direction = 0;

    pix = new QPixmap("/hero.png");
    wallpaper = new QPixmap("/wallpaper.png");
}

void PaintWidget::keyPressEvent(QKeyEvent *event)
{
    qDebug() << "detectKey " << event->key();
    if (finish)
        return;

    if (event->key() == Qt::Key_Up) cur_direction = 2;
    if (event->key() == Qt::Key_Down) cur_direction = 4;
    if (event->key() == Qt::Key_Right) cur_direction = 1;
    if (event->key() == Qt::Key_Left) cur_direction = 3;
}

void PaintWidget::repaint_slot()
{
    pix = new QPixmap("hero.png");
    wallpaper = new QPixmap("wallpaper.png");
    repaint();
}

void PaintWidget::paintEvent(QPaintEvent *event)
{
    qDebug() << "paintevent called" << rand()%100;

    QPainter p(this);

    if (1) {
        p.drawText(this->width() / 2 - 100, this->height() / 2 - 10, QString("Finish, you score is: ") + QString::number(score));
        p.end();
        return;
    }

    p.drawPixmap(0, 0, width(), height(), *wallpaper);

    p.drawPixmap(x_head - 8, y_head - 8, *pix);

    p.end();
    event->accept();
}
