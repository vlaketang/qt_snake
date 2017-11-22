#ifndef CENTFROM_H
#define CENTFROM_H

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
namespace Ui {
class CentFrom;
}
typedef enum direction
{
    UP,
    DOWN,
    LEFT,
    RIGHT
}DIRECTION;
class CentFrom : public QWidget
{
    Q_OBJECT
    
public:
    explicit CentFrom(QWidget *parent = 0);
    ~CentFrom();

public slots:
    void up_update();
    void down_update();
    void left_update();
    void right_update();
private:
    Ui::CentFrom *ui;
    DIRECTION direct;
    void paintEvent(QPaintEvent *event);
};

#endif // CENTFROM_H
