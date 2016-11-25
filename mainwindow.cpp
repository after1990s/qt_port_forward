#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QVBoxLayout *vLayout = new QVBoxLayout();
    QListView *netListView = new QListView(this);
    QHBoxLayout *hLayout = new QHBoxLayout();



    QLabel *labelListenPort = new QLabel(this);
    labelListenPort->setText ("Listen Port");
    QLineEdit *leListenPort = new QLineEdit(this);
    QLabel *labelForwardAD = new QLabel(this);
    labelForwardAD->setText("Forward Address");
    QLineEdit *leForwardAD = new QLineEdit(this);
    QPushButton *btnForward = new QPushButton(this);
    btnForward->setText ("ADD");

    vLayout->addWidget (netListView);
    vLayout->addLayout (hLayout);
    hLayout->addWidget (labelListenPort);
    hLayout->addWidget (leListenPort);
    hLayout->addWidget (labelForwardAD);
    hLayout->addWidget (leForwardAD);
    hLayout->addWidget (btnForward);


    QWidget *window = new QWidget();
    window->setLayout(vLayout);
    setCentralWidget(window);

    //端口号编辑时
    connect(leListenPort, &QLineEdit::textChanged, this, [=](const QString &text){
        if (text.length () == 0)
        {
            leListenPort->setStyleSheet ("QLineEdit { background-color: white }");
        }
        bool bPort = false;
        int port = text.toInt (&bPort);
        if (bPort)
        {
            if (port > 0 && port <= 65535)
            {
                leListenPort->setStyleSheet ("QLineEdit { background-color: white }");
                return;
            }
        }
        leListenPort->setStyleSheet ("QLineEdit { background-color: #FFFF99 }");
    });


    //地址编辑时

    //初始化forward线程
    ForwardObject *forwardObj = new ForwardObject();
    QThread *forwardThd =  new QThread();
    obj->moveToThread (forwardThd);


}

MainWindow::~MainWindow()
{
    delete ui;
}
