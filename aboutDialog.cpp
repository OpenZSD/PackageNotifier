#include "aboutDialog.h"
#include "ui_aboutDialog.h"
#include "ExtGraphicsEffect.h"
#include <QPropertyAnimation>
#include "UIUtil.h"

AboutDialog::AboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutDialog)
{
    ui->setupUi(this);
    ExtGraphicsEffect *egeG = new ExtGraphicsEffect(this);
    ExtGraphicsEffect *egeR = new ExtGraphicsEffect(this);
    egeG->setOpacity(0.70);
    egeR->setOpacity(0.50);
    egeG->setRotation(60);
    egeR->setRotation(30);

    QLabel *g = UIUtil::findAndAssert<QLabel>("uiLogoGear", this);
    g->setGraphicsEffect(egeG);

    QPropertyAnimation *slow = new QPropertyAnimation(egeG, "rotation");
    slow->setDuration(30000);
    slow->setStartValue(0);
    slow->setEndValue(360);
    slow->setEasingCurve(QEasingCurve::Linear);
    slow->setLoopCount(-1);
    slow->start(QPropertyAnimation::DeleteWhenStopped);

    g = UIUtil::findAndAssert<QLabel>("uiLogoRing", this);
    g->setGraphicsEffect(egeR);


    QPropertyAnimation *fast = new QPropertyAnimation(egeR, "rotation");

    fast->setDuration(3000);
    fast->setStartValue(360);
    fast->setEndValue(0);
    fast->setEasingCurve(QEasingCurve::Linear);
    fast->setLoopCount(-1);
    fast->start(QPropertyAnimation::DeleteWhenStopped);
}

AboutDialog::~AboutDialog()
{
    delete ui;
}
