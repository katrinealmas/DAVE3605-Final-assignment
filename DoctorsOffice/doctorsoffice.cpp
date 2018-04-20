#include "doctorsoffice.h"
#include "home.h"
#include "appointment.h"
#include "patient.h"
#include "employee.h"
#include "ui_doctorsoffice.h"

#include <QMessageBox>

DoctorsOffice::DoctorsOffice(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DoctorsOffice),
    home(new HomeController(this)),
    appt(new AppointmentController(this)),
    patient(new PatientController(this)),
    employee(new EmployeeController(this))
{
    ui->setupUi(this);
    setWindowTitle("Doctor's office");
}

DoctorsOffice::~DoctorsOffice()
{
    delete ui;
    delete home;
    delete appt;
    delete patient;
    delete employee;
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
    home->saveAppt();
}

/**
 * @brief DoctorsOffice::clearCreateAppt
 *
 * HOME TAB
 * - Helping method to clear line edits in create
 * appointment group.
 */
void DoctorsOffice::clearCreateAppt(){
    home->clearCreateAppt();
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
    home->savePatient();
}

/**
 * @brief DoctorsOffice::clearCreatePatient
 *
 * HOME TAB
 * - Helping method to clear line edits in Create Patient
 *  group box.
 */
void DoctorsOffice::clearCreatePatient(){
    home->clearCreatePatient();
}


/**
 * @brief DoctorsOffice::on_deleteApptButton_clicked
 *
 * APPOINTMENT TAB
 * - Deletes selected row to remove patient from the
 * appointment list when user confirms the alert dialog
 * box.
 */
void DoctorsOffice::on_deleteApptButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirm", "Are you sure you want "
                                  "to delete the selected appointment?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
      appt->deleteAppt();
    }
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
    patient->editPatientInfo();
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
    patient->savePatientInfo();
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
    patient->clearReport();
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
    patient->disablePatientLineEdits();
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
    employee->saveCreateEmployee();
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
    employee->clearCreateEmployee();
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
    employee->editEmployeeInfo();
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
    employee->saveEmployeeInfo();
}
