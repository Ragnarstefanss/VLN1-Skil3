#ifndef ADDCOMPUTER_H
#define ADDCOMPUTER_H

#include <QDialog>
#include "computerservice.h"

namespace Ui {
class addComputer;
}

class addComputer : public QDialog
{
    Q_OBJECT

public:
    explicit addComputer(QWidget *parent = 0);
    ~addComputer();

private slots:
    void on_button_add_computer_clicked();

    void on_button_cancel_clicked();

private:
    Ui::addComputer *ui;

    ComputerService computerService;
};

#endif // ADDCOMPUTER_H
