/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *People;
    QVBoxLayout *verticalLayout;
    QLineEdit *input_filter_people;
    QTableWidget *table_people;
    QPushButton *button_add_people;
    QPushButton *button_remove_people;
    QWidget *Computers;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *input_filter_computer;
    QTableWidget *table_computer;
    QPushButton *button_add_computer;
    QPushButton *button_remove_computer;
    QWidget *Connections;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QComboBox *dropdown_person;
    QComboBox *dropdown_computer;
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(462, 423);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setDocumentMode(false);
        People = new QWidget();
        People->setObjectName(QStringLiteral("People"));
        verticalLayout = new QVBoxLayout(People);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        input_filter_people = new QLineEdit(People);
        input_filter_people->setObjectName(QStringLiteral("input_filter_people"));

        verticalLayout->addWidget(input_filter_people);

        table_people = new QTableWidget(People);
        if (table_people->columnCount() < 4)
            table_people->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_people->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_people->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_people->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_people->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        table_people->setObjectName(QStringLiteral("table_people"));
        table_people->setSortingEnabled(true);

        verticalLayout->addWidget(table_people);

        button_add_people = new QPushButton(People);
        button_add_people->setObjectName(QStringLiteral("button_add_people"));

        verticalLayout->addWidget(button_add_people);

        button_remove_people = new QPushButton(People);
        button_remove_people->setObjectName(QStringLiteral("button_remove_people"));

        verticalLayout->addWidget(button_remove_people);

        tabWidget->addTab(People, QString());
        Computers = new QWidget();
        Computers->setObjectName(QStringLiteral("Computers"));
        verticalLayout_3 = new QVBoxLayout(Computers);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        input_filter_computer = new QLineEdit(Computers);
        input_filter_computer->setObjectName(QStringLiteral("input_filter_computer"));

        verticalLayout_3->addWidget(input_filter_computer);

        table_computer = new QTableWidget(Computers);
        if (table_computer->columnCount() < 4)
            table_computer->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table_computer->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table_computer->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table_computer->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        table_computer->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        table_computer->setObjectName(QStringLiteral("table_computer"));

        verticalLayout_3->addWidget(table_computer);

        button_add_computer = new QPushButton(Computers);
        button_add_computer->setObjectName(QStringLiteral("button_add_computer"));

        verticalLayout_3->addWidget(button_add_computer);

        button_remove_computer = new QPushButton(Computers);
        button_remove_computer->setObjectName(QStringLiteral("button_remove_computer"));

        verticalLayout_3->addWidget(button_remove_computer);

        tabWidget->addTab(Computers, QString());
        Connections = new QWidget();
        Connections->setObjectName(QStringLiteral("Connections"));
        verticalLayout_4 = new QVBoxLayout(Connections);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(Connections);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_4->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        dropdown_person = new QComboBox(Connections);
        dropdown_person->setObjectName(QStringLiteral("dropdown_person"));

        horizontalLayout->addWidget(dropdown_person);

        dropdown_computer = new QComboBox(Connections);
        dropdown_computer->setObjectName(QStringLiteral("dropdown_computer"));

        horizontalLayout->addWidget(dropdown_computer);


        verticalLayout_4->addLayout(horizontalLayout);

        pushButton = new QPushButton(Connections);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_4->addWidget(pushButton);

        tableWidget = new QTableWidget(Connections);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout_4->addWidget(tableWidget);

        tabWidget->addTab(Connections, QString());

        verticalLayout_2->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setEnabled(true);
        menuBar->setGeometry(QRect(0, 0, 462, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setEnabled(true);
        mainToolBar->setMovable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setEnabled(true);
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        input_filter_people->setPlaceholderText(QApplication::translate("MainWindow", "Filter people...", 0));
        QTableWidgetItem *___qtablewidgetitem = table_people->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = table_people->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Gender", 0));
        QTableWidgetItem *___qtablewidgetitem2 = table_people->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Born Year", 0));
        QTableWidgetItem *___qtablewidgetitem3 = table_people->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Died Year", 0));
        button_add_people->setText(QApplication::translate("MainWindow", "Add a person to the list", 0));
        button_remove_people->setText(QApplication::translate("MainWindow", "Remove selected person from the list", 0));
        tabWidget->setTabText(tabWidget->indexOf(People), QApplication::translate("MainWindow", "People", 0));
        input_filter_computer->setPlaceholderText(QApplication::translate("MainWindow", "Filter computer...", 0));
        QTableWidgetItem *___qtablewidgetitem4 = table_computer->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem5 = table_computer->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem6 = table_computer->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Year Built", 0));
        QTableWidgetItem *___qtablewidgetitem7 = table_computer->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Built", 0));
        button_add_computer->setText(QApplication::translate("MainWindow", "Add a computer to the list", 0));
        button_remove_computer->setText(QApplication::translate("MainWindow", "Remove selected computer from the list", 0));
        tabWidget->setTabText(tabWidget->indexOf(Computers), QApplication::translate("MainWindow", "Computers", 0));
        label->setText(QApplication::translate("MainWindow", "Create a ownership between a person and a a computer", 0));
        dropdown_person->setCurrentText(QString());
        dropdown_computer->setCurrentText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Create Ownership", 0));
        tabWidget->setTabText(tabWidget->indexOf(Connections), QApplication::translate("MainWindow", "Connections", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
