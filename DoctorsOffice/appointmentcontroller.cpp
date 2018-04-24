#include "appointmentcontroller.h"
#include "doctorsoffice.h"
#include "ui_doctorsoffice.h"
#include "appointment.h"

/**
 * @brief AppointmentController::AppointmentController
 * @param doc
 * @author Ginelle Z. Ignacio (s300364)
 *
 * Allows AppointmentController class to have access to
 * the datas and methods belonging to DoctorsOffice class.
 */
AppointmentController::AppointmentController(DoctorsOffice *doc):doctor(doc)
{

}


/**
 * @brief AppointmentController::deleteAppt
 * @author Katrine Almås (s299622) og Ginelle Z. Ignacio (s300364)
 *
 * - Delete an appointment from the database
 * - Delete an appointment from the user interface table
 */
void AppointmentController::deleteAppt(){

    int id = doctor->ui->apptTable->currentRow();
    deleteAppointment(id);

    doctor->ui->apptTable->removeRow(doctor->ui->apptTable->currentRow());
}


/**
 * @brief AppointmentController::showAllAppointments
 * @author Katrine Almås (s299622)
 *
 * - Displays all appointments in table
 */

void AppointmentController::showAllAppointments(){

    vector<Appointment> data = getAllAppointments();

    doctor->ui->apptTable->setRowCount(data.size());
    doctor->ui->apptTable->setColumnCount(4);
    doctor->ui->apptTable->setSortingEnabled(false);

    for(int i = 0; i < data.size(); i++){

        doctor->ui->apptTable->setItem(i, 2, new QTableWidgetItem(data.at(i).getDate()));
        doctor->ui->apptTable->setItem(i, 3, new QTableWidgetItem(data.at(i).getTime()));
        doctor->ui->apptTable->setItem(i, 0, new QTableWidgetItem(data.at(i).getPatientId()));
        doctor->ui->apptTable->setItem(i, 1, new QTableWidgetItem(data.at(i).getDoctorLicence()));
    }
}


