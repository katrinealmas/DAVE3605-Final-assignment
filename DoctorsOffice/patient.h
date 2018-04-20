#ifndef KUNDE_H
#define KUNDE_H

#include <iostream>
#include <QString>

using namespace std;

class Patient
{
private:
    QString personNr;
    QString firstname;
    QString surname;
    int tlf;
    QString address;
    int postcode;
    QString city;

public:
    Patient( QString personNr, QString firstname, QString surname, int tlf, QString address, int postcode);
    QString getPersonNr();
    QString getFirstname();
    QString getSurname();
    QString getAddress();
    int getPostcode();
    int getTlf();
    void getOutput();

};

#endif // KUNDE_H
