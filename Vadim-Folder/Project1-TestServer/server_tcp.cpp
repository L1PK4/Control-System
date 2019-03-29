#include "server_tcp.h"

Server_tcp::Server_tcp(QString name, quint16 port) : hostName(name), hostPort(port) {
    countConnections = 0;
}

void Server_tcp::startServer() {
    qTcpServer = new QTcpSocket(this);
    qTcpServer->bind(QHostAddress(hostName), hostPort);
}

Server_tcp::~Server_tcp() {
    delete qTcpServer;
}
