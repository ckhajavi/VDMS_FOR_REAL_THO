#include "mainwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Creates new user window
void MainWindow::on_btnNewUser_clicked()
{
    newUser = new NewUserSetup(this);
    //newUser->show(); //can open multiple windows
    newUser->exec();
}

//Creates forgot password window
void MainWindow::on_btnForgotPass_clicked()
{
    forgotPasswordWindow = new ForgotPasswordDialog(this);
    //forgotPasswordWindow->show();
    forgotPasswordWindow->exec();
}

//Creates Main Login page after Logging in
void MainWindow::on_btnLogIn_clicked()
{
    myLoginDialog = new LoginPage(this);
    myLoginDialog->exec();
}

void MainWindow::on_btnExit_clicked()
{
    this->close();
}
