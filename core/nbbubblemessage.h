#ifndef NBBUBBLEMESSAGE_H
#define NBBUBBLEMESSAGE_H

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include <QFile>
#include <QImage>
#include <QPalette>
#include <QString>

class NBBubbleMessage : public QWidget
{
    Q_OBJECT
public:
    explicit NBBubbleMessage(QWidget *parent = nullptr);

    void messageInit(QString qss = NULL);//初始化界面

    void sendMessage();//发送消息

    void setSendStatus(); //发送状态 仅已读功能可用时调用

private:

    QImage backgroundImage; //背景文件缓存

    QPalette backgroundPalette; //背景调色板


signals:

};

#endif // NBBUBBLEMESSAGE_H
