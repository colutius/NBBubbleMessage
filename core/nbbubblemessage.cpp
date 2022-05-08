#include "nbbubblemessage.h"

NBBubbleMessage::NBBubbleMessage(QWidget *parent) : QWidget(parent)
{
    //默认背景颜色
    this->setAttribute(Qt::WA_StyledBackground);//设置为背景样式可调
    this->setStyleSheet("background-color: rgb(64, 220, 255);"); //默认颜色
    messageInit();
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


