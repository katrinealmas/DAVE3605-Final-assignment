#include "doctorsoffice.h"
#include "ui_doctorsoffice.h"

DoctorsOffice::DoctorsOffice(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DoctorsOffice)
{
    ui->setupUi(this);
}

DoctorsOffice::~DoctorsOffice()
{
    delete ui;
}
