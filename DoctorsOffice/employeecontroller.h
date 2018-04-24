
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "employee.h"

class DoctorsOffice;

class EmployeeController
{
public:
    EmployeeController(DoctorsOffice *doc);

    void saveCreateEmployee();

    void clearCreateEmployee();

    void editEmployeeInfo();

    void saveEmployeeInfo();

    void selectEmployeeInfo();

    void showAllEmployees();

    void showEmployeeInfo(Employee hired);

private:
    DoctorsOffice *doctor;
};

#endif // EMPLOYEE_H
