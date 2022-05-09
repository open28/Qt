#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>

class Server : public QTcpServer
{
    Q_OBJECT
public:
    explicit Server(QObject *parent = nullptr);
    QTcpSocket *sock;
signals:

private slots:
    void incomingConnection(qintptr handle) override;
    void ressiveMessage();
};

#endif // SERVER_H
