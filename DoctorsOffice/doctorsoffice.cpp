#include "doctorsoffice.h"
#include "home.h"
#include "appointmentcontroller.h"
#include "patientcontroller.h"
#include "employeecontroller.h"
#include "ui_doctorsoffice.h"
#include "db.h"

#include <QMessageBox>

#include <QApplication>
#include <QtDebug>
#include <QtSql>

/**
 * @brief DoctorsOffice::DoctorsOffice
 * @param parent
 * @author Ginelle Z. Ignacio (s300364)
 *
 * - Connects the classes to the user interface.
 * - Initialize GUI elements and inputn validations
 * when the program starts.
 * - Populate GUI lists and appointments with information from database
 */
DoctorsOffice::DoctorsOffice(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DoctorsOffice),
    home(new HomeController(this)),
    appt(new AppointmentController(this)),
    patient(new PatientController(this)),
    employee(new EmployeeController(this))
{
    ui->setupUi(this);

    //Initialize GUI elements
        ui->createApptDateEdit->setDate(QDate::currentDate());
        ui->createApptTimeEdit->setDisplayFormat("hh:mm");
        ui->createApptTimeEdit->setTime(QTime(9,00));
        ui->createPatientBday->setDate(QDate::currentDate().addYears(-20));
        ui->patientBday->setDisplayFormat("d MMM yyyy");

        //Initialize validations
        ui->calendarWidget->setMinimumDate(QDate::currentDate());
        ui->createApptDateEdit->setMinimumDate(QDate::currentDate());
        ui->calendarWidget->setMaximumDate(QDate::currentDate().addMonths(3));
        ui->createApptDateEdit->setMaximumDate(QDate::currentDate().addMonths(3));
        ui->createPatientBday->setMinimumDate(QDate::currentDate().addYears(-130));
        ui->createPatientBday->setMaximumDate(QDate::currentDate());
        ui->patientBday->setMinimumDate(QDate::currentDate().addYears(-130));
        ui->patientBday->setMaximumDate(QDate::currentDate());

        QRegExp rxMobile("[0-9]{8}");
        ui->createPatientMobileLine->setValidator(new QRegExpValidator (rxMobile, this));
        ui->patientMobileLine->setValidator(new QRegExpValidator (rxMobile, this));
        ui->employeeMobileLine->setValidator(new QRegExpValidator(rxMobile, this));
        ui->createEmployeeMobileLine->setValidator(new QRegExpValidator(rxMobile, this));

        QRegExp rxPersonalNr("[0-9]{11}");
        ui->createPatientPersonNrLine->setValidator(new QRegExpValidator(rxPersonalNr, this));
        ui->patientPersonNrLine->setValidator(new QRegExpValidator(rxPersonalNr, this));
        ui->createApptPatientLine->setValidator(new QRegExpValidator(rxPersonalNr, this));

        QRegExp rxPost("[0-9]{4}");
        ui->createPatientPostLine->setValidator(new QRegExpValidator(rxPost, this));
        ui->patientPostLine->setValidator(new QRegExpValidator(rxPost, this));

        QRegExp rxEmployeeId("[0-9]");
        ui->createApptDoctorLine->setValidator(new QRegExpValidator(rxEmployeeId, this));

        //Set up database connection and initalize all lists
        createConnection();
        employee->showAllEmployees();
        patient->showAllPatients();
        appt->showAllAppointments();

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
 * @brief DoctorsOffice::on_calendarWidget_clicked
 * @param date
 * @author Ginelle Z. Ignacio (s300364)
 *
 * HOME TAB
 * - Selects date from calendar widget.
 */
void DoctorsOffice::on_calendarWidget_clicked(const QDate &date)
{
    home->selectDate();
}

/**
 * @brief DoctorsOffice::on_saveApptButton_clicked
 * @author Ginelle Z. Ignacio (s300364)
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
 * @author Ginelle Z. Ignacio (s300364)
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
 * @author Ginelle Z. Ignacio (s300364)
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
 * @author Ginelle Z. Ignacio (s300364)
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
 * @author Ginelle Z. Ignacio (s300364)
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
        qDebug() << "About to hit yes for delete";
      appt->deleteAppt();
      qDebug() << "Successfully hit yes for delete";
    }
}


/**
 * @brief DoctorsOffice::on_editPatientInfoButton_clicked
 * @author Ginelle Z. Ignacio (s300364)
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
 * @author Ginelle Z. Ignacio (s300364)
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
 * @author Ginelle Z. Ignacio (s300364)
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
 * @author Ginelle Z. Ignacio (s300364)
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
 * @author Ginelle Z. Ignacio (s300364)
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
 * @author Ginelle Z. Ignacio (s300364)
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
 * @author Ginelle Z. Ignacio (s300364)
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
 * @author Ginelle Z. Ignacio (s300364)
 *
 * EMPLOYEE TAB
 * - Helping to disable the line edits after changing the
 * data in "edit mode".
 */
void DoctorsOffice::on_saveEmployeeInfoButton_clicked()
{
    employee->saveEmployeeInfo();
}

/**
 * @brief DoctorsOffice::on_selectEmployeeButton_clicked
 * @author Katrine Almås (s299622)
 *
 * - Helping method to select employee information from GUI list
 */
void DoctorsOffice::on_selectEmployeeButton_clicked()
{
    employee->selectEmployeeInfo();
}

/**
 * @brief DoctorsOffice::on_selectPatientButton_clicked
 * @author Katrine Almås (s299622)
 *
 * - Helping method to select patient information from GUI list
 */
void DoctorsOffice::on_selectPatientButton_clicked()
{
    patient->selectPatientInfo();
}

/**
 * @brief DoctorsOffice::validateIfEmpty
 * @author Ginelle Z. Ignacio (s300364)
 *
 * Warning message box when user does not set in
 * information on all input fields when creating
 * an appointment.
 */
void DoctorsOffice::validateIfEmpty(){
    QMessageBox::warning(this, "Warning", "You must fill up information "
                                            "on each input fields.");
}
