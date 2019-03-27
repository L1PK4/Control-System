#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(392, 256);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_btn_start_clicked() {
    ui->lbl_status->setText(QString("Start button pressed"));
}

void MainWindow::on_btn_end_clicked() {
    ui->lbl_status->setText(QString("Stop button pressed"));
}
