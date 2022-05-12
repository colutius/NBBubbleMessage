#include "nbbubblemessage.h"

NBBubbleMessage::NBBubbleMessage(QListWidget *parent) : QListWidget(parent)
{
    //默认背景颜色
    this->setAttribute(Qt::WA_StyledBackground);//设置为背景样式可调
    this->setAutoFillBackground(true);//设置自动填充背景
    //this->setStyleSheet("background-color: black");
}

/**
 * 背景初始化
 * @brief NBBubbleMessage::messageInit
 * @param nbbm NotSet不设置任何参数 SetQss设置QSS样式(char*) SetImage设置背景图片路径(char*)
 * @param content所需参数
 */
void NBBubbleMessage::messageInit(NBBM nbbm, char* content)
{
    switch (nbbm)
    {
    case NBBM::SetQss: this->setStyleSheet(content);break;
    case NBBM::SetImage:
        this->setBackgroundImage(content);
        qDebug() << "背景图片地址:" <<this->backgroundImagePath;
        break;
    case NBBM::NotSet: break;
    default: return;
    }
}

/**
 * 设置聊天背景图片
 * @brief NBBubbleMessage::setBackgroundImage
 * @param imagePath
 */
void NBBubbleMessage::setBackgroundImage(char* imagePath)
{
    //this->setStyleSheet("");
    this->backgroundImagePath = imagePath;
    backgroundImage.load(imagePath);
    backgroundPalette.setBrush(this->backgroundRole(), QBrush(backgroundImage.scaled(this->size())));
    this->setPalette(backgroundPalette);
}

/**
 * 重写修改事件
 * @brief NBBubbleMessage::resizeEvent
 * @param event
 */
void NBBubbleMessage::resizeEvent(QResizeEvent *event)
{
    if (backgroundImagePath != NULL)
    {
        this->setBackgroundImage(backgroundImagePath);
    }
}

/**
 * 更新发送状态
 * 是否是发送成功
 * @brief NBBubbleMessage::setSendStatus
 */
void NBBubbleMessage::setSendStatus()
{

}

/**
 * 发送与接收消息
 * @brief NBBubbleMessage::sendMessage
 * @param sender NBBM::Remote远程发送者消息 NBBM::Local本地发送者消息
 * @param message 消息内容
 */
void NBBubbleMessage::sendMessage(NBBM sender, char* message)
{

}



