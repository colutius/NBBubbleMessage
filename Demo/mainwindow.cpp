#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    bubbleMessage = new NBBubbleMessage;
    ui->layout->addWidget(bubbleMessage);
    //QMessageBox::information(nullptr, "警告", "程序已经运行", QMessageBox::Yes);
}

MainWindow::~MainWindow()
{
    delete ui;
}

