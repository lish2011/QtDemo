#include "mysignal.h"
#include "myslot.h"
#include <QCoreApplication>
#include <QObject>

int main(int argc, char* argv[])
{
    QCoreApplication cApp(argc, argv);
    mysignal mySig;
    myslot mySlot;

    QObject::connect(&mySig, SIGNAL(sig(QString)), &mySlot, SLOT(slot(QString)));
  //  QObject::connect(&mySig, SIGNAL(sig()), &mySlot, SLOT(slot()));

    emit mySig.sig("hello world");
    return cApp.exec();
}
