/**
 *
 **/
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
#include <QTextCodec>
#include <QTime>
#include <QListWidget>

enum NBBM
{
    SetQss, //放置Qss背景
    SetImage, //放置图片背景
    NotSet, //无任何放置
    Remote, //远程用户
    Local   //本地用户
};



class NBBubbleMessage : public QListWidget
{
    Q_OBJECT
public:
    explicit NBBubbleMessage(QListWidget *parent = nullptr);
    void messageInit(NBBM nbbm, char* content = NULL);//初始化界面
    void setSendStatus(); //发送状态 仅已读功能可用时调用
    void setBackgroundImage(char* imagePath);//设置背景图片
    void resizeEvent(QResizeEvent *event);//大小重置事件
    void paintEvent(QPaintEvent *ev);
    void sendMessage(NBBM sender, char* message);//发送与接收消息

private:
    QImage backgroundImage; //背景文件缓存
    QPalette backgroundPalette; //背景调色板
    char* backgroundImagePath;//背景图片路径


signals:

};

#endif // NBBUBBLEMESSAGE_H
