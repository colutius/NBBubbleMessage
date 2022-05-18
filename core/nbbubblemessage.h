/**
 * 5.15项目重构
 * @author DthRee
 * @date 22.5.15
 */
#ifndef NBBUBBLEMESSAGE_H
#define NBBUBBLEMESSAGE_H

#include <QWidget>
#include <QListWidget>
#include <QDebug>
#include <QPainter>
#include <QPaintEvent>

enum NB
{
    SetImage,       //设置背景图片
    SetColor,       //设置纯色背景
    NoSet,          //空
    RomoteSenter,   //远程发送者
    LocalSenter     //本地发送者
};


class NBBubbleMessage : public QListWidget
{
    Q_OBJECT
public:
    explicit NBBubbleMessage(QListWidget *parent = nullptr);
    void messageInit(NB nbItem);//初始化界面
    void paintEvent(QPaintEvent *ev);//绘图重置事件
    void setBackgroundImage(char* imagePath);//放置背景图片
    void sendMessage(NB sender, char* text);//发送消息
    void sendImage(NB sender, char* imageData);//发送图片

signals:
    void imagePathSignal(char* path);//放置图片信号
};

#endif // NBBUBBLEMESSAGE_H
