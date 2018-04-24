<<<<<<< HEAD
#include "patient.h"

Patient::Patient(QString personNr, QString firstname, QString surname, int tlf, QString address, int postcode)
=======
/**
* @author Katrine Almås (s299622)
*/

#include "patient.h"

Patient::Patient(QString personNr, QString firstname, QString surname, QString tlf, QString address, QString postcode, QString city, QString birthday)
>>>>>>> master
{
    this->personNr = personNr;
    this->firstname = firstname;
    this->surname = surname;
    this->address = address;
    this->postcode = postcode;
    this->tlf = tlf;
<<<<<<< HEAD
}

void Patient::getOutput(){
    std::string utf8_text = personNr.toUtf8().constData();
    cout << utf8_text << endl;
}
/*
double Patient::getPersonNr()
=======
    this->city = city;
    this->birthday=birthday;
}
QString Patient::getId(){
    return id;
}
void Patient::setId(QString id){

    this->id = id;
}
QString Patient::getPersonNr()
>>>>>>> master
{
return personNr;
}

<<<<<<< HEAD
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
=======
QString Patient::getFirstname()
{
return firstname;
}
QString Patient::getSurname()
{
return surname;
}
QString Patient::getTlf()
{
return tlf;
}
QString Patient::getPostcode()
>>>>>>> master
{
return postcode;
}

<<<<<<< HEAD
string Patient::getAddress()
{
return address;
}
*/
=======
QString Patient::getAddress()
{
return address;
}

QString Patient::getCity(){
    return city;
}

QString Patient::getBirthday(){
    return birthday;
}

void addPatientValues(Patient &pat){
    QSqlQuery query;

    query.prepare("INSERT INTO Patient ("
                  "PersonNr,"
                  "Firstname,"
                  "Surname,"
                  "Tlf,"
                  "Address,"
                  "Postcode,"
                  "City,"
                  "Birthday)"
                  "VALUES (?,?,?,?,?,?,?,?);");

    query.addBindValue(pat.getPersonNr());
    query.addBindValue(pat.getFirstname());
    query.addBindValue(pat.getSurname());
    query.addBindValue(pat.getTlf());
    query.addBindValue(pat.getAddress());
    query.addBindValue(pat.getPostcode());
    query.addBindValue(pat.getCity());
    query.addBindValue(pat.getBirthday());

    if(!query.exec()){
        qDebug() << "DIDN'T INSERT";
    }
}


vector<Patient> getAllPatients(){
        QSqlQuery query;
        vector<Patient> patients;
           int numRows;
           query.exec("SELECT * FROM Patient");
           QSqlDatabase defaultDB = QSqlDatabase::database();
           if (defaultDB.driver()->hasFeature(QSqlDriver::QuerySize)) {
               numRows = query.size();
           } else {
               while (query.next()) {
                     QString id = query.value(0).toString();
                     QString personNr = query.value(1).toString();
                     QString name = query.value(2).toString();
                     QString surname = query.value(3).toString();
                     QString tlf = query.value(4).toString();
                     QString address = query.value(5).toString();
                     QString postcode = query.value(6).toString();
                     QString city = query.value(7).toString();
                     QString birthday = query.value(8).toString();

                     Patient test(personNr, name, surname, tlf, address, postcode, city, birthday);
                     test.setId(id);
                     patients.push_back(test);
                 }
           }
           return patients;
    }

void editPatient(Patient &pat){
    QSqlQuery query;

     query.prepare("UPDATE Patient SET PersonNr=:nr,Firstname=:name,Surname=:last,Tlf=:mobile,Address=:street,Postcode=:post,City=:city, Birthday=:birt WHERE Id=:id");

         query.bindValue(":id", pat.getId());
         query.bindValue(":nr", pat.getPersonNr());
         query.bindValue(":name", pat.getFirstname());
         query.bindValue(":last", pat.getSurname());
         query.bindValue(":mobile", pat.getTlf());
         query.bindValue(":street", pat.getAddress());
         query.bindValue(":post", pat.getPostcode());
         query.bindValue(":city", pat.getCity());
         query.bindValue(":birth", pat.getBirthday());

         query.exec();
}

Patient getPatient(QString id){
        QSqlQuery query;
           int numRows;

           query.prepare("SELECT * FROM Patient WHERE id=:val");
           query.bindValue(":val", id);
           query.exec();

           QSqlDatabase defaultDB = QSqlDatabase::database();
           if (defaultDB.driver()->hasFeature(QSqlDriver::QuerySize)) {
               numRows = query.size();

           } else {
               while (query.next()) {
                     QString id = query.value(0).toString();
                     QString pNr = query.value(1).toString();
                     QString firstname = query.value(2).toString();
                     QString surname = query.value(3).toString();
                     QString tlf = query.value(4).toString();
                     QString address = query.value(5).toString();
                     QString post = query.value(6).toString();
                     QString city = query.value(7).toString();
                     QString birthday = query.value(8).toString();

                     qDebug() << pNr << firstname << surname << tlf << address;
                     Patient test(pNr, firstname, surname, tlf, address, post, city, birthday);
                     test.setId(id);
                     return test;
                 }
           }
    }

>>>>>>> master

