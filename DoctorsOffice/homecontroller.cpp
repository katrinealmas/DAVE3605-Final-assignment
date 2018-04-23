#include "doctorsoffice.h"
#include "home.h"
#include "ui_doctorsoffice.h"



HomeController::HomeController(DoctorsOffice *doc):doctor(doc)
{

}


/**
 * @brief HomeController::selectDate
 *
 * Selects date from calendar widget.
 */
void HomeController::selectDate(){
    doctor->ui->createApptDateEdit->setDate(doctor->ui->calendarWidget->selectedDate());
}


/**
 * @brief HomeController::saveAppt
 *
 * - Saves newly created appointment
 * - Sends information to the APPOINTMENT TAB table list.
 */
void HomeController::saveAppt(){
    QString patient = doctor->ui->createApptPatientLine->text();
    QString patientsDoctor = doctor->ui->createApptDoctorLine->text();
    QString date = doctor->ui->createApptDateEdit->text();
    QString time = doctor->ui->createApptTimeEdit->text();

    if (patient.isEmpty() | patientsDoctor.isEmpty() |
            date.isEmpty() | time.isEmpty()) {
        doctor->validateIfEmpty();
    } else {
        doctor->ui->apptTable->insertRow(doctor->ui->apptTable->rowCount());
        int row = doctor->ui->apptTable->rowCount()-1;
        doctor->ui->apptTable->setItem(row, 0, new QTableWidgetItem(patient));
        doctor->ui->apptTable->setItem(row, 1, new QTableWidgetItem(patientsDoctor));
        doctor->ui->apptTable->setItem(row, 2, new QTableWidgetItem(date));
        doctor->ui->apptTable->setItem(row, 3, new QTableWidgetItem(time));

        clearCreateAppt();
    }
}

/**
 * @brief HomeController::clearCreateAppt
 *
 * Helping method to clear line edits in create
 * appointment group.
 */
void HomeController::clearCreateAppt(){
    doctor->ui->createApptPatientLine->clear();
    doctor->ui->createApptDoctorLine->setText("Dr. ");
    doctor->ui->createApptDateEdit->setDate(QDate::currentDate());
}

/**
 * @brief HomeController::savePatient
 *
 * - Saves newly created patients
 * - Sends information on the PATIENT TAB's patient list.
 */
void HomeController::savePatient()
{
    QString firstname = doctor->ui->createPatientFirstLine->text();
    QString lastname = doctor->ui->createPatientLastLine->text();
    QString fullname = firstname + " " + lastname;
    QDate birthday = doctor->ui->createPatientBday->date();
    QString personalNr = doctor->ui->createPatientPersonNrLine->text();
    QString mobile = doctor->ui->createPatientMobileLine->text();
    QString street = doctor->ui->createPatientStreetLine->text();
    QString city = doctor->ui->createPatientCityLine->text();
    QString postalCode = doctor->ui->createPatientPostLine->text();

    if(firstname.isEmpty() | lastname.isEmpty() |
            birthday.isNull() | personalNr.isEmpty() |
            mobile.isEmpty() | street.isEmpty() |
            city.isEmpty() | postalCode.isEmpty()){
        doctor->validateIfEmpty();
    }
    else {
        //Show on list
        doctor->ui->patientList->insertItem(0, fullname);

        //Send information on Patient Tab
        doctor->ui->patientFirstLine->setText(firstname);
        doctor->ui->patientLastLine->setText(lastname);
        doctor->ui->patientBday->setDate(birthday);
        doctor->ui->patientPersonNrLine->setText(personalNr);
        doctor->ui->patientMobileLine->setText(mobile);
        doctor->ui->patientStreetLine->setText(street);
        doctor->ui->patientCityLine->setText(city);
        doctor->ui->patientPostLine->setText(postalCode);

        clearCreatePatient();
    }

}


/**
 * @brief HomeController::clearCreatePatient
 *
 *  Helping method to clear line edits in Create Patient
 *  group box.
 */
void HomeController::clearCreatePatient(){
    doctor->ui->createPatientFirstLine->clear();
    doctor->ui->createPatientLastLine->clear();
    doctor->ui->createPatientPersonNrLine->clear();
    doctor->ui->createPatientMobileLine->clear();
    doctor->ui->createPatientStreetLine->clear();
    doctor->ui->createPatientCityLine->clear();
    doctor->ui->createPatientPostLine->clear();
}




