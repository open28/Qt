#ifndef SERVER_H
#define SERVER_H

#include <QTcpServer>
#include <QObject>
#include <QTcpSocket>
#include <QString>

class Server : public QTcpServer
{
    Q_OBJECT
public:
    Server(int);
    void incomingConnection(qintptr socketDescriptor);
    QTcpSocket * getSocket();
private:
    QTcpSocket *socket;
private slots:
    void ressiveMessage(QString);
signals:
    void GiveMessage(QString,int);
};

#endif // SERVER_H
