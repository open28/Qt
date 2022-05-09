#include "server.h"

Server::Server(QWidget *parent)
    : QWidget{parent}
{

    f_send();
}

void Server::f_send()
{
    QString str = "hi";
    emit fyl_send(str);
}
