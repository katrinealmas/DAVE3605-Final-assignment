#include "patient.h"

Patient::Patient(QString personNr, QString firstname, QString surname, int tlf, QString address, int postcode)
{
    this->personNr = personNr;
    this->firstname = firstname;
    this->surname = surname;
    this->address = address;
    this->postcode = postcode;
    this->tlf = tlf;
}

void Patient::getOutput(){
    std::string utf8_text = personNr.toUtf8().constData();
    cout << utf8_text << endl;
}
/*
double Patient::getPersonNr()
{
return personNr;
}

string Patient::getFirstname()
{
return firstname;
}
string Patient::getSurname()
{
return surname;
}
int Patient::getTlf()
{
return tlf;
}
int Patient::getPostcode()
{
return postcode;
}

string Patient::getAddress()
{
return address;
}
*/

