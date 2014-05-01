#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QDialog>
#include "ui_loginpage.h"
#include <QMessageBox>
#include "DownloadManager.h"
#include <iostream>
#include <QtCore>
#include <QtGui>
#include <string>
#include <iostream>
#include <QObject>
#include <QString>
#include "stocksearch.h"
#include <QNetworkAccessManager>

using namespace std;

namespace Ui {
class LoginPage;
}

class LoginPage : public QDialog
{
    Q_OBJECT

public:
    explicit LoginPage(QWidget *parent = 0);

    void logOut();
    //logOut

    ~LoginPage();

private slots:
    void on_btnLogOut2_clicked();

    void on_btnLogOut1_clicked();

    void on_btnSearch_clicked();

    void on_btnLogOut3_clicked();

    void on_btnLogOut4_clicked();

private:
    Ui::LoginPage *ui;
    StockSearch *stockSearchWindow;
};

#endif // LOGINPAGE_H