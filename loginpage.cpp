#include "loginpage.h"

LoginPage::LoginPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginPage)
{
    ui->setupUi(this);
}

void LoginPage::logOut()
{
    QMessageBox::information(this, "Logging Out", "You have successfully logged out.");
    this->close();
}

LoginPage::~LoginPage()
{
    delete ui;
}

void LoginPage::on_btnLogOut1_clicked()
{
    logOut();
}

void LoginPage::on_btnLogOut2_clicked()
{
    logOut();
}

void LoginPage::on_btnSearch_clicked()
{
    stockSearchWindow = new StockSearch(this);
    //forgotPasswordWindow->show();
    stockSearchWindow->exec();
}

void LoginPage::on_btnLogOut3_clicked()
{
    logOut();
}

void LoginPage::on_btnLogOut4_clicked()
{
    logOut();
}
