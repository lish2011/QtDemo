#ifndef MYSLOT_H
#define MYSLOT_H

#include <QObject>
#include <QDebug>
#include <QString>

class myslot : public QObject
{
    Q_OBJECT
public:
    explicit myslot(QObject* parent= 0);
signals:


//槽函数必须用slots声明 如果不声明，编译会提示找不到槽函数，我在初学的时候忘记了在槽函数前加slots
public slots:
    void slot(QString str);
};

#endif // MYSLOT_H
