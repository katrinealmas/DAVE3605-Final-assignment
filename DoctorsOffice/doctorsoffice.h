#ifndef DOCTORSOFFICE_H
#define DOCTORSOFFICE_H

#include <QMainWindow>

namespace Ui {
class DoctorsOffice;
}

class DoctorsOffice : public QMainWindow
{
    Q_OBJECT

public:
    explicit DoctorsOffice(QWidget *parent = 0);
    ~DoctorsOffice();

private slots:
    //void on_apptTable_activated(const QModelIndex &index);

    void on_saveApptButton_clicked();

    void clearCreateAppt();

    void on_savePatientButton_clicked();

    void clearCreatePatient();

    //void on_createApptDateEdit_userDateChanged(const QDate &date);

    void on_editPatientInfoButton_clicked();

    void on_savePatientInfoButton_clicked();

    void clearReport();

    void disablePatientLineEdits();

    void on_deleteApptButton_clicked();

    void on_saveCreateEmployee_clicked();

    void clearCreateEmployee();

    void on_editEmployeeInfoButton_clicked();

    void on_saveEmployeeInfoButton_clicked();

private:
    Ui::DoctorsOffice *ui;
};

#endif // DOCTORSOFFICE_H
