/********************************************************************************
** Form generated from reading UI file 'addperson.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPERSON_H
#define UI_ADDPERSON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addPerson
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_person_name;
    QLabel *label_person_gender;
    QLineEdit *input_person_birth;
    QLabel *label_error_person_birth;
    QLabel *AddPersonText;
    QLabel *label_error_person_gender;
    QLineEdit *input_person_gender;
    QLineEdit *input_person_name;
    QLabel *label_error_person_name;
    QLabel *label_person_birth;
    QLineEdit *input_person_death;
    QLabel *label_error_person_death;
    QPushButton *button_add_person;
    QPushButton *button_cancel;

    void setupUi(QDialog *addPerson)
    {
        if (addPerson->objectName().isEmpty())
            addPerson->setObjectName(QStringLiteral("addPerson"));
        addPerson->resize(400, 398);
        gridLayout = new QGridLayout(addPerson);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(addPerson);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 7, 0, 1, 1);

        label_person_name = new QLabel(addPerson);
        label_person_name->setObjectName(QStringLiteral("label_person_name"));

        gridLayout->addWidget(label_person_name, 1, 0, 1, 1);

        label_person_gender = new QLabel(addPerson);
        label_person_gender->setObjectName(QStringLiteral("label_person_gender"));

        gridLayout->addWidget(label_person_gender, 3, 0, 1, 1);

        input_person_birth = new QLineEdit(addPerson);
        input_person_birth->setObjectName(QStringLiteral("input_person_birth"));

        gridLayout->addWidget(input_person_birth, 5, 1, 1, 1);

        label_error_person_birth = new QLabel(addPerson);
        label_error_person_birth->setObjectName(QStringLiteral("label_error_person_birth"));

        gridLayout->addWidget(label_error_person_birth, 6, 0, 1, 2);

        AddPersonText = new QLabel(addPerson);
        AddPersonText->setObjectName(QStringLiteral("AddPersonText"));
        AddPersonText->setFrameShape(QFrame::WinPanel);
        AddPersonText->setFrameShadow(QFrame::Plain);
        AddPersonText->setTextFormat(Qt::AutoText);

        gridLayout->addWidget(AddPersonText, 0, 0, 1, 2);

        label_error_person_gender = new QLabel(addPerson);
        label_error_person_gender->setObjectName(QStringLiteral("label_error_person_gender"));

        gridLayout->addWidget(label_error_person_gender, 4, 0, 1, 2);

        input_person_gender = new QLineEdit(addPerson);
        input_person_gender->setObjectName(QStringLiteral("input_person_gender"));

        gridLayout->addWidget(input_person_gender, 3, 1, 1, 1);

        input_person_name = new QLineEdit(addPerson);
        input_person_name->setObjectName(QStringLiteral("input_person_name"));

        gridLayout->addWidget(input_person_name, 1, 1, 1, 1);

        label_error_person_name = new QLabel(addPerson);
        label_error_person_name->setObjectName(QStringLiteral("label_error_person_name"));

        gridLayout->addWidget(label_error_person_name, 2, 0, 1, 2);

        label_person_birth = new QLabel(addPerson);
        label_person_birth->setObjectName(QStringLiteral("label_person_birth"));

        gridLayout->addWidget(label_person_birth, 5, 0, 1, 1);

        input_person_death = new QLineEdit(addPerson);
        input_person_death->setObjectName(QStringLiteral("input_person_death"));

        gridLayout->addWidget(input_person_death, 7, 1, 1, 1);

        label_error_person_death = new QLabel(addPerson);
        label_error_person_death->setObjectName(QStringLiteral("label_error_person_death"));

        gridLayout->addWidget(label_error_person_death, 8, 0, 1, 2);

        button_add_person = new QPushButton(addPerson);
        button_add_person->setObjectName(QStringLiteral("button_add_person"));
        button_add_person->setMinimumSize(QSize(185, 23));
        button_add_person->setMaximumSize(QSize(147, 23));

        gridLayout->addWidget(button_add_person, 10, 0, 1, 1);

        button_cancel = new QPushButton(addPerson);
        button_cancel->setObjectName(QStringLiteral("button_cancel"));
        button_cancel->setMinimumSize(QSize(185, 23));
        button_cancel->setMaximumSize(QSize(147, 23));

        gridLayout->addWidget(button_cancel, 10, 1, 1, 1);


        retranslateUi(addPerson);

        QMetaObject::connectSlotsByName(addPerson);
    } // setupUi

    void retranslateUi(QDialog *addPerson)
    {
        addPerson->setWindowTitle(QApplication::translate("addPerson", "Dialog", 0));
        label->setText(QApplication::translate("addPerson", "<html><head/><body><p><span style=\" font-size:9pt;\">Enter year of death:</span></p></body></html>", 0));
        label_person_name->setText(QApplication::translate("addPerson", "<html><head/><body><p><span style=\" font-size:9pt;\">Enter the name of person:</span></p></body></html>", 0));
        label_person_gender->setText(QApplication::translate("addPerson", "<html><head/><body><p><span style=\" font-size:9pt;\">Enter gender of person:</span></p></body></html>", 0));
        label_error_person_birth->setText(QApplication::translate("addPerson", "<html><head/><body><p><span style=\" color:#ff0000;\"><br/></span></p></body></html>", 0));
        AddPersonText->setText(QApplication::translate("addPerson", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">Add a new person</span></p></body></html>", 0));
        label_error_person_gender->setText(QApplication::translate("addPerson", "<html><head/><body><p><span style=\" color:#ff0000;\"><br/></span></p></body></html>", 0));
        label_error_person_name->setText(QString());
        label_person_birth->setText(QApplication::translate("addPerson", "<html><head/><body><p><span style=\" font-size:9pt;\">Enter year of his birth:</span></p></body></html>", 0));
        label_error_person_death->setText(QApplication::translate("addPerson", "<html><head/><body><p><span style=\" color:#ff0000;\"><br/></span></p></body></html>", 0));
        button_add_person->setText(QApplication::translate("addPerson", "Add person", 0));
        button_cancel->setText(QApplication::translate("addPerson", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class addPerson: public Ui_addPerson {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPERSON_H
