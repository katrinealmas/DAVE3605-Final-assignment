/**
* @author Katrine Almås (s299622)
*/

#ifndef REFERAT_H
#define REFERAT_H
#include <iostream>
#include <vector>
#include <QApplication>
#include <QtDebug>
#include <QtSql>

using namespace std;

class Summary
{
private:
    QString id;
    QString diagnosis;
    QString prescription;
    QString summary;
    QString date;
    QString patient;
public:
    Summary(QString id, QString diagnosis, QString summary, QString patient, QString prescription, QString date);
    QString getId();
    QString getDiagnosis();
    QString getPrescription();
    QString getSummary();
    QString getPatient();
    QString getDate();
};

void addSummaryValues(Summary &summary);
vector<Summary> getSummaryHistory(QString id);
#endif // REFERAT_H
