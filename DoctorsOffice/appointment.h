#ifndef TIMEPLAN_H
#define TIMEPLAN_H
#include <iostream>
#include <Qstring>
#include "patientcontroller.h"

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
   Appointment(QString date, QString time, QString patientId, QString doctorLicence);
   QString getId();
   void setId(QString id);
   QString getDate();
   QString getTime();
   QString getPatientId();
   QString getDoctorLicence();
};

vector<Appointment> getAllAppointments();
void deleteAppointment(int remove);
void addAppointmentValues(Appointment &appt);

#endif // TIMEPLAN_H
