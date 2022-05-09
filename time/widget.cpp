#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    timer1 = new QTimer(this);
    //connect(timer1,&QTimer::timeout,this,Widget::Timer());
    //connect(timer1,&QTimer::timeout,this,Timer());
    //connect(timer1,&QTimer::timeout,this, QOverload<>::of(&Widget::Timer));
    connect(timer1,&QTimer::timeout,this, &Widget::Timer);
    timer1->start(1000);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::Timer()
{
    int a = ui->label->text().toInt();
    --a;
    ui->label->setText(QString::number(a));
}

