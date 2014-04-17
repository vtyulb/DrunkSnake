#ifndef PAINT_WIDGET_H
#define PAINT_WIDGET_H

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include <QDebug>
#include <QKeyEvent>
#include <QLabel>
#include <QPixmap>
#include <math.h>

#define maxn 1000

class PaintWidget : public QWidget
{
    Q_OBJECT
public:
    explicit PaintWidget(QWidget *parent = 0);
    void keyPressEvent(QKeyEvent *event);
    void repaint_slot();
    void paint_event();

private:
    int length;
    int x_head;
    int y_head;
    int score;
    //Направление:
    //0 - направление не задано
    //1 - вправо
    //2 - вверх
    //3 - влево
    //4 - вниз
    int cur_direction;
    QPixmap *pix, *wallpaper;

    bool finish;

protected:

signals:
    void fail();
};


#endif // PAINT_WIDGET_H
