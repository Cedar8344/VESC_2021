#ifndef BLINK_H
#define BLINK_H

#include <QDialog>
#include "mainwindow.h"
#include <QtSerialPort/QSerialPort>


namespace Ui {
class Blink;
}

class Blink : public QDialog
{
    Q_OBJECT

public:
    explicit Blink(QWidget *parent = nullptr);
    explicit Blink(MainWindow *parent = nullptr, QSerialPort *s = nullptr);
    ~Blink();

private slots:
    void on_freqSlider_sliderMoved(int position);

    void on_voltSlider_sliderMoved(int position);

    void on_voltSlider_sliderPressed();

    void on_voltSlider_sliderReleased();

    void on_freqSlider_sliderReleased();

private:
    Ui::Blink *ui;
    QSerialPort *s;
    MainWindow *m;
    int val;
};

#endif // BLINK_H
