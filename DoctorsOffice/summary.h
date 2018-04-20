#ifndef REFERAT_H
#define REFERAT_H
#include <iostream>
#include <QString>
#include <vector>

using namespace std;

class Summary
{
private:
    int id;
    QString patient;
    QString doctor;
    QString diagnosis;
    QString prescription;
    QString summary;

public:
    Summary(int id, QString diagnosis, QString summary, QString patient, QString doctor, QString prescription);
    void getOutput();
};

#endif // REFERAT_H
