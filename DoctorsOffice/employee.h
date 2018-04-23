/**
* @author Ginelle Z. Ignacio (s300364)
*/


#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class DoctorsOffice;

class EmployeeController
{
public:
    EmployeeController(DoctorsOffice *doc);

    void saveCreateEmployee();

    void clearCreateEmployee();

    void editEmployeeInfo();

    void saveEmployeeInfo();

private:
    DoctorsOffice *doctor;
};

#endif // EMPLOYEE_H
