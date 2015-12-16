#include "addcomputer.h"
#include "ui_addcomputer.h"

#include <QMessageBox>


using namespace std;

addComputer::addComputer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addComputer)
{
    ui->setupUi(this);
}

addComputer::~addComputer()
{
    delete ui;
}

void addComputer::on_button_add_computer_clicked()
{

    computerType pcType;
    char c;

    ui->label_error_computer_name->setText("");
    ui->label_error_computer_type->setText("");
    ui->label_error_computer_year->setText("");

    QString name = ui->input_computer_name->text();
    QString type = ui->input_computer_type->text();
    QString year = ui->input_computer_year->text();

    bool errorFound = false;

    if (name.isEmpty())
    {
        ui->label_error_computer_name->setText("<span style='color: #ED1C58'>Enter a name!</span>");
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
            ui->label_error_computer_name->setText("<span style='color: #ED1C58'>Only alphabetic letters and spaces are allowed!</span>");
            errorFound = true;
        }
    }
    strName[0] = toupper(strName[0]);
    name = QString::fromStdString(strName);


    if ((type != "electronic") && (type != "Electronic") && (type != "mechatronic") && (type != "Mechatronic") && (type != "transistor")
            && (type != "Transistor") && (type != "other") && (type != "Other"))
    {
        ui->label_error_computer_type->setText("<span style='color: #ED1C58'>Choose from these: electronic, mechatronic, tranistor, other</span>");
        errorFound = true;
    }

    if (type.isEmpty())
    {
        ui->label_error_computer_type->setText("<span style='color: #ED1C58'>Enter a type of computer!</span>");
        errorFound = true;
    }

    if ((type == "electronic") || (type == "mechatronic") || (type == "transistor") || (type == "other"))
    {
        string strType = type.toStdString();
        strType[0] = toupper(strType[0]);
        type = QString::fromStdString(strType);
    }

    if (type == "Electronic")
    {
        pcType = electronic;
    }

    if (type == "Mechatronic")
    {
        pcType = mechatronic;
    }

    if (type == "Transistor")
    {
        pcType = transistor;
    }

    if (type == "Other")
    {
        pcType = other;
    }

    string strYear = year.toStdString();
    if(strYear.length() == 4)
    {
        for (unsigned int i = 0; i < strYear.length(); i++)
        {
            c = strYear.at(i);
            if ((c >= '0' && c <= '9'))
            {
                //Right input
            }
            else
            {
                ui->label_error_computer_year->setText("<span style='color: #ED1C58'>Input a year containing exactly four numbers or a 0 if not built!</span>");
                errorFound = true;
            }
        }
        year = QString::fromStdString(strYear);
    }
    else if(year == "0")
    {
        year = "13337";
    }
    else
    {
        ui->label_error_computer_year->setText("<span style='color: #ED1C58'>Input a year containing exactly four numbers or a 0 if not built!</span>");
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

    bool success = computerService.addComputer(Computer(name.toStdString(), pcType, year.toInt()));

    if (success)
    {
        ui->input_computer_name->setText("");
        ui->input_computer_type->setText("");
        ui->input_computer_year->setText("");
        this->done(0);
    }
}



void addComputer::on_button_cancel_clicked()
{
    ui->input_computer_name->setText("");
    ui->input_computer_type->setText("");
    ui->input_computer_year->setText("");
    this->done(0);
}
