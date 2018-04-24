
#ifndef DOCTORSOFFICE_H
#define DOCTORSOFFICE_H

#include <QMainWindow>

namespace Ui {

class DoctorsOffice;

}

class HomeController;

class AppointmentController;

class PatientController;

class EmployeeController;

class DoctorsOffice : public QMainWindow
{
    Q_OBJECT
public:
    explicit DoctorsOffice(QWidget *parent = 0);
    ~DoctorsOffice();


private slots:

    void on_calendarWidget_clicked(const QDate &date);

    void on_saveApptButton_clicked();

    void clearCreateAppt();

    void on_savePatientButton_clicked();

    void clearCreatePatient();

    void on_editPatientInfoButton_clicked();

    void on_savePatientInfoButton_clicked();

    void clearReport();

    void disablePatientLineEdits();

    void on_deleteApptButton_clicked();

    void on_saveCreateEmployee_clicked();

    void clearCreateEmployee();

    void on_editEmployeeInfoButton_clicked();

    void on_saveEmployeeInfoButton_clicked();

    void on_selectEmployeeButton_clicked();

    void on_selectPatientButton_clicked();

    void validateIfEmpty();

private:
    Ui::DoctorsOffice *ui;

    HomeController *home;

    AppointmentController *appt;

    PatientController *patient;

    EmployeeController *employee;

    friend class HomeController;

    friend class AppointmentController;

    friend class PatientController;

    friend class EmployeeController;
};

#endif // DOCTORSOFFICE_H
