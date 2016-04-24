#include "databaseform.h"
#include "ui_databaseform.h"
#include "addrecordform.h"
#include <QStandardItem>
#include <QTableView>
#include <QTableWidgetItem>
#include <QTableWidget>
///
#include <iostream>
#include <fstream>
///
#include <string>
#include <QFile>
#include <QTextStream>
#include <stdio.h>




DatabaseForm::DatabaseForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DatabaseForm)
{
    ui->setupUi(this);
    rowNumber=0;

    ui->tableWidget->setSortingEnabled(true);
   //if(ui->actionSave){
     //   this->save();
    //}
   // ui->actionSave;

}

DatabaseForm::~DatabaseForm()
{
    //connect(ui->tableWidget->insertRow();
    delete ui;
}

void DatabaseForm::on_addRButton_clicked()
{
    addRecordForm* arf = new addRecordForm(this);
    arf->show();

    listen.push_back(arf);
    connect(arf, SIGNAL(addEmployee(Employee*)), this, SLOT(receiveEmployee(Employee*)));
    //connect(arf,SIGNAL(retStr()),ui->tableWidget,SLOT(insertRow(int)));
    //connect(ui->tableWidget,SIGNAL(itemChanged(QTableWidgetItem*)),arf,SLOT(on_pushButtonAdd_clicked()));
    //connect(arf,SIGNAL(observerDeleted()),ui->tableWidget,SLOT(insertRow(int)));

     //ui->tableView->setModel(model);
}


void DatabaseForm::receiveEmployee(Employee* emp){
    employees.push_back(emp);
    int rows = ui->tableWidget->rowCount();
    rowNumber++;
    rows++;
    ui->tableWidget->setRowCount(rows);
    ui->tableWidget->setItem(rows-1, 0, new QTableWidgetItem(emp->getFirstName()));
    ui->tableWidget->setItem(rows-1, 1, new QTableWidgetItem(emp->getLastName()));
    ui->tableWidget->setItem(rows-1, 2, new QTableWidgetItem(emp->getSalary()));
    ui->tableWidget->setItem(rows-1, 3, new QTableWidgetItem(emp->getHireYear()));
    //ui->tableWidget->setItem
    //std::cout << "Employee: Name:" << emp->getFirstName().toStdString() << " " << emp->getLastName().toStdString() << " Salary: " << emp->getSalary().toStdString() << " Hired:" << emp->getHireYear().toStdString() << std::endl;
}


void DatabaseForm::accept_f_name(){
    QTableWidgetItem *first =new QTableWidgetItem(QString("fnam"));
    ui->tableWidget->setRowCount(rowNumber);
    ui->tableWidget->setItem(rowNumber,0,first);


}


void DatabaseForm::save(){
    //std::fstream cvs,tab;
    int rows = ui->tableWidget->rowCount();
    Employee* emp;
    QString fname,lname,muny,hyr;
    QString cvstxt= "cvs.txt";//,tabtxt="tabEmployees.txt";
    QFile file(cvstxt);
    file.open(QIODevice::WriteOnly|QIODevice::Text);
    std::cout<<"YO I AM HERE";
    QTextStream out(&file);
    //cvs.open("cvsEmployees.txt");
    //tab.open("tabEmployees.txt");
    hyr="FirstName,LastName,Salary,HireYear\n";
    out<<hyr<<endl;
    //tab<<"FirstName \tLastName \tSalary \tHireYear\n";
    for(unsigned int i =0; i<rows; i++){
          emp= employees[i];
          fname=emp->getFirstName();
          lname=emp->getLastName();
          muny=emp->getSalary();
          hyr=emp->getHireYear();
          out<<fname<<","<<lname<<","<<muny<<","<<hyr<<"\n";
          //out<<line;
    }
    file.close();

    //tab.close();

}




void DatabaseForm::on_okButton_clicked()
{
    save();
}
