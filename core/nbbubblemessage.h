#ifndef NBBUBBLEMESSAGE_H
#define NBBUBBLEMESSAGE_H

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include <QFile>
#include <QImage>
#include <QPalette>
#include <QString>
#include <QDebug>

class NBBubbleMessage : public QWidget
{
    Q_OBJECT
public:
    explicit NBBubbleMessage(QWidget *parent = nullptr);
    void messageInit(QString qss = NULL);//初始化界面
    void sendMessage();//发送消息
    void setSendStatus(); //发送状态 仅已读功能可用时调用
    void setBackgroundImage(char* imagePath);//设置背景图片
    void resizeEvent(QResizeEvent *event);//大小重置事件

private:
    QImage backgroundImage; //背景文件缓存
    QPalette backgroundPalette; //背景调色板
    char* backgroundImagePath;//背景图片路径


signals:

};

#endif // NBBUBBLEMESSAGE_H
