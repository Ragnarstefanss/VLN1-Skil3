#ifndef ADDPERSON_H
#define ADDPERSON_H

#include <QDialog>
#include "scientistservice.h"

namespace Ui {
class addPerson;
}

class addPerson : public QDialog
{
    Q_OBJECT

public:
    explicit addPerson(QWidget *parent = 0);
    ~addPerson();

private slots:
    void on_button_add_person_clicked();

    void on_button_cancel_clicked();

private:
    Ui::addPerson *ui;

    ScientistService scientistService;
};

#endif // ADDPERSON_H
