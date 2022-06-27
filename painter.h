#ifndef PAINTER_H
#define PAINTER_H

#include <QMainWindow>
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui { class Painter; }
QT_END_NAMESPACE

class Painter : public QMainWindow
{
    Q_OBJECT

public:
    Painter(QWidget *parent = nullptr);
    ~Painter();

    virtual void paintEvent(QPaintEvent *event);

private:
    Ui::Painter *ui;
};
#endif // PAINTER_H
