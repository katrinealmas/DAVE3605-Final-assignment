#include "employeecontroller.h"
#include "doctorsoffice.h"
#include "ui_doctorsoffice.h"
#include "employee.h"

#include <QApplication>
#include <QtDebug>
#include <QtSql>

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
    QString position = doctor->ui->createEmployeePositionLine->text();
    QString mobile = doctor->ui->createEmployeeMobileLine->text();

    //Check if one of the input field is empty
    if(firstname.isEmpty() | lastname.isEmpty() |
            position.isEmpty() | mobile.isEmpty()){
        doctor->validateIfEmpty();
    }else {
    int temp = doctor->ui->employeeList->count();
    QString id = QString::number(temp+1);
    QString info = id + " " + firstname + " " + lastname;

    Employee hired(id,firstname,lastname,mobile,position);
     qDebug() << "in controller" << hired.getFirstname();
    addEmployeeValues(hired);

    doctor->ui->employeeList->insertItem(temp, info);

    //Show employee information
    showEmployeeInfo(hired);
    clearCreateEmployee();
    }
}

void EmployeeController::showEmployeeInfo(Employee hired){
    doctor->ui->employeeIdLine->setText(hired.getId());
    doctor->ui->employeeFirstLine->setText(hired.getFirstname());
    doctor->ui->employeeLastLine->setText(hired.getSurname());
    doctor->ui->employeePositionLine->setText(hired.getPosition());
    doctor->ui->employeeMobileLine->setText(hired.getTlf());

    doctor->ui->employeeIdLine->setEnabled(false);
    doctor->ui->employeeFirstLine->setEnabled(false);
    doctor->ui->employeeLastLine->setEnabled(false);
    doctor->ui->employeePositionLine->setEnabled(false);
    doctor->ui->employeeMobileLine->setEnabled(false);
}
void EmployeeController::showAllEmployees(){
    //Show on Employee List
   vector<Employee> data = getAllEmployees();

   for(int i = 0; i < data.size(); i++){
        QString name = data.at(i).getFirstname();
        QString last = data.at(i).getSurname();
        QString id = data.at(i).getId();
        QString fullname = id + " " + name + " " + last;
        doctor->ui->employeeList->insertItem(i+1, fullname);
    }
}

void EmployeeController::selectEmployeeInfo(){
    //Getting the selected item from view
    QListWidgetItem *item = doctor->ui->employeeList->currentItem();
    QString selectedEmployee = item->text();

    //Splits QString to extract employee id
    QStringList list = selectedEmployee.split(QRegExp("\\s+"), QString::SkipEmptyParts);

    // Contains emplyee id
    list[0];
   // doctor->ui->employeeIdLine->setText(list[0]);
    editEmployeeInfo();

    Employee hired = getEmployee(list[0]);
    showEmployeeInfo(hired);
    qDebug() << "Selected emp" << list[0];
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

    QString id = doctor->ui->employeeIdLine->text();
    QString firstname = doctor->ui->employeeFirstLine->text();
    QString lastname = doctor->ui->employeeLastLine->text();
    QString position = doctor->ui->employeePositionLine->text();
    QString mobile = doctor->ui->employeeMobileLine->text();

    Employee emp(id, firstname, lastname, mobile, position);

    editEmployee(emp);

    QListWidgetItem *item = doctor->ui->employeeList->currentItem();
    int row = doctor->ui->employeeList->currentRow();

    // Edits the information in the widget list after it has been edited and saved
    QString info = id + " " + firstname + " " + lastname;
    item->setText(info);


}


