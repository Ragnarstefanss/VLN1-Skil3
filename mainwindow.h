#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "scientistservice.h"
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

    ScientistService scientistService;

    std::vector<Scientist> currentlyDisplayedScientist;

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
