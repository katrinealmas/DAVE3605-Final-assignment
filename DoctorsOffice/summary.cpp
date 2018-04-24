/**
* @author Katrine Almås (s299622)
*/

#include "summary.h"

Summary::Summary(QString id, QString diagnosis, QString summary, QString patient, QString prescription, QString date)
{
    this->id = id;
    this->diagnosis = diagnosis;
    this->prescription = prescription;
    this->patient = patient;
    this->summary = summary;
    this->date=date;
}


QString Summary::getId(){
    return id;
}
QString Summary::getPatient(){
    return patient;
}
QString Summary::getDiagnosis(){
    return diagnosis;
}
QString Summary::getPrescription(){
    return prescription;
}
QString Summary::getSummary(){
    return summary;
}
QString Summary::getDate(){
    return date;
}

/**
 * @brief addSummaryValues
 * @param summary
 *
 * Adds a new summary to the database
 */
void addSummaryValues(Summary &summary){
    QSqlQuery query;

    query.prepare("INSERT INTO Summary ("
                  "Diagnosis,"
                  "Summary,"
                  "Patient,"
                  "Prescription,"
                  "Date)"
                  "VALUES (?,?,?,?,?);");

    query.addBindValue(summary.getDiagnosis());
    query.addBindValue(summary.getSummary());
    query.addBindValue(summary.getPatient());
    query.addBindValue(summary.getPrescription());
    query.addBindValue(summary.getDate());

    if(!query.exec()){
        qDebug() << "DIDN'T INSERT";
    }

    }

/**
 * @brief getSummaryHistory
 * @param id
 * @return summaries
 *
 * Gets a singular patients summary history
 */
vector<Summary> getSummaryHistory(QString id){
    QSqlQuery query;
    vector<Summary> summaries;
    int numRows;

    query.exec("SELECT * FROM Summary WHERE Patient="+id);

    //query.addBindValue(id);
    QSqlDatabase defaultDB = QSqlDatabase::database();

       if (defaultDB.driver()->hasFeature(QSqlDriver::QuerySize)) {
           numRows = query.size();
       } else {
           while (query.next()) {
                 QString id = query.value(0).toString();
                 QString diagnosis = query.value(1).toString();
                 QString summary = query.value(2).toString();
                 QString patient = query.value(3).toString();
                 QString prescription = query.value(4).toString();
                 QString date = query.value(5).toString();

                 Summary test(id, diagnosis, summary, patient, prescription, date);
                 summaries.push_back(test);
             }
       }
       return summaries;
}

