#include "myslot.h"

myslot::myslot(QObject *parent) :
    QObject(parent)
{
}

void myslot::slot(QString str)
{
   qDebug() << "MySlot::slot is called";
   qDebug() << str;
}
