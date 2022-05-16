#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    message = new NBBubbleMessage;
    ui->layout->addWidget(message);
}

Widget::~Widget()
{
    delete ui;
}

