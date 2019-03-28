#include "mainwindow.h"
#include "registration.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    registration w1;
    MainWindow w;
    w.show();
    w1.setModal(true);
    w1.exec();

    return a.exec();
}
