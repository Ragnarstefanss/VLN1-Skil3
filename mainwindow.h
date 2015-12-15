#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "scientistservice.h"
#include "computerservice.h"
#include <vector>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    std::string getCurrentOrderBy();
    bool getOrderByAscending();

    void displayAllScientists();
    void displayScientists(std::vector<Scientist> scientists);

    void displayAllComputers();
    void displayComputers(std::vector<Computer> computers);

    ScientistService scientistService;

    std::vector<Scientist> currentlyDisplayedScientist;

    ComputerService computerService;

    std::vector<Computer> currentlyDisplayedComputer;


    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
