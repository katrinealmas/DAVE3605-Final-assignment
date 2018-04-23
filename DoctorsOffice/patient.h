/**
* @author Ginelle Z. Ignacio (s300364)
*/


#ifndef PATIENT_H
#define PATIENT_H

class DoctorsOffice;

class PatientController
{
public:
    PatientController(DoctorsOffice *doc);

    void editPatientInfo();

    void savePatientInfo();

    void clearReport();

    void disablePatientLineEdits();
private:
    DoctorsOffice *doctor;
};

#endif // PATIENTCONTROLLER_H
