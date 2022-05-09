#include "server.h"
#include <QDebug>

Server::Server(QObject *parent)
    : QTcpServer{parent}
{
    listen(QHostAddress::Any,8888);
}

void Server::incomingConnection(qintptr handle)
{
    //qDebug() << "i am coming";
    sock = new QTcpSocket(this);
    sock->setSocketDescriptor(handle);
    connect(sock,&QTcpSocket::readyRead,this,&Server::ressiveMessage);

}

void Server::ressiveMessage()
{
    char buffer[1024];
    sock->read(buffer,sock->bytesAvailable());
    //qDebug()<<buffer;
}
