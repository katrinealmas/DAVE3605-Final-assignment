#include "patientcontroller.h"
#include "doctorsoffice.h"
#include "ui_doctorsoffice.h"
#include "patient.h"
#include "summary.h"

#include <vector>
#include <iostream>

PatientController::PatientController(DoctorsOffice *doc):doctor(doc)
{

}


/**
 * @brief PatientController::editPatientInfo
 *
 * Enables the line edits on basic- & contact information
 * group box to change data.
 */
void PatientController::editPatientInfo()
{
    doctor->ui->patientFirstLine->setEnabled(true);
    doctor->ui->patientLastLine->setEnabled(true);
    doctor->ui->patientBday->setEnabled(true);
    doctor->ui->patientPersonNrLine->setEnabled(true);
    doctor->ui->patientMobileLine->setEnabled(true);
    doctor->ui->patientStreetLine->setEnabled(true);
    doctor->ui->patientCityLine->setEnabled(true);
    doctor->ui->patientPostLine->setEnabled(true);
}


/**
 * @brief PatientController::savePatientInfo
 *
 * - Saves patient information.
 * - Clears text edits on current report.
 * - Disables line edits on basic- & contact information.
 */
void PatientController::savePatientInfo(){

    // PATIENT INFORMATION
    disablePatientLineEdits();

    QString personNr = doctor->ui->patientPersonNrLine->text();
    QString firstname = doctor->ui->patientFirstLine->text();
    QString lastname = doctor->ui->patientLastLine->text();
    QString mobile = doctor->ui->patientMobileLine->text();
    QString address = doctor->ui->patientStreetLine->text();
    QString postcode = doctor->ui->patientPostLine->text();
    QString city = doctor->ui->patientCityLine->text();
    QString birthday = doctor->ui->patientBday->text();

    Patient pat(personNr,firstname, lastname, mobile, address, postcode, city, birthday);
    int index = doctor->ui->patientList->currentRow()+1;
    QString tmp = QString::number(index);
    pat.setId(tmp);
    cout << "Is it the correct id for patients?: "<< index << endl;
    editPatient(pat);


    QListWidgetItem *item = doctor->ui->patientList->currentItem();


    // Edits the information in the widget list after it has been edited and saved
    QString info = pat.getId() + " " + firstname + " " + lastname;
    item->setText(info);

    // HISTORY INFORMATION
    QString id = doctor->ui->patientPersonNrLine->text();
    QString sum = doctor->ui->summaryText->toPlainText();
    QString diagnosis = doctor->ui->diagnosisText->toPlainText();
    QString prescription = doctor->ui->prescriptionText->toPlainText();

    if(!(sum.count(' ') == sum.length())){
    int row = doctor->ui->historyTable->rowCount()-1;
    doctor->ui->historyTable->setItem(row, 0, new QTableWidgetItem(QDate::currentDate().toString("dd/MM/yyyy")));
    doctor->ui->historyTable->setItem(row, 1, new QTableWidgetItem(sum));
    doctor->ui->historyTable->setItem(row, 2, new QTableWidgetItem(diagnosis));
    doctor->ui->historyTable->setItem(row, 3, new QTableWidgetItem(prescription));

    Summary summary(0, diagnosis, sum, pat.getId(), prescription, QDate::currentDate().toString("dd/MM/yyyy"));
    addSummaryValues(summary);
    displayPatientHistory(pat.getId());
    }
    qDebug() << "What is the id now?: " << pat.getId();
    clearReport();
    disablePatientLineEdits();
}

void PatientController::displayPatientHistory(QString id){

    // WHEN PATIENT IS SELECTED; THE HISTORY IS DISPLAYED
    vector<Summary> patientHistory = getSummaryHistory(id);
    doctor->ui->historyTable->setRowCount(patientHistory.size());
    doctor->ui->historyTable->setSortingEnabled(false);
    for(int i = 0; i < patientHistory.size(); i++){

        qDebug() << patientHistory.at(i).getPatient() << "Og info: " + patientHistory.at(i).getDiagnosis();

        doctor->ui->historyTable->setItem(i, 0, new QTableWidgetItem(patientHistory.at(i).getDate()));
        doctor->ui->historyTable->setItem(i, 1, new QTableWidgetItem(patientHistory.at(i).getSummary()));
        doctor->ui->historyTable->setItem(i, 2, new QTableWidgetItem(patientHistory.at(i).getDiagnosis()));
        doctor->ui->historyTable->setItem(i, 3, new QTableWidgetItem(patientHistory.at(i).getPrescription()));
    }

}

void PatientController::showAllPatients(){

       vector<Patient> data = getAllPatients();
       for(int i = 0; i < data.size(); i++){
            QString id = data.at(i).getId();
            QString name = data.at(i).getFirstname();
            QString last = data.at(i).getSurname();

            QString fullname = id + " " + name + " " + last;
            doctor->ui->patientList->insertItem(i, fullname);
        }

    }

void PatientController::selectPatientInfo(){
    //Getting the selected item from view
    QListWidgetItem *item = doctor->ui->patientList->currentItem();
    QString selectedPatient = item->text();

    //Splits QString to extract the id
    QStringList list = selectedPatient.split(QRegExp("\\s+"), QString::SkipEmptyParts);

    // Contains the id
    list[0];

    editPatientInfo();
    Patient edited = getPatient(list[0]);
    showPatientInfo(edited);

    // when patient is selected, history is displayed
    displayPatientHistory(list[0]);
}

void PatientController::showPatientInfo(Patient pat){
    doctor->ui->patientPersonNrLine->setText(pat.getPersonNr());
    doctor->ui->patientFirstLine->setText(pat.getFirstname());
    doctor->ui->patientLastLine->setText(pat.getSurname());
    doctor->ui->patientMobileLine->setText(pat.getTlf());
    doctor->ui->patientStreetLine->setText(pat.getAddress());
    doctor->ui->patientPostLine->setText(pat.getPostcode());
    doctor->ui->patientCityLine->setText(pat.getCity());
   //doctor->ui->patientBday->setText(pat.getBirthday());

    disablePatientLineEdits();
}

/**
 * @brief PatientController::clearReport
 *
 * Helping method to clear current report text edits
 * when the save button is fired.
 */
void PatientController::clearReport()
{
    doctor->ui->summaryText->clear();
    doctor->ui->diagnosisText->clear();
    doctor->ui->prescriptionText->clear();
}


/**
 * @brief PatientController::disablePatientLineEdits
 *
 * Helping method to disable line edits of patient
 * information when save button is fired.
 */
void PatientController::disablePatientLineEdits()
{
    doctor->ui->patientFirstLine->setEnabled(false);
    doctor->ui->patientLastLine->setEnabled(false);
    doctor->ui->patientBday->setEnabled(false);
    doctor->ui->patientPersonNrLine->setEnabled(false);
    doctor->ui->patientMobileLine->setEnabled(false);
    doctor->ui->patientStreetLine->setEnabled(false);
    doctor->ui->patientCityLine->setEnabled(false);
    doctor->ui->patientPostLine->setEnabled(false);
}
