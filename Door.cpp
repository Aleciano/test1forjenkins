#include "Door.h"

Door::Door(QObject *parent) : QObject(parent)
{
    color = QString("brown");
    sizex = 50;
    sizey = 200;
}

Door::Door(QString newColor, int newX, int newY){
    color = newColor;
    sizex = newX;
    sizey = newY;
}

void Door::setColor(QString newColor){
    color = newColor;
}

QString Door::getColor(){
    return color ;
}

void Door::setX(int newX){
    sizex = newX;
}

int Door::getX(){
    return sizex ;
}

void Door::setY(int newY){
    sizey = newY;
}


int Door::getY(){
    return sizey ;
}
Door::~Door()
{

}

