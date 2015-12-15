#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "scientistservice.h"
#include "computerservice.h"
#include <string.h>
#include <vector>

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_input_filter_people_textChanged(const QString &arg1);
    void on_input_filter_computer_textChanged(const QString &arg1);

private:
    void displayAllScientists();
    void displayScientists(std::vector<Scientist> scientists);
    void displayAllComputers();
    void displayComputers(std::vector<Computer> computers);

    string intSexToString(string sex);

    ScientistService scientistService;
    std::vector<Scientist> currentlyDisplayedScientist;

    ComputerService computerService;
    std::vector<Computer> currentlyDisplayedComputer;

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
