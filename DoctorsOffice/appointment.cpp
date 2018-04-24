/**
* @author Katrine Almås (s299622)
*/
#include "appointment.h"
#include "patientcontroller.h"

Appointment::Appointment( QString date, QString time, QString patientId, QString doctorLicence)
{
    this->date = date;
    this->time = time;
    this->patientId = patientId;
    this->doctorLicence = doctorLicence;
}

QString Appointment::getId(){
    return id;
}
void Appointment::setId(QString id){
    this->id = id;
}
QString Appointment::getDate(){
    return date;
}
QString Appointment::getTime(){
    return time;
}
QString Appointment::getPatientId(){
    return patientId;
}
QString Appointment::getDoctorLicence(){
    return doctorLicence;
}

vector<Appointment> getAllAppointments(){
    QSqlQuery query;
    vector<Appointment> appointments;
       int numRows;
       query.exec("SELECT * FROM Appointment");
        int i = 0;
       QSqlDatabase defaultDB = QSqlDatabase::database();
       if (defaultDB.driver()->hasFeature(QSqlDriver::QuerySize)) {
           numRows = query.size();
       } else {
           while (query.next()) {
                 QString id = query.value(0).toString();
                 QString date = query.value(1).toString();
                 QString time = query.value(2).toString();
                 QString patientId = query.value(3).toString();
                 QString doctorLicence = query.value(4).toString();

                 Appointment test(date, time, patientId, doctorLicence);
                 test.setId(id);
                 appointments.push_back(test);
             }
       }
       return appointments;
}

void deleteAppointment(int remove){
    QSqlQuery query;
    query.prepare("DELETE FROM Appointment WHERE Id=?");

    query.addBindValue(remove);
    query.exec();
}

void addAppointmentValues(Appointment &appt){
    QSqlQuery query;

    query.prepare("INSERT INTO Appointment ("
                  "Date,"
                  "Time,"
                  "Patient,"
                  "Doctor)"
                  "VALUES (?,?,?,?);");

    query.addBindValue(appt.getDate());
    query.addBindValue(appt.getTime());
    query.addBindValue(appt.getPatientId());
    query.addBindValue(appt.getDoctorLicence());

    if(!query.exec()){
        qDebug() << "DIDN'T INSERT";
    }
}

