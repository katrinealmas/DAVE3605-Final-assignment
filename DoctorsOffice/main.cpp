#include "mainwindow.h"
#include "dbconnect.cpp"
#include <QApplication>
#include <QtDebug>
#include <QtSql>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}

