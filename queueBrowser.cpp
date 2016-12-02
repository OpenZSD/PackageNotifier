#include "queueBrowser.h"
#include "ui_queueBrowser.h"

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
