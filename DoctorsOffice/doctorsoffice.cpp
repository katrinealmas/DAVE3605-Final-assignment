#include "doctorsoffice.h"
#include "ui_doctorsoffice.h"

#include <QString>
#include <QTableWidget>

DoctorsOffice::DoctorsOffice(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DoctorsOffice)
{
    ui->setupUi(this);
    setWindowTitle("Doctor's office");
}

DoctorsOffice::~DoctorsOffice()
{
    delete ui;
}


/**
 * @brief DoctorsOffice::on_saveApptButton_clicked
 *
 * HOME TAB
 * - Saves newly created appointment
 * - Sends infromation to the APPOINTMENT TAB table list.
 */
void DoctorsOffice::on_saveApptButton_clicked()
{
    QString patient = ui->createApptPatientLine->text();
    QString doctor = ui->createApptDoctorLine->text();
    QString date = ui->createApptDateEdit->text();
    QString time = ui->createApptTimeEdit->text();

    clearCreateAppt();

    ui->apptTable->insertRow(ui->apptTable->rowCount());
    int row = ui->apptTable->rowCount()-1;
    ui->apptTable->setItem(row, 0, new QTableWidgetItem(patient));
    ui->apptTable->setItem(row, 1, new QTableWidgetItem(doctor));
    ui->apptTable->setItem(row, 2, new QTableWidgetItem(date));
    ui->apptTable->setItem(row, 3, new QTableWidgetItem(time));
}

/**
 * @brief DoctorsOffice::clearCreateAppt
 *
 * HOME TAB
 * - Helping method to clear line edits in create
 * appointment group.
 */
void DoctorsOffice::clearCreateAppt(){
    ui->createApptPatientLine->clear();
    ui->createApptDoctorLine->clear();
}

/**
 * @brief DoctorsOffice::on_savePatientButton_clicked
 *
 * HOME TAB
 * - Saves newly created patients
 * - Sends information on the PATIENT TAB's patient list.
 */
void DoctorsOffice::on_savePatientButton_clicked()
{
    QString firstname = ui->createPatientFirstLine->text();
    QString lastname = ui->createPatientLastLine->text();
    QString fullname = firstname + " " + lastname;
    QDate birthday = ui->createPatientBday->date();
    QString personalNr = ui->createPatientPersonNrLine->text();
    QString mobile = ui->createPatientMobileLine->text();
    QString street = ui->createPatientStreetLine->text();
    QString city = ui->createPatientCityLine->text();
    QString postalCode = ui->createPatientPostLine->text();

    //Show on list
    ui->patientList->insertItem(0, fullname);

    clearCreatePatient();

    //Show information
    ui->patientFirstLine->setText(firstname);
    ui->patientLastLine->setText(lastname);
    ui->patientBday->setDate(birthday);
    ui->patientPersonNrLine->setText(personalNr);
    ui->patientMobileLine->setText(mobile);
    ui->patientStreetLine->setText(street);
    ui->patientCityLine->setText(city);
    ui->patientPostLine->setText(postalCode);
}

/**
 * @brief DoctorsOffice::clearCreatePatient
 *
 * HOME TAB
 * - Helping method to clear line edits in Create Patient
 *  group box.
 */
void DoctorsOffice::clearCreatePatient(){
    ui->createPatientFirstLine->clear();
    ui->createPatientLastLine->clear();
    ui->createPatientPersonNrLine->clear();
    ui->createPatientMobileLine->clear();
    ui->createPatientStreetLine->clear();
    ui->createPatientCityLine->clear();
    ui->createPatientPostLine->clear();
}

/**
 * @brief DoctorsOffice::on_deleteApptButton_clicked
 *
 * APPOINTMENT TAB
 * - Deletes selected row to remove patient from the
 * appointment list.
 */
void DoctorsOffice::on_deleteApptButton_clicked()
{
    ui->apptTable->removeRow(ui->apptTable->currentRow());
}


/**
 * @brief DoctorsOffice::on_editPatientInfoButton_clicked
 *
 * PATIENT TAB
 * - Enables the line edits on basic- & contact information
 * group box to change data.
 */
void DoctorsOffice::on_editPatientInfoButton_clicked()
{
    ui->patientFirstLine->setEnabled(true);
    ui->patientLastLine->setEnabled(true);
    ui->patientBday->setEnabled(true);
    ui->patientPersonNrLine->setEnabled(true);
    ui->patientMobileLine->setEnabled(true);
    ui->patientStreetLine->setEnabled(true);
    ui->patientCityLine->setEnabled(true);
    ui->patientPostLine->setEnabled(true);
}


