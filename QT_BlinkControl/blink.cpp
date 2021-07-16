#include "blink.h"
#include "ui_blink.h"

#include <QtSerialPort/QSerialPort>

#include <QDebug>

Blink::Blink(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Blink)
{
    ui->setupUi(this);
}

Blink::Blink(MainWindow *parent, QSerialPort *serial) :
    ui(new Ui::Blink), m(parent), s(serial)
{
    ui->setupUi(this);
    ui->freqSlider->setSliderPosition(20);
    ui->voltSlider->setSliderPosition(50);
    ui->freqSlider->setRange(100,5000);
    ui->voltSlider->setRange(10,90);
    val = 90;
}

Blink::~Blink()
{
    delete ui;
}

void Blink::on_freqSlider_sliderMoved(int position)
{
    val = position/100*100;
}


void Blink::on_voltSlider_sliderMoved(int position)
{
    val = position/10*10;
}
void Blink::on_voltSlider_sliderReleased()
{
    QByteArray temp;
    QString c = "v00000";
    c.append(QString::number(val));
    qDebug() << c;
    temp.append(c);
    s->write(temp);
}

void Blink::on_freqSlider_sliderReleased()
{
    QByteArray temp;
     QString c = "f000";
    if(val < 1000)
    {
        c.append("0");
    }
    c.append(QString::number(val));
    //qDebug() << c;
    temp.append(c);
    s->write(temp);
}
