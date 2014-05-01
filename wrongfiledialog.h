#ifndef WRONGFILEDIALOG_H
#define WRONGFILEDIALOG_H

#include <QDialog>

namespace Ui {
class wrongFileDialog;
}

class wrongFileDialog : public QDialog
{
    Q_OBJECT

public:
    explicit wrongFileDialog(QWidget *parent = 0);
    ~wrongFileDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::wrongFileDialog *ui;
};

#endif // WRONGFILEDIALOG_H
