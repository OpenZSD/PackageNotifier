#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "AboutDialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void showAbout() { mAbout->show(); }
    void showHelpSetup() { mSetupInfo->show(); }

private:
    Ui::MainWindow *ui;
    AboutDialog *mAbout;
    QMessageBox *mSetupInfo;
};

#endif // MAINWINDOW_H
