#include "server.h"

Server::Server(int port)
{
    listen(QHostAddress::Any,port);
}

void Server::incomingConnection(qintptr socketDescriptor)
{
    socket = new QTcpSocket(this);
    socket->setSocketDescriptor(socketDescriptor);
    connect(socket,SIGNAL(readyRead()),this,SLOT(ressiveMessage(QString)));
    emit GiveMessage(socket->peerAddress().toString() + "shangxianla",2);
}

QTcpSocket *Server::getSocket()
{
    return this->socket;
}

void Server::ressiveMessage(QString)
{
    QByteArray arr = socket->readAll();
    QString str = arr.data();
    emit GiveMessage(str,1);
}
