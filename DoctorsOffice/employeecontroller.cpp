#include "employee.h"
#include "doctorsoffice.h"
#include "ui_doctorsoffice.h"

EmployeeController::EmployeeController(DoctorsOffice *doc):doctor(doc)
{

}

/**
 * @brief EmployeeController::saveCreateEmployee
 *
 * - Saves newly created employee.
 * - Shows employee's fullname into the employee list.
 * - Shows newly created employee information.
 * - Clears line edits when save button is fired.
 */
void EmployeeController::saveCreateEmployee()
{
    QString firstname = doctor->ui->createEmployeeFirstLine->text();
    QString lastname = doctor->ui->createEmployeeLastLine->text();
    QString fullname = firstname + " " + lastname;
    QString position = doctor->ui->createEmployeePositionLine->text();
    QString mobile = doctor->ui->createEmployeeMobileLine->text();

    //Show on Employee List
    doctor->ui->employeeList->insertItem(0, fullname);

    //Show employee information
    doctor->ui->employeeFirstLine->setText(firstname);
    doctor->ui->employeeLastLine->setText(lastname);
    doctor->ui->employeePositionLine->setText(position);
    doctor->ui->employeeMobileLine->setText(mobile);

    clearCreateEmployee();
}

/**
 * @brief EmployeeController::clearCreateEmployee
 *
 * - Helping method to clear out the line edits in
 * Create Employee group box.
 */
void EmployeeController::clearCreateEmployee()
{
    doctor->ui->createEmployeeFirstLine->clear();
    doctor->ui->createEmployeeLastLine->clear();
    doctor->ui->createEmployeePositionLine->clear();
    doctor->ui->createEmployeeMobileLine->clear();
}

/**
 * @brief EmployeeController::editEmployeeInfoButton
 *
 * Enables the the line edits on Employee Information
 * group box to change data.
 */
void EmployeeController::editEmployeeInfo()
{
    doctor->ui->employeeFirstLine->setEnabled(true);
    doctor->ui->employeeLastLine->setEnabled(true);
    doctor->ui->employeePositionLine->setEnabled(true);
    doctor->ui->employeeMobileLine->setEnabled(true);
}

/**
 * @brief EmployeeController::saveEmployeeInfoButton
 *
 * Helping to disable the line edits after changing the
 * data in "edit mode".
 */
void EmployeeController::saveEmployeeInfo()
{
    doctor->ui->employeeFirstLine->setEnabled(false);
    doctor->ui->employeeLastLine->setEnabled(false);
    doctor->ui->employeePositionLine->setEnabled(false);
    doctor->ui->employeeMobileLine->setEnabled(false);
}
