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


void Widget::on_pushButton_clicked()
{
    int port = ui->leport->text().toInt();
    server = new Server(port);
    connect(server,SIGNAL(GiveMessage(QString,int)),this,SLOT(mymessage(QString,int)));
    //connect(server,&Server::GiveMessage,this,&Widget::mymessage);

}

void Widget::mymessage(QString str,int type)
{
    if(type == 1)
    ui->teReceive->setText(str);
    else if(type == 2)
        ui->lwlog->addItem(str);

}


void Widget::on_pushButton_2_clicked()
{

}


void Widget::on_pushButton_3_clicked()
{
    // server->socket->write(ui->teSend->toPlainText().toUtf8());
     sock = server->getSocket();
     QByteArray arr = ui->teSend->toPlainText().toUtf8();
     sock->write(arr);
}

