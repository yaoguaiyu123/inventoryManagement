// Date:2024/2/17
// Author:妖怪鱼
// Introduction:商品库存管理系统
// 简单实现增删改查，不进行分层
#include "mainwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWidget w;
    w.show();
    return a.exec();
}
