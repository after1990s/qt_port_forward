#ifndef FORWARDOBJECT_H
#define FORWARDOBJECT_H

#include <QObject>
#include <windows.h>
#include <WinSock2.h>
#pragma comment(lib, "ws32_2.lib")

class ForwardObject : public QObject
{
    Q_OBJECT
public:
    explicit ForwardObject(QObject *parent = 0);
    ~ForwardObject();

signals:

public slots:
    void AddForward(QString ListenPort, QString DstIP, QString DstPort)
    {

    }
};

#endif // FORWARDOBJECT_H
