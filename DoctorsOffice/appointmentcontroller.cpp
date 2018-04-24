#include "appointmentcontroller.h"
#include "doctorsoffice.h"
#include "ui_doctorsoffice.h"
#include "appointment.h"


AppointmentController::AppointmentController(DoctorsOffice *doc):doctor(doc)
{

}

/**
 * @brief AppointmentController::deleteAppt
 *
 * Delete selected row from appointment table.
 */
void AppointmentController::deleteAppt(){
    qDebug() << "OFFICIALLY INSIDE THE DELETE CONTROLLER METHOD";

    int id = doctor->ui->apptTable->currentRow();

    // delete from database
    deleteAppointment(doctor->ui->apptTable->currentRow());

    doctor->ui->apptTable->removeRow(doctor->ui->apptTable->currentRow());
}

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


