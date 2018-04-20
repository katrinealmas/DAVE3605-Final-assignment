#include "mainwindow.h"
#include "patient.h"
#include "appointment.h"
#include "summary.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QtDebug>
#include <QtSql>
#include <vector>
#include <iostream>

bool createConnections()
{
    // create the default database connection
    QSqlDatabase defaultDB = QSqlDatabase::addDatabase("QSQLITE");

    defaultDB.setDatabaseName("C:/Users/katri/Downloads/sqlitestudio-3.1.1/SQLiteStudio/office");

    if (!(defaultDB.open())) {
        qDebug( "Failed to open database: " );
        return false;
    }

    return true;
}

void addPatientValues(QString id, QString name, QString surname, int tlf, QString address, int post){
    QSqlQuery query;

    query.prepare("INSERT INTO Patient ("
                  "PersonNr,"
                  "Firstname,"
                  "Surname,"
                  "Tlf,"
                  "Address,"
                  "Postcode)"
                  "VALUES (?,?,?,?,?,?);");

    query.addBindValue(id);
    query.addBindValue(name);
    query.addBindValue(surname);
    query.addBindValue(tlf);
    query.addBindValue(address);
    query.addBindValue(post);

    if(!query.exec()){
        qDebug() << "DIDN'T INSERT";
    }
}

void addDoctorValues(QString id, QString name, QString surname, int tlf, QString email, QString position){
    QSqlQuery query;

    query.prepare("INSERT INTO Doctor ("
                  "Licence,"
                  "Firstname,"
                  "Surname,"
                  "Email,"
                  "Tlf,"
                  "Position)"
                  "VALUES (?,?,?,?,?,?);");

    query.addBindValue(id);
    query.addBindValue(name);
    query.addBindValue(surname);
    query.addBindValue(email);
    query.addBindValue(tlf);
    query.addBindValue(position);

    if(!query.exec()){
        qDebug() << "DIDN'T INSERT";
    }
}

void addSummaryValues(QString diagnosis, QString summary, QString patient, QString doctor, QString prescription){
    QSqlQuery query;

    query.prepare("INSERT INTO Summary ("
                  "Diagnosis,"
                  "Summary,"
                  "Patient,"
                  "Doctor,"
                  "Prescription)"
                  "VALUES (?,?,?,?,?);");

    query.addBindValue(diagnosis);
    query.addBindValue(summary);
    query.addBindValue(patient);
    query.addBindValue(doctor);
    query.addBindValue(prescription);


    if(!query.exec()){
        qDebug() << "DIDN'T INSERT";
    }
}

void addAppointmentValues(QString date, QString time, QString patient, QString doctor){
    QSqlQuery query;

    query.prepare("INSERT INTO Appointment ("
                  "Date,"
                  "Time,"
                  "Patient,"
                  "Doctor)"
                  "VALUES (?,?,?,?);");

    query.addBindValue(date);
    query.addBindValue(time);
    query.addBindValue(patient);
    query.addBindValue(doctor);

    if(!query.exec()){
        qDebug() << "DIDN'T INSERT";
    }
}

vector<Patient> getAllPatients(){
    QSqlQuery query;
    vector<Patient> patients;
       int numRows;
       query.exec("SELECT * FROM Patient");
        int i = 0;
       QSqlDatabase defaultDB = QSqlDatabase::database();
       if (defaultDB.driver()->hasFeature(QSqlDriver::QuerySize)) {
           numRows = query.size();
       } else {
           while (query.next()) {
                 QString personNr = query.value(0).toString();
                 QString name = query.value(1).toString();
                 QString surname = query.value(2).toString();
                 int tlf = query.value(3).toInt();
                 QString address = query.value(4).toString();
                 int postcode = query.value(5).toInt();
                 qDebug() << personNr << name << surname << tlf << address << postcode;
                 Patient test(personNr, name, surname, tlf, address, postcode);
                 patients.push_back(test);
                 i++;
             }
       }
       return patients;
}

void getPatient(QString id){
    QSqlQuery query;
       int numRows;
       query.prepare("SELECT * FROM Patient WHERE PersonNr=:val");
       query.bindValue(":val", id);
       query.exec();
        int i = 0;
       QSqlDatabase defaultDB = QSqlDatabase::database();
       if (defaultDB.driver()->hasFeature(QSqlDriver::QuerySize)) {
           numRows = query.size();
       } else {
           while (query.next()) {
                 QString personNr = query.value(0).toString();
                 QString name = query.value(1).toString();
                 QString surname = query.value(2).toString();
                 int tlf = query.value(3).toInt();
                 QString address = query.value(4).toString();
                 int postcode = query.value(5).toInt();
                 qDebug() << personNr << name << surname << tlf << address << postcode;
                 Patient test(personNr, name, surname, tlf, address, postcode);
                 test.getOutput();
             }
       }
}

vector<Summary> getAllSummaries(){
    QSqlQuery query;
    vector<Summary> summaries;
    int numRows;

    query.exec("SELECT * FROM Summary");
    QSqlDatabase defaultDB = QSqlDatabase::database();

       if (defaultDB.driver()->hasFeature(QSqlDriver::QuerySize)) {
           numRows = query.size();
       } else {
           while (query.next()) {
                 int id = query.value(0).toInt();
                 QString diagnosis = query.value(1).toString();
                 QString summary = query.value(2).toString();
                 QString patient = query.value(3).toString();
                 QString doctor = query.value(4).toString();
                 QString prescription = query.value(5).toString();

                 qDebug() << id << diagnosis << summary << patient << doctor << prescription;
                 Summary test(id, diagnosis, summary, patient, doctor, prescription);
                 summaries.push_back(test);
             }
       }
       return summaries;
}

vector<Appointment> getAllAppointments(){
    QSqlQuery query;
    vector<Appointment> appointments;
       int numRows;
       query.exec("SELECT * FROM Appointment");
        int i = 0;
       QSqlDatabase defaultDB = QSqlDatabase::database();
       if (defaultDB.driver()->hasFeature(QSqlDriver::QuerySize)) {
           numRows = query.size();
       } else {
           while (query.next()) {
                 int id = query.value(0).toInt();
                 QString date = query.value(1).toString();
                 QString time = query.value(2).toString();
                 QString patientId = query.value(3).toString();
                 QString doctorLicence = query.value(4).toString();

                 qDebug() << id << date << time << patientId << doctorLicence;
                 Appointment test(id, date, time, patientId, doctorLicence);
                 appointments.push_back(test);
             }
       }
       return appointments;
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    createConnections();

   // getPatient("33333333333");
  //  vector<Patient> p = getAllPatients();
  /*  for (auto i = p.begin(); i != p.end(); ++i)
        i->getOutput();*/

    //addPatientValues("33333333333", "Bob", "Bobson", 12345678, "Bobway 2", 1234);
    //addAppointmentValues("04.02.2013", "14:30", "44333333333", "1111111111");
    addSummaryValues("Common cold", "The patient is displaying symptoms of a common cold", "33333333333", "111111111", "None");

      vector<Summary> p = getAllSummaries();
      for (auto i = p.begin(); i != p.end(); ++i)
          i->getOutput();
}


MainWindow::~MainWindow()
{
    delete ui;
}
