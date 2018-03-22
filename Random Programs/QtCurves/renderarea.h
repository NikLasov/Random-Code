#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QWidget>
#include <QColor>
#include <QPen>

class RenderArea : public QWidget
{
    Q_OBJECT
public:
    explicit RenderArea(QWidget *parent = 0);

    QSize minimumSizeHint() const Q_DECL_OVERRIDE;
    QSize sizeHint() const Q_DECL_OVERRIDE;

    enum ShapeType{ Astroid,
                    Cycloid,
                    HuygensCycloid,
                    HypoCycloid,
                    Line,
                    Circle,
                    Eclipse,
                    FancyCurve,
                    StarFish,
                    Cloud,
                    InvertedCloud
                  };


    void setBackgroundColor (QColor color) { mBackgroundColor = color;} //setter
    QColor backgroundColor() const { return mBackgroundColor; } //getter

    void setShapeColor(QColor color) { mPen.setColor(color); }
    QColor shapeColor () const { return mPen.color(); }

    void SetShape(ShapeType shape) { mShape = shape; on_shape_changed();}
    ShapeType shape () const { return mShape; }

    void setScale (float scale) { mScale = scale; repaint();}
    float Scale () const { return mScale; }

    void setInterval (float interval) { mIntervalLength = interval; repaint();}
    float Interval () const { return mIntervalLength; }

    void setStepCount (int count) { mStepCount = count; repaint(); }
    int stepCount () const { return mStepCount; }

protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

private:
    QColor mBackgroundColor;
    ShapeType mShape;
    QPen mPen;

    void on_shape_changed();
    QPointF compute (float t); // dispatch function based on mShape's type
    QPointF compute_astroid (float t);
    QPointF compute_cycloid (float t);
    QPointF compute_huygens (float t);
    QPointF compute_hypo (float t);
    QPointF compute_line(float t);
    QPointF compute_circle(float t);
    QPointF compute_eclipse(float t);
    QPointF compute_fancy_curve(float t);
    QPointF compute_starfish(float t);
    QPointF compute_cloud(float t);
    QPointF compute_inverted_cloud(float t);
    QPointF compute_cloud_with_sign(float t, float sign);



    float mIntervalLength;
    float mScale;
    int mStepCount;

signals:

public slots:
};

#endif // RENDERAREA_H
