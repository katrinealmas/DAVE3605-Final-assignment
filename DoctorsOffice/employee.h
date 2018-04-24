/**
* @author Katrine Almås (s299622)
*/
#ifndef LEGE_H
#define LEGE_H
#include <QApplication>
#include <QtDebug>
#include <QtSql>
#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    QString id;
    QString firstname;
    QString surname;
    QString tlf;
    QString position;
public:
    Employee(QString id, QString name, QString surname, QString tlf, QString position);
    QString getId();
    QString getFirstname();
    QString getSurname();
    QString getTlf();
    QString getPosition();
};

void addEmployeeValues(Employee &emp);
vector<Employee> getAllEmployees();
void editEmployee(Employee &emp);
Employee getEmployee(QString id);

#endif // LEGE_H
