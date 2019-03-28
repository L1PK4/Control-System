#ifndef SERVER_TCP_H
#define SERVER_TCP_H

#include <QObject>
#include <QDebug>
#include <QTcpSocket>
#include <QHostAddress>

class Server_tcp : public QObject {
    Q_OBJECT

private:
    QTcpSocket* qTcpServer;
    QString inputData;
    QString outputData;
    QString hostName;
    quint16 hostPort;
    quint16 countConnections;

public:
    Server_tcp(QString, quint16);
    void startServer();
    ~Server_tcp();
};

#endif // SERVER_TCP_H
