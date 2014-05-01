#ifndef NEWUSERSETUP_H
#define NEWUSERSETUP_H

#include <QDialog>
#include "ui_newusersetup.h"

namespace Ui {
class NewUserSetup;
}

class NewUserSetup : public QDialog
{
    Q_OBJECT

public:
    explicit NewUserSetup(QWidget *parent = 0);
    ~NewUserSetup();

private slots:
    void on_btnSubmit_clicked();

    void on_btnCancelSetup_clicked();

private:
    Ui::NewUserSetup *ui;
};

#endif // NEWUSERSETUP_H
