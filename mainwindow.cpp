#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "scientistservice.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    displayAllScientists();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::displayAllScientists()
{
    vector<Scientist> scientists = scientistService.getAllScientists(getCurrentOrderBy(), getOrderByAscending());
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
        QString yearBorn = QString::number(currentScientist.getYearBorn());
        QString yearDeath = QString::number(currentScientist.getYearDied());

        ui->table_people->setItem(row, 0, new QTableWidgetItem(name));
        ui->table_people->setItem(row, 1, new QTableWidgetItem(sex));
        ui->table_people->setItem(row, 2, new QTableWidgetItem(yearBorn));
        ui->table_people->setItem(row, 3, new QTableWidgetItem(yearDeath));
    }

    currentlyDisplayedScientist = scientists;
}

string MainWindow::getCurrentOrderBy()
{
    return "name";
}

bool MainWindow::getOrderByAscending()
{
    return true;
}
