#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "scientistservice.h"
#include "addperson.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->dropdown_person->addItem("person");
    ui->dropdown_computer->addItem("computer");

    displayAllScientists();
    displayAllComputers();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::displayAllScientists()
{
    vector<Scientist> scientists = scientistService.getAllScientists("name", true);
    displayScientists(scientists);
}


void MainWindow::displayScientists(std::vector<Scientist> scientists)
{
    ui->table_people->clearContents();

    ui->table_people->setRowCount(scientists.size());

    for (unsigned int row = 0; row < scientists.size(); row++)
    {
        Scientist currentScientist = scientists.at(row);

        QString name = QString::fromStdString(currentScientist.getName());
        QString sex = QString::number(currentScientist.getSex());
        string sexStr = sex.toStdString();
        sexStr = intSexToString(sexStr);                                        //Converts bool to string
        sex = QString::fromStdString(sexStr);
        QString yearBorn = QString::number(currentScientist.getYearBorn());
        QString yearDeath = QString::number(currentScientist.getYearDied());

        ui->table_people->setItem(row, 0, new QTableWidgetItem(name));
        ui->table_people->setItem(row, 1, new QTableWidgetItem(sex));
        ui->table_people->setItem(row, 2, new QTableWidgetItem(yearBorn));
        ui->table_people->setItem(row, 3, new QTableWidgetItem(yearDeath));
    }

    currentlyDisplayedScientist = scientists;
}

string MainWindow::intSexToString(string sex)
{
    string strSex;
    if (sex == "0")
    {
        strSex = "Male";
        return strSex;
    }
    else if (sex == "1")
    {
        strSex = "Female";
        return strSex;
    }
    else
    {
        //Failure
    }
    return 0;
}


void MainWindow::displayAllComputers()
{
    vector<Computer> computers = computerService.getAllComputers("name", true);
    displayComputers(computers);
}

void MainWindow::displayComputers(std::vector<Computer> computers)
{
    ui->table_computer->clearContents();

    ui->table_computer->setRowCount(computers.size());

    for (unsigned int row = 0; row < computers.size(); row++)
    {
        Computer currentComputer = computers.at(row);

        QString name = QString::fromStdString(currentComputer.getName());
        QString type = QString::fromStdString(currentComputer.getTypeName());
        QString yearBuilt = QString::number(currentComputer.getYearBuilt());
        QString wasBuilt = QString::number(currentComputer.wasBuilt());

        ui->table_computer->setItem(row, 0, new QTableWidgetItem(name));
        ui->table_computer->setItem(row, 1, new QTableWidgetItem(type));
        ui->table_computer->setItem(row, 2, new QTableWidgetItem(yearBuilt));
        ui->table_computer->setItem(row, 3, new QTableWidgetItem(wasBuilt));
    }

    currentlyDisplayedComputer = computers;
}




void MainWindow::on_input_filter_people_textChanged(const QString &arg1)
{
    string userInput = ui->input_filter_people->text().toStdString();

    vector<Scientist> scientists = scientistService.searchForScientists(userInput);
    displayScientists(scientists);
}

void MainWindow::on_input_filter_computer_textChanged(const QString &arg1)
{
    string userInput = ui->input_filter_computer->text().toStdString();

    vector<Computer> computers = computerService.searchForComputers(userInput);
    displayComputers(computers);
}


void MainWindow::on_button_add_people_clicked()
{
    addPerson addperson;
    addperson.exec();
    displayAllScientists();
}
