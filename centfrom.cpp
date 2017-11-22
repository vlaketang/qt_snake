#include "centfrom.h"
#include "ui_centfrom.h"
#include <QDebug>
#include <QTimer>

CentFrom::CentFrom(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CentFrom)
{
     this->setStyleSheet("background-color:red;");
    ui->setupUi(this);
    this->direct = RIGHT;
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(2000);

}

CentFrom::~CentFrom()
{
    delete ui;
}

void CentFrom::up_update()
{
    if(this->direct == DOWN)
    {
        return;
    }

}
void CentFrom::down_update()
{
    if(this->direct == UP)
    {
        return;
    }
}
void CentFrom::left_update()
{
    if(this->direct == RIGHT)
    {
        return;
    }
}
void CentFrom::right_update()
{
    if(this->direct == LEFT)
    {
        return;
    }

}

void CentFrom::paintEvent(QPaintEvent *event)
{
    qDebug() << "painter";
    QPainter* painter = new QPainter(this);
    painter->drawRect(0,0,700,700);

    QBrush brush(QColor(0,100,100));
    painter->setBrush(brush);
    painter->setRenderHint(QPainter::Antialiasing);
    static int i = 0;
    painter->drawEllipse(i*20,100,20,20);
    i++;

}
