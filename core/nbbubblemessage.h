/**
 * 5.15项目重构
 * @author DthRee
 * @date 22.5.15
 */
#ifndef NBBUBBLEMESSAGE_H
#define NBBUBBLEMESSAGE_H

#include <QWidget>

class NBBubbleMessage : public QWidget
{
    Q_OBJECT
public:
    explicit NBBubbleMessage(QWidget *parent = nullptr);

    void messageInit();//初始化界面

signals:

};

#endif // NBBUBBLEMESSAGE_H
