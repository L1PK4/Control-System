#include "registration.h"
#include "mainwindow.h"
#include "ui_registration.h"
#include <QString>

static bool reg = false;

registration::registration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registration)
{
    ui->setupUi(this);
}

registration::~registration()
{
    delete ui;
}

void registration::on_pushButton_clicked()
{
    QString login = ui -> loginEdit -> text();
    QString password = ui -> passwordEdit -> text();


    // МЕСТО ДЛЯ ОТПРАВКИ ДАННЫХ
    //
    //
    //
    //
    //
    // - - - - - - - - - - - - -

    // МЕСТО ДЛЯ ПРИЁМА ДАННЫХ
    //
    //
    //
    //
    // - - - - - - - - - - - - -
    bool Accept = login == "admin" && password == "admin";
    if (Accept) {
        reg = true;
        hide();
    }

}
