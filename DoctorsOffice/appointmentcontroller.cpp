#include "appointment.h"
#include "doctorsoffice.h"
#include "ui_doctorsoffice.h"

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
 *
 * Delete selected row from appointment table.
 */
void AppointmentController::deleteAppt(){
    doctor->ui->apptTable->removeRow(doctor->ui->apptTable->currentRow());
}
