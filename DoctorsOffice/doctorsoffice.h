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

private:
    Ui::DoctorsOffice *ui;
};

#endif // DOCTORSOFFICE_H
