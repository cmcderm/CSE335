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

    std::cout<<"gere1"<<std::endl;

    bool bSalaryOk = true;
    ui->lineEditSalary->text().toShort(&bSalaryOk);
    bool bHireOk = true;
    ui->lineEditHire->text().toShort(&bHireOk);
    if(bSalaryOk && bHireOk){
        emit addEmployee(new Employee(ui->lineEditFirst->text(), ui->lineEditLast->text(), ui->lineEditSalary->text(), ui->lineEditHire->text()));
    } else {
        std::cout << "Employee form improperly entered. Check the data entered." << std::endl;
    }
    //connect(ui->pushButtonAdd,SIGNAL(clicked(bool)),parent,SLOT(accept_f_name()));

    //temp->ui->tableWidget->insertRow(rowNumber);
    //temp->ui->tableWidget->setItem(rowNumber,0,first);

}


void addRecordForm::on_pushButtonCancel_clicked(){
     connect(ui->pushButtonCancel,SIGNAL(pressed()),this,SLOT(close()));

}

/*QString addRecordForm::retStr(){
    QString fname= ui->lineEditFirst->text();
    return fname;
}*/

void addRecordForm::addFName(){
    ui->lineEditFirst;
   // connect(ui->lineEditFirst,SIGNAL(addFName),ui->)
}


