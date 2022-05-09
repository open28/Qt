#ifndef SERVER_H
#define SERVER_H

#include <QWidget>

class Server : public QWidget
{
    Q_OBJECT
public:
    explicit Server(QWidget *parent = nullptr);
private slots:
    void f_send();

signals:

    void fyl_send(QString);
};

#endif // SERVER_H
