#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "qheaders.h"
#include <QMainWindow>
#include "forwardobject.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private:

};

#endif // MAINWINDOW_H
