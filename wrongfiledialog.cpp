#include "wrongfiledialog.h"
#include "ui_wrongfiledialog.h"

wrongFileDialog::wrongFileDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::wrongFileDialog)
{
    ui->setupUi(this);
}

wrongFileDialog::~wrongFileDialog()
{
    delete ui;
}

void wrongFileDialog::on_pushButton_clicked()
{
    this->close();
}
