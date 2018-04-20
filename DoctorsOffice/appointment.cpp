#include "appointment.h"
#include "patient.h"

Appointment::Appointment(int id, QString date, QString time, QString patientId, QString doctorLicence)
{
    this->id = id;
    this->date = date;
    this->time = time;
    this->patientId = patientId;
    this->doctorLicence = doctorLicence;
}

void Appointment::getOutput(){
    std::string utf8_text = date.toUtf8().constData();
    cout << utf8_text << endl;
}
