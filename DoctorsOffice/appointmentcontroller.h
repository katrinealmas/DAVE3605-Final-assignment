#ifndef APPOINTMENTCONTROLLER_H
#define APPOINTMENTCONTROLLER_H

class DoctorsOffice;

class AppointmentController
{
public:
    AppointmentController(DoctorsOffice *doc);

    void deleteAppt();

    void showAllAppointments();

private:
    DoctorsOffice *doctor;
};

#endif // APPOINTMENTCONTROLLER_H
