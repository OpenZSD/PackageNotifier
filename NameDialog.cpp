#include "NameDialog.h"
#include "ui_NameDialog.h"

NameDialog::NameDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NameDialog)
{
    ui->setupUi(this);
}

NameDialog::~NameDialog()
{
    delete ui;
}
