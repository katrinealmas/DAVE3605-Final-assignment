
#ifndef PATIENT_H
#define PATIENT_H
#include "patient.h"

class DoctorsOffice;

class PatientController
{
public:
    PatientController(DoctorsOffice *doc);

    void editPatientInfo();

    void savePatientInfo();

    void clearReport();

    void disablePatientLineEdits();

    void showAllPatients();

    void selectPatientInfo();

    void showPatientInfo(Patient pat);

    void displayPatientHistory(QString id);

private:
    DoctorsOffice *doctor;
};

#endif // PATIENTCONTROLLER_H
