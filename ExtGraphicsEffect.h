#ifndef EXTGRAPHICSEFFECT_H
#define EXTGRAPHICSEFFECT_H

#include <QGraphicsEffect>

class ExtGraphicsEffect : public QGraphicsEffect
{
    Q_OBJECT

    Q_PROPERTY(float rotation READ getRotation() WRITE setRotation)
    Q_PROPERTY(float opacity READ getOpacity() WRITE setOpacity)

public:
    explicit ExtGraphicsEffect(QObject *parent = 0);
    virtual void draw(QPainter * painter);

    float getOpacity() const { return mOpacity; }
    float getRotation() const { return mDegRot; }

signals:

public slots:
    void setOpacity(float op);
    void setRotation(float deg);

private:
    float mOpacity;
    float mDegRot;
};

#endif // EXTGRAPHICSEFFECT_H
