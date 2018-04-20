#include "summary.h"

Summary::Summary(int id, QString diagnosis, QString summary, QString patient, QString doctor, QString prescription)
{
    this->id = id;
    this->patient = patient;
    this->doctor = doctor;
    this->diagnosis = diagnosis;
    this->prescription = prescription;
    this->summary = summary;
}


void Summary::getOutput(){
    std::string utf8_text = diagnosis.toUtf8().constData();
    cout << utf8_text << endl;
}
