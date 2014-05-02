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

    //
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
    User currentUser;
    currentUser.setFileName(ui->lineEditUserName->text());
    currentUser.loadUser();
    QString password = currentUser.getPassword();
    //check to see if password matches
    if(ui->lineEditPassword->text() == password)
    {
        myLoginDialog = new LoginPage(this);
        myLoginDialog->exec();
    }
    else
    {
        // change into a dialogue box
        qDebug() << "Sorry wrong user name/ password combination" <<endl;
    }

}

void MainWindow::on_btnExit_clicked()
{
    this->close();
}