/**
 * @brief DoctorsOffice::on_savePatientInfoButton_clicked
 *
 * PATIENT TAB
 * - Saves patient information
 * - Clears text edits on current report.
 * - Disables line edits on basic- & contact information
 */
void DoctorsOffice::on_savePatientInfoButton_clicked()
{
    QString summary = ui->summaryText->toPlainText();
    QString diagnosis = ui->diagnosisText->toPlainText();
    QString prescription = ui->prescriptionText->toPlainText();

    ui->historyTable->insertRow(ui->historyTable->rowCount());
    int row = ui->historyTable->rowCount()-1;
    ui->historyTable->setItem(row, 1, new QTableWidgetItem(summary));
    ui->historyTable->setItem(row, 2, new QTableWidgetItem(diagnosis));
    ui->historyTable->setItem(row, 3, new QTableWidgetItem(prescription));

    clearReport();
    disablePatientLineEdits();
}

/**
 * @brief DoctorsOffice::clearReport
 *
 * PATIENT TAB
 * - Helping method to clear current report text edits
 * when the save button is fired.
 */
void DoctorsOffice::clearReport()
{
    ui->summaryText->clear();
    ui->diagnosisText->clear();
    ui->prescriptionText->clear();
}


/**
 * @brief DoctorsOffice::disablePatientLineEdits
 *
 * PATIENT TAB
 * - Helping method to disable line edits of patient
 * information when save button is fired.
 */
void DoctorsOffice::disablePatientLineEdits()
{
    ui->patientFirstLine->setEnabled(false);
    ui->patientLastLine->setEnabled(false);
    ui->patientBday->setEnabled(false);
    ui->patientPersonNrLine->setEnabled(false);
    ui->patientMobileLine->setEnabled(false);
    ui->patientStreetLine->setEnabled(false);
    ui->patientCityLine->setEnabled(false);
    ui->patientPostLine->setEnabled(false);
}

/**
 * @brief DoctorsOffice::on_saveCreateEmployee_clicked
 *
 * EMPLOYEE TAB
 * - Saves newly created employee.
 * - Show employee's fullname into the employee list.
 * - Clears line edits when save button is fired.
 */
void DoctorsOffice::on_saveCreateEmployee_clicked()
{
    QString firstname = ui->createEmployeeFirstLine->text();
    QString lastname = ui->createEmployeeLastLine->text();
    QString fullname = firstname + " " + lastname;
    QString positiion = ui->createEmployeePositionLine->text();
    QString mobile = ui->createEmployeeMobileLine->text();

   ui->employeeList->insertItem(0, fullname);

    clearCreateEmployee();

}

/**
 * @brief DoctorsOffice::clearCreateEmployee
 *
 * EMPLOYEE TAB
 * - Helping method to clear out the line edits in
 * Create Employee group box.
 */
void DoctorsOffice::clearCreateEmployee()
{
    ui->createEmployeeIdLine->clear();
    ui->createEmployeeFirstLine->clear();
    ui->createEmployeeLastLine->clear();
    ui->createEmployeePositionLine->clear();
    ui->createEmployeeMobileLine->clear();
}

/**
 * @brief DoctorsOffice::on_editEmployeeInfoButton_clicked
 *
 * EMPLOYEE TAB
 * - Enables the the line edits on Employee Information
 * group box to change data.
 */
void DoctorsOffice::on_editEmployeeInfoButton_clicked()
{
    ui->employeeFirstLine->setEnabled(true);
    ui->employeeLastLine->setEnabled(true);
    ui->employeePositionLine->setEnabled(true);
    ui->employeeMobileLine->setEnabled(true);
}

/**
 * @brief DoctorsOffice::on_saveEmployeeInfoButton_clicked
 *
 * EMPLOYEE TAB
 * - Helping to disable the line edits after changing the
 * data in "edit mode".
 */
void DoctorsOffice::on_saveEmployeeInfoButton_clicked()
{
    ui->employeeFirstLine->setEnabled(false);
    ui->employeeLastLine->setEnabled(false);
    ui->employeePositionLine->setEnabled(false);
    ui->employeeMobileLine->setEnabled(false);
}
