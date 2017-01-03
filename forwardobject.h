#ifndef FORWARDOBJECT_H
#define FORWARDOBJECT_H

#include <QObject>
#include <WinSock2.h>
#include <windows.h>

#pragma comment(lib, "ws2_32.lib")

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
