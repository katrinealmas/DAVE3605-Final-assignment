#include "patient.h"
#include "doctorsoffice.h"
#include "ui_doctorsoffice.h"


/**
 * @brief PatientController::PatientController
 * @param doc
 * @author Ginelle Z. Ignacio
 *
 * Allows PatientController class to have access to
 * the datas and methods belonging to DoctorsOffice class.
 */
PatientController::PatientController(DoctorsOffice *doc):doctor(doc)
{

}


/**
 * @brief PatientController::editPatientInfo
 * @author Ginelle Z. Ignacio (s300364)
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
 * @author Ginelle Z. Ignacio (s300364)
 *
 * - Saves patient information.
 * - Clears text edits on current report.
 * - Disables line edits on basic- & contact information.
 */
void PatientController::savePatientInfo()
{
    QString summary = doctor->ui->summaryText->toPlainText();
    QString diagnosis = doctor->ui->diagnosisText->toPlainText();
    QString prescription = doctor->ui->prescriptionText->toPlainText();

    doctor->ui->historyTable->insertRow(doctor->ui->historyTable->rowCount());
    int row = doctor->ui->historyTable->rowCount()-1;
    doctor->ui->historyTable->setItem(row, 1, new QTableWidgetItem(summary));
    doctor->ui->historyTable->setItem(row, 2, new QTableWidgetItem(diagnosis));
    doctor->ui->historyTable->setItem(row, 3, new QTableWidgetItem(prescription));

    clearReport();
    disablePatientLineEdits();
}

/**
 * @brief PatientController::clearReport
 * @author Ginelle Z. Ignacio (s300364)
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
 * @author Ginelle Z. Ignacio (s300364)
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
