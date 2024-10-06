#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    WorkingSpace* sp = new WorkingSpace(&w);
    w.setCentralWidget(sp);

    w.show();
    return a.exec();
}
