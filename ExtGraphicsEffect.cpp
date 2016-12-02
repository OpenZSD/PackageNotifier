#include "ExtGraphicsEffect.h"
#include <QTransform>
#include <QPainter>
#include <QPixmap>

ExtGraphicsEffect::ExtGraphicsEffect(QObject *parent) :
    QGraphicsEffect(parent),
    mOpacity(1.0f),
    mDegRot(40.0f)
{

}

void ExtGraphicsEffect::setOpacity(float op)
{
    mOpacity = (op < 0.0f ? 0.0f : (op > 1.0f ? 1.0f : op));
    update();
}
void ExtGraphicsEffect::setRotation(float deg)
{
    mDegRot = deg;
    update();
}

void ExtGraphicsEffect::draw(QPainter *painter)
{
    QPoint offset;
    if (sourceIsPixmap())
    {
        // No point in drawing in device coordinates (pixmap will be scaled anyways).
        const QPixmap pixmap = sourcePixmap(Qt::LogicalCoordinates, &offset);
        QPixmap adjusted(pixmap.size());

        painter->setOpacity(mOpacity);
        painter->drawImage(offset, pixmap.toImage());
        painter->drawPixmap(offset, adjusted);
    }
    else
    {
        // Draw pixmap in device coordinates to avoid pixmap scaling;
        const QPixmap pixmap = sourcePixmap(Qt::DeviceCoordinates, &offset);

        QTransform ta(1, 0, 0, 1, -boundingRect().width()/2-offset.x(), -boundingRect().height()/2-offset.y());
        QTransform t = QTransform().rotate(mDegRot);
        QTransform tb(1, 0, 0, 1, boundingRect().width()/2+offset.x(), boundingRect().height()/2 + offset.y());
        t = ta * t * tb;

        painter->setWorldTransform(t);
        painter->setOpacity(mOpacity);
        painter->drawImage(offset, pixmap.toImage());
    }

}
