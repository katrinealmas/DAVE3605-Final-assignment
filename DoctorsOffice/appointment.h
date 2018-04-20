#ifndef TIMEPLAN_H
#define TIMEPLAN_H
#include <iostream>
#include <Qstring>
#include "patient.h"

using namespace std;

class Appointment
{
private:
    QString id;
    QString date;
    QString time;
    QString patientId;
    QString doctorLicence;

public:
   Appointment(int id, QString date, QString time, QString patientId, QString doctorLicence);
   void getOutput();
};

#endif // TIMEPLAN_H
