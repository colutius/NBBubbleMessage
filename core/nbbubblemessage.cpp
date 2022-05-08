#include "nbbubblemessage.h"

NBBubbleMessage::NBBubbleMessage(QWidget *parent) : QWidget(parent)
{
    //默认背景颜色
    this->setAttribute(Qt::WA_StyledBackground);//设置为背景样式可调
    this->setAutoFillBackground(true);//设置自动填充背景
}

/**
 * 背景初始化
 * @brief NBBubbleMessage::messageInit
 */
void NBBubbleMessage::messageInit(QString qss)
{
    if (qss != NULL)
    {
        this->setStyleSheet(qss);
    }
}

/**
 * 设置聊天背景图片
 * @brief NBBubbleMessage::setBackgroundImage
 * @param imagePath
 */
void NBBubbleMessage::setBackgroundImage(char* imagePath)
{
    this->backgroundImagePath = imagePath;
    backgroundImage.load(imagePath);
    backgroundPalette.setBrush(this->backgroundRole(), QBrush(backgroundImage.scaled(this->size())));
    this->setPalette(backgroundPalette);
    qDebug() << "参数地址" << imagePath;
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




