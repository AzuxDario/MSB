#ifndef WIDGET_H
#define WIDGET_H

#include <QObject>
#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>

#include "../MSB-System/msbsystem.h"

class Widget : public QWidget
{
    Q_OBJECT
private:
    QVBoxLayout *layout;
    QPushButton *button;
    QLabel *label;
public:
    Widget(QWidget *parent = Q_NULLPTR);
    ~Widget();
public slots:
    void pushButton();
};

#endif // WIDGET_H
