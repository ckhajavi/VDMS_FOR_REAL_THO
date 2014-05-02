#ifndef NEWUSERSETUP_H
#define NEWUSERSETUP_H

#include <QDialog>
<<<<<<< HEAD
=======
//#include"addfilepath.h"
>>>>>>> FETCH_HEAD
#include "user.h"

namespace Ui {
class NewUserSetup;
}

class NewUserSetup : public QDialog
{
    Q_OBJECT

public:
    explicit NewUserSetup(QWidget *parent = 0);
    bool validate();
    ~NewUserSetup();

private slots:
    void on_pushButton1_clicked();

private:
    Ui::NewUserSetup *ui;
    bool checked;

};

#endif // NEWUSERSETUP_H

