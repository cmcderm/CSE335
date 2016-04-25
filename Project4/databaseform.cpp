#include "databaseform.h"
#include "ui_databaseform.h"
#include "addrecordform.h"

#include <QStandardItem>
#include <QTableView>
#include <QTableWidgetItem>
#include <QTableWidget>

#include <iostream>
#include <fstream>

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
<<<<<<< HEAD
    connect(ui->tableWidget->horizontalHeader(), SIGNAL(sectionClicked(int)),this,SLOT(sortingEmp(int)));
    //ui->tableWidget->setSortingEnabled(true);
=======

    ui->tableWidget->setSortingEnabled(true);
>>>>>>> origin/master
}

DatabaseForm::~DatabaseForm()
{

    delete ui;
}

void DatabaseForm::on_addRButton_clicked()
{
    addRecordForm* arf = new addRecordForm(this);
    arf->show();

    listen.push_back(arf);
    connect(arf, SIGNAL(addEmployee(Employee*)), this, SLOT(receiveEmployee(Employee*)));
<<<<<<< HEAD
=======
    connect(ui->tableWidget, SIGNAL(sort(int,Qt::SortOrder)), this, SLOT(sortEmployees(int, Qt::SortOrder)));
    //connect(arf,SIGNAL(retStr()),ui->tableWidget,SLOT(insertRow(int)));
    //connect(ui->tableWidget,SIGNAL(itemChanged(QTableWidgetItem*)),arf,SLOT(on_pushButtonAdd_clicked()));
    //connect(arf,SIGNAL(observerDeleted()),ui->tableWidget,SLOT(insertRow(int)));
>>>>>>> origin/master

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


void DatabaseForm::save(){
    int rows = ui->tableWidget->rowCount();
    Employee* emp;
    std::string fname,lname,muny,hyr;
    QString cvstxt= "cvs.txt";//,tabtxt="tabEmployees.txt";

    std::ofstream ofs;
    ofs.open("../Project4/cvs.txt");
    if(ofs.is_open()){
        ofs<<"FirstName,LastName,Salary,HireYear\n";
        ofs.flush();
        for(int i =0; i<rows; i++){
              emp= employees[i];
              fname =emp->getFirstName().toStdString().c_str();
              lname=emp->getLastName().toStdString().c_str();
              muny=emp->getSalary().toStdString().c_str();
              hyr=emp->getHireYear().toStdString().c_str();
              ofs<<fname<<","<<lname<<","<<muny<<","<<hyr<<std::endl;
        }
        ofs.close();
    }
}

void DatabaseForm::on_okButton_clicked(){
    save();
    std::cout<<"OK"<<std::endl;
}

<<<<<<< HEAD

void DatabaseForm::sortingEmp(int clm){
    if(clm==0){

    }





=======
void DatabaseForm::sortEmployees(int column, Qt::SortOrder order){
    std::cout << column << std::endl;
>>>>>>> origin/master
}















