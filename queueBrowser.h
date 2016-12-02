#ifndef QUEUEBROWSER_H
#define QUEUEBROWSER_H

#include <QMainWindow>

namespace Ui {
class QueueBrowser;
}

class QueueBrowser : public QMainWindow
{
    Q_OBJECT

public:
    explicit QueueBrowser(QWidget *parent = 0);
    ~QueueBrowser();

private:
    Ui::QueueBrowser *ui;
};

#endif // QUEUEBROWSER_H
