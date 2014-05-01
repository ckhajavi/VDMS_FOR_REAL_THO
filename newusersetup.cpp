#include "newusersetup.h"

NewUserSetup::NewUserSetup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewUserSetup)
{
    ui->setupUi(this);
}

NewUserSetup::~NewUserSetup()
{
    delete ui;
}


void NewUserSetup::on_btnSubmit_clicked()
{

}

void NewUserSetup::on_btnCancelSetup_clicked()
{
    this->close();
}
