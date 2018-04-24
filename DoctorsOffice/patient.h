/**
* @author Katrine Almås (s299622)
*/

#ifndef KUNDE_H
#define KUNDE_H

#include <iostream>
#include <QString>
#include <QApplication>
#include <QtDebug>
#include <QtSql>

using namespace std;

class Patient
{
private:
    QString id;
    QString personNr;
    QString firstname;
    QString surname;
    QString tlf;
    QString address;
    QString postcode;
    QString city;
    QString birthday;

public:
    Patient(QString personNr, QString firstname, QString surname, QString tlf, QString address, QString postcode, QString city, QString birthday);
    QString getId();
    QString getPersonNr();
    QString getFirstname();
    QString getSurname();
    QString getAddress();
    QString getPostcode();
    QString getTlf();
    QString getCity();
    QString getBirthday();

    void setId(QString id);
};

vector<Patient> getAllPatients();
void editPatient(Patient &pat);
Patient getPatient(QString id);
void addPatientValues(Patient &pat);

#endif // KUNDE_H
