#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer1 = new QTimer(this);
    connect(timer1,&QTimer::timeout,this,&MainWindow::myFunc);
    timer1->start(10);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::myFunc()
{
    QString qs = QTime::currentTime().toString("hh:mm:ss.zzz");
    ui->label->setText(qs);
}

void MainWindow::on_pushButton_clicked()
{
    int a = qrand();

}

