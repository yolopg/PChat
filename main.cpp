#include "mainwindow.h"

#include <QApplication>
#include<QFile>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile qss(":/styles/stylesheets.qss");
    if(qss.open(QFile::ReadOnly)){
        qDebug("oepn success");
        QString style=QString::fromUtf8(qss.readAll());//专门用于处理 UTF-8 编码字符串的类
        a.setStyleSheet(style);
        qss.close();
    }else{
        qDebug("open error");
    }
    MainWindow w;
    w.show();
    return a.exec();
}
