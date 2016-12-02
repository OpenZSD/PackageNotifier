#include "mainWindow.h"
#include "ui_mainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    mAbout = new AboutDialog(this);
    mSetupInfo = new QMessageBox(QMessageBox::Information, "Setup", "Blah blab .............. blah \n f \n d",QMessageBox::Ok, this);
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
