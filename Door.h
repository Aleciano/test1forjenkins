#ifndef DOOR_H
#define DOOR_H

#include <QObject>

class Door : public QObject
{
    Q_OBJECT
public:
    explicit Door(QObject *parent = 0);
    Door(QString newColor, int newX, int newY);
    void setColor(QString newColor);
    void setY(int newY);
    void setX(int newX);
    QString getColor();
    int getX();
    int getY();


    ~Door();

signals:

public slots:

private:
     QString color;
     int sizex;
     int sizey;

};

#endif // DOOR_H
