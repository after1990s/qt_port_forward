#ifndef FORWARDTHREAD_H
#define FORWARDTHREAD_H
#include <QThread>
#include <QObject>


class ForwardThread : public QThread
{
    Q_OBJECT
public:
    explicit ForwardTHread(QObject *parent = 0);
    ~ForwardTHread();

signals:

public slots:
protected:
    void run(){
        QThread::run ();
    }
};

#endif // FORWARDTHREAD_H
