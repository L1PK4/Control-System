#ifndef SERVER_TCP_H
#define SERVER_TCP_H

#include <QObject>
#include <QDebug>
#include <QTcpSocket>

class Server_tcp : public QObject {
    Q_OBJECT

private:
    QTcpSocket* qTcpServer;
    QString* inputData;
    QString* outputData;
    quint32 port;
    quint16 countConnections;

public:
    Server_tcp(QString, quint32);
    ~Server_tcp();
};

#endif // SERVER_TCP_H
