#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1000,1000);
    pm = new QPixmap();
    QString t_path = path + QString::number(num) + ".jpg";
    //pm->load(":/new/prefix1/img/1.jpg");
    pm->load(t_path);
    //pm->scaled(100,500);
    labImg.setPixmap(*pm);
    labImg.setGeometry(100,100,500,500);
    labImg.setParent(this);
    labImg.setScaledContents(true);
    //labImg.resize(1000,1000);
    labImg.setStyleSheet("border: 1px solid green");
    ptimer = new QTimer(this);
    connect(ptimer,&QTimer::timeout,this,&MainWindow::myfunc);
    ptimer->start(3000);
    labdesc = new QLabel(this);
    labdesc->setText("<a href='http://bcczcs.com'>hello</a>");
    labdesc->setOpenExternalLinks(true);
}

MainWindow::~MainWindow()
{
}

void MainWindow::myfunc()
{
    num++;
    if(num == 4)
        num =1;
    QString t_path = path + QString::number(num) + ".jpg";
    pm->load(t_path);
    labImg.setPixmap(*pm);

}

