#include "forwardobject.h"

ForwardObject::ForwardObject(QObject *parent) : QObject(parent)
{
    WSADATA data = {0};
    WSAStartup (MAKEWORD(2,2), &data);
}

ForwardObject::~ForwardObject()
{

}

