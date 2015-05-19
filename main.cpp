#include <QCoreApplication>
#include <iostream>
#include <QDebug>
#include "Door.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug() << "Run Forrest!";

    Door door;
    qDebug () << "Door default color is brown?? " << door.getColor();
    door.setColor("blue");
    qDebug () << "Now, which color the Door is? " << door.getColor();
    return a.exec();
}
