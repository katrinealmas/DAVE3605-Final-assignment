#ifndef HOME_H
#define HOME_H

class DoctorsOffice;

class HomeController
{
public:
    HomeController(DoctorsOffice *doc);

    void saveAppt();

    void clearCreateAppt();

    void savePatient();

    void clearCreatePatient();

private:
    DoctorsOffice *doctor;
};

#endif // HOMECONTROLLER_H
