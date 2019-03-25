#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
std::string password = "";
std::string login = "";

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
