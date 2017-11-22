#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_up,SIGNAL(clicked()),ui->widget,SLOT(up_update()));
    connect(ui->pushButton_down,SIGNAL(clicked()),ui->widget,SLOT(down_update()));
    connect(ui->pushButton_left,SIGNAL(clicked()),ui->widget,SLOT(left_update()));
    connect(ui->pushButton_right,SIGNAL(clicked()),ui->widget,SLOT(right_update()));

}


MainWindow::~MainWindow()
{
    delete ui;
}



