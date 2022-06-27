#include "painter.h"
#include "ui_painter.h"

Painter::Painter(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Painter)
{
    ui->setupUi(this);
}

Painter::~Painter()
{
    delete ui;
}

void Painter::paintEvent(QPaintEvent *event)
{
    // crear el objeto Painter y establecer al formulario como su lienzo
    QPainter pintor(this);

    // establecer un color a su pincel
    pintor.setPen(Qt::blue);

    // dibujar una linea
    pintor.drawLine(100, 100, 200, 200);

    // cambiar color
    pintor.setPen(Qt::red);

    // Establecer un tipo y tama;o de letra
    pintor.setFont(QFont("Arial",30));

    // Dibujar un texto
    pintor.drawText(250,150,"Picaso");

    // Crear un nuevo pincel
    QPen pincel;
    pincel.setColor(Qt::green);
    pincel.setWidth(10);
    pincel.setCapStyle(Qt::RoundCap);

    // Utilizar el nuevo pincel
    pintor.setPen(pincel);

    //Establecer una brocha
    pintor.setBrush(Qt::black);

    // Dibujar un rectangulo
    pintor.drawRect(400,100, 100,100);

    //Crear un nuevo color
    QColor miColor(255,221,129);

    // Crear un nuevo pincel
    QPen pincel2;
    pincel2.setColor(miColor);
    pincel2.setWidth(5);
    pincel2.setStyle(Qt::DotLine);

    // Cambiar brocha
    pintor.setBrush(Qt::yellow);

    // Dibujar un circulo
    pintor.drawEllipse(500,100,100,100);


    /*
     *  DESDE AQUI VAN MIS PROPIOS DIBUJOS AMORFOS JAJA
     */

    pintor.setPen(Qt::black);
    pintor.setBrush(Qt::blue);
    pintor.drawEllipse(200,400,300,50);

    QColor miColor2(16.5,8.6,34.1);
    QPen pincel3;
    pincel3.setColor(miColor2);
    pincel3.setWidth(9);

    pintor.setPen(pincel3);
    pintor.drawArc(100,450,200,300,300,300);

    pintor.drawText(300,300,"Mis Dibujos Amorfos xd");

    pintor.drawRect(500,450,300,150);


}

