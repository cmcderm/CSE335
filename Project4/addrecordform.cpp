#include "addrecordform.h"
#include "ui_addrecordform.h"
#include "databaseform.h"

#include <iostream>

addRecordForm::addRecordForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addRecordForm)
{
    ui->setupUi(this);
}

addRecordForm::~addRecordForm()
{
    delete ui;
}

void addRecordForm::on_pushButtonAdd_clicked(){
    ui->firstLabel->text().append("buns");

    bool bSalaryOk = true;
    ui->lineEditSalary->text().toShort(&bSalaryOk);
    bool bHireOk = true;
    ui->lineEditHire->text().toShort(&bHireOk);
    if(bSalaryOk && bHireOk){
        emit addEmployee(new Employee(ui->lineEditFirst->text(), ui->lineEditLast->text(), ui->lineEditSalary->text(), ui->lineEditHire->text()));
    } else {
        std::cout << "Employee form improperly entered. Check the data entered." << std::endl;
    }
}


void addRecordForm::on_pushButtonCancel_clicked(){
    close();
}

/*QString addRecordForm::retStr(){
    QString fname= ui->lineEditFirst->text();
    return fname;
}*/


