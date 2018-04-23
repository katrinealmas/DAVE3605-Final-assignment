#include "appointment.h"
#include "doctorsoffice.h"
#include "ui_doctorsoffice.h"


AppointmentController::AppointmentController(DoctorsOffice *doc):doctor(doc)
{

}

/**
 * @brief AppointmentController::deleteAppt
 *
 * Delete selected row from appointment table.
 */
void AppointmentController::deleteAppt(){
    doctor->ui->apptTable->removeRow(doctor->ui->apptTable->currentRow());
}
