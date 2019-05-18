#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    layout = new QVBoxLayout();
    this->setLayout(layout);
    button = new QPushButton("Test");
    label = new QLabel();
    layout->addWidget(button);
    layout->addWidget(label);

    QObject::connect(button, SIGNAL(clicked()), this, SLOT(pushButton()));
}

Widget::~Widget()
{

}

void Widget::pushButton()
{
    MSBSystem system;
    label->setNum(system.systemTest());
}
