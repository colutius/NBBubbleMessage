#include "nbbubblemessage.h"

NBBubbleMessage::NBBubbleMessage(QListWidget *parent) : QListWidget(parent){ messageInit(NoSet); }

/**
 * 初始化消息函数
 * @brief NBBubbleMessage::messageInit
 */
void NBBubbleMessage::messageInit(NB nbItem)
{
    switch (nbItem)
    {
    case SetImage://Background Image 图片背景
        break;
    case SetColor://Background Color 纯色背景
        break;
    case NoSet:return;
    default:return;
    }
}

/**
 * 重置窗口大小
 * @brief NBBubbleMessage::paintEvent
 * @param ev
 */
void NBBubbleMessage::paintEvent(QPaintEvent *ev)
{

}

/**
 * 放置背景图片
 * @brief NBBubbleMessage::setBackgroundImage
 * @param imagePath
 */
void NBBubbleMessage::setBackgroundImage(char *imagePath)
{
    emit imagePathSignal(imagePath);
}
