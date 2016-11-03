#ifndef MYSIGNAL_H
#define MYSIGNAL_H

#include <QObject>
#include <QString>

class mysignal : public QObject
{
    Q_OBJECT
public:
    explicit mysignal(QObject *parent =0);
signals:
    void sig(QString str);

//槽函数必须用slots声明 如果不声明，编译会提示找不到槽函数，我在初学的时候忘记了在槽函数前加slots
public slots:
};

#endif // MYSIGNAL_H
