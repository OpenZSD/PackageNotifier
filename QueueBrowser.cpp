#include "QueueBrowser.h"
#include "ui_QueueBrowser.h"

QueueBrowser::QueueBrowser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QueueBrowser)
{
    ui->setupUi(this);
}

QueueBrowser::~QueueBrowser()
{
    delete ui;
}
