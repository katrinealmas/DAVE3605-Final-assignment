#include "doctorsoffice.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DoctorsOffice w;
    w.show();

    return a.exec();
}
