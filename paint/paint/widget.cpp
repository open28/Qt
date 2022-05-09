#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);//Qpainter * painter = new QPainter(this);
    painter.drawLine(300,0,0,300);
    painter.setRenderHint(QPainter::Antialiasing,true);//设置渲染，使其平滑
//    painter.drawArc(30,30,500,500,30*16,100*16);
//    painter.drawPie(30,30,100,100,0*16,90*16);
//    painter.drawRect(100,100,200,200);
//    painter.fillRect(100,100,100,200,QBrush(QColor(255,0,0)));
    //绘制坐标轴
    painter.drawText(290,410,"O");
    painter.drawLine(300,400,500,400);
    for(int i = 1;i < 21; ++i)
    {
        painter.drawLine(300 + i*10,400,300 + i*10,395);
        if(i % 4 == 0)
        {
            //painter.drawText(300 + i*10,400,QString::number(10*i));
            painter.drawText(300 + i*10 - 8,413,QString::number(10*i));
        }
    }
    painter.drawText(500,410,"水平");
    painter.drawLine(300,200,300,400);
    for(int i = 0;i < 20; ++i)
    {
        painter.drawLine(300,200+i*10,305,200+i*10);
        if(i % 4 == 0)
        {
            //painter.drawText(300 + i*10,400,QString::number(10*i));
            painter.drawText(275,400 - i *10 + 5,QString::number(10*i));
        }
    }
    painter.drawText(250,200,"shuzhi");
    //生成随机数
    int oldx,oldy;
    oldx=300;
    oldy=400;
    for(int i = 0; i < 10; ++i)
    {
        painter.setPen(QColor(0,0,0));
        int num1 = rand()%121 + 279;//生成随机数
        //int num2 = rand()%191;
//        painter.setPen(QColor(255,0,0));
        painter.drawLine(oldx,oldy,oldx+10,num1);
        painter.setFont(QFont("隶书",100));
        painter.setPen(QColor(255,0,0));
        //painter.drawPoint(oldx,oldy);
        oldx += 10;
        oldy = num1;
        painter.drawArc(oldx-1,oldy-1,2,2,0*16,360*16);
    }

}

