/**
* @author Katrine Almås (s299622)
*/

#include "employee.h"
#include "db.h"

#include <iostream>
#include <string>

#include <QApplication>
#include <QtDebug>
#include <QtSql>
#include <QSqlQuery>
#include <QVariant>

Employee::Employee(QString id, QString name, QString surname, QString tlf, QString position)
{
    this->id = id;
    this->firstname = name;
    this->surname = surname;
    this->tlf = tlf;
    this->position = position;
}

QString Employee::getFirstname(){
    return firstname;
}
QString Employee::getSurname(){
    return surname;
}

QString Employee::getTlf(){
    return tlf;
}

QString Employee::getPosition(){
    return position;
}

QString Employee::getId(){
    return id;
}


void addEmployeeValues(Employee &emp){
        QSqlQuery query;


        query.prepare("INSERT INTO Doctor ("
                      "Firstname,"
                      "Surname,"
                      "Tlf,"
                      "Position)"
                      "VALUES (?,?,?,?);");
        //query.addBindValue(emp.getId());
        query.addBindValue(emp.getFirstname());
        query.addBindValue(emp.getSurname());
        query.addBindValue(emp.getTlf());
        query.addBindValue(emp.getPosition());


        if(!query.exec()){
            qDebug() << "DIDN'T INSERT" << endl;
        }

    }

vector<Employee> getAllEmployees(){

        QSqlQuery query;
        vector<Employee> emp;
           int numRows;
           query.exec("SELECT * FROM Doctor");
            int i = 0;
           QSqlDatabase defaultDB = QSqlDatabase::database();
           if (defaultDB.driver()->hasFeature(QSqlDriver::QuerySize)) {
               numRows = query.size();
           } else {
               while (query.next()) {
                     QString id = query.value(0).toString();
                     QString firstname = query.value(1).toString();
                     QString surname = query.value(2).toString();
                     QString tlf = query.value(3).toString();
                     QString position = query.value(4).toString();

                     Employee test(id, firstname,surname,tlf,position);

                     emp.push_back(test);
                 }

           }

           return emp;
    }


void editEmployee(Employee &emp){
    QSqlQuery query;

     query.prepare("UPDATE Doctor SET Firstname=:name,Surname=:last,Tlf=:mobile,Position=:pos WHERE Id="+emp.getId());

         query.bindValue(":name", emp.getFirstname());
         query.bindValue(":last", emp.getSurname());
         query.bindValue(":mobile", emp.getTlf());
         query.bindValue(":pos", emp.getPosition());
         query.bindValue(":id", emp.getId());

         query.exec();
}

Employee getEmployee(QString id){
        QSqlQuery query;
           int numRows;
           query.prepare("SELECT * FROM Doctor WHERE Id=:val");
           query.bindValue(":val", id);
           query.exec();

           QSqlDatabase defaultDB = QSqlDatabase::database();
           if (defaultDB.driver()->hasFeature(QSqlDriver::QuerySize)) {
               numRows = query.size();

           } else {
               while (query.next()) {
                     QString id = query.value(0).toString();
                     QString firstname = query.value(1).toString();
                     QString surname = query.value(2).toString();
                     QString tlf = query.value(3).toString();
                     QString position = query.value(4).toString();

                     qDebug() << id << firstname << surname << tlf << position;
                     Employee test(id, firstname, surname, tlf, position);
                     return test;
                 }
           }
    }
