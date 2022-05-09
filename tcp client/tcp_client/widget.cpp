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
    socket = new QTcpSocket(this);
    socket->connectToHost(ui->IP->text(),ui->Port->text().toInt());
    connect(socket,&QTcpSocket::readyRead,this,&Widget::receiveMessage);
}


void Widget::on_pushButton_2_clicked()
{
    QString str = ui->teSend->toPlainText();
    socket->write(str.toUtf8());
}

void Widget::receiveMessage()
{
    QByteArray arr = socket->readAll();
//    arr.data();
    QString str = arr.data();
    ui->teReceive->setText(str);
    if(str == "111")
        this->hide();
    else if(str == "222")
        this->show();

}

