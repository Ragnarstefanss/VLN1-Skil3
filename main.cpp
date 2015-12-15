#include "consoleui.h"
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    ConsoleUI ui;
    QApplication a(argc, argv);
    MainWindow w;

    w.show();

    return a.exec();
}

