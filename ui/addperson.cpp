#include "addperson.h"
#include "ui_addperson.h"
#include "utilities/utils.h"

#include <QMessageBox>


using namespace std;

addPerson::addPerson(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addPerson)
{
    ui->setupUi(this);
}

addPerson::~addPerson()
{
    delete ui;
}

void addPerson::on_button_add_person_clicked()
{



    sexType gendeR;
    char c;

    ui->label_error_person_name->setText("");
    ui->label_error_person_gender->setText("");
    ui->label_error_person_birth->setText("");
    ui->label_error_person_death->setText("");

    QString name = ui->input_person_name->text();
    QString gender = ui->input_person_gender->text();
    QString birth = ui->input_person_birth->text();
    QString death = ui->input_person_death->text();

    bool errorFound = false;

    if (name.isEmpty())
    {
        ui->label_error_person_name->setText("<span style='color: #ED1C58'>Enter a name!</span>");
        errorFound = true;
    }

    string strName = name.toStdString();
    for (unsigned int i = 0; i < strName.length(); i++)
    {
        c = strName.at(i);
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c == ' '))
        {
            //Right input
        }
        else
        {
            ui->label_error_person_name->setText("<span style='color: #ED1C58'>Only alphabetic letters and spaces are allowed!</span>");
            errorFound = true;
        }
    }
    strName[0] = toupper(strName[0]);
    name = QString::fromStdString(strName);


    if ((gender != "male") && (gender != "Male") && (gender != "female") && (gender != "Female"))
    {
        ui->label_error_person_gender->setText("<span style='color: #ED1C58'>Only males and females allowed!</span>");
        errorFound = true;
    }

    if (gender.isEmpty())
    {
        ui->label_error_person_gender->setText("<span style='color: #ED1C58'>Enter the gender of the person!</span>");
        errorFound = true;
    }

    if ((gender == "male") || (gender == "female"))
    {
        string strGender = gender.toStdString();
        strGender[0] = toupper(strGender[0]);
        gender = QString::fromStdString(strGender);
    }

    if (gender == "Male")
    {
        gendeR = male;
    }

    if (gender == "Female")
    {
        gendeR = female;
    }

    string strBirth = birth.toStdString();
    if(strBirth.length() == 4)
    {
        for (unsigned int i = 0; i < strBirth.length(); i++)
        {
            c = strBirth.at(i);
            if ((c >= '0' && c <= '9'))
            {
                //Right input
            }
            else
            {
                ui->label_error_person_birth->setText("<span style='color: #ED1C58'>Input a year containing exactly four numbers!</span>");
                errorFound = true;
            }
        }
        birth = QString::fromStdString(strBirth);
    }
    else
    {
        ui->label_error_person_birth->setText("<span style='color: #ED1C58'>Input a year containing exactly four numbers!</span>");
        errorFound = true;
    }


    string strDeath = death.toStdString();
    if(strDeath.length() == 4)
    {
        for (unsigned int i = 0; i < strDeath.length(); i++)
        {
            c = strDeath.at(i);
            if ((c >= '0' && c <= '9'))
            {
                //Right input
            }
            else
            {
                ui->label_error_person_birth->setText("<span style='color: #ED1C58'>Input a year containing exactly four numbers or a 0 if person is dead!</span>");
                errorFound = true;
            }
        }
        death = QString::fromStdString(strDeath);
    }

    else if(death == "0")
    {
        //Right input
    }

    else
    {
        ui->label_error_person_death->setText("<span style='color: #ED1C58'>Input a year containing exactly four numbers or a 0 if person is dead!</span>");
        errorFound = true;
    }

    if (errorFound)
    {
        return;
    }

    int sure = QMessageBox::question(this, "Confirm", "Are you sure?");

    if (sure == QMessageBox::No)
    {
        return;
    }


    bool success = scientistService.addScientist(Scientist(name.toStdString(), gendeR, birth.toInt(), death.toInt()));

    if (success)
    {
        ui->input_person_name->setText("");
        ui->input_person_gender->setText("");
        ui->input_person_birth->setText("");
        ui->input_person_death->setText("");
        this->done(0);
    }

}

void addPerson::on_button_cancel_clicked()
{
    ui->input_person_name->setText("");
    ui->input_person_gender->setText("");
    ui->input_person_birth->setText("");
    ui->input_person_death->setText("");
    this->done(0);
}
