#include "databaseform.h"
#include "ui_databaseform.h"
#include "addrecordform.h"
#include <QStandardItem>
#include <QTableView>
#include <QTableWidgetItem>
#include <QTableWidget>
#include <iostream>


DatabaseForm::DatabaseForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DatabaseForm)
{
    ui->setupUi(this);
    rowNumber=0;
    ui->tableWidget->setSortingEnabled(true);


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
    rows++;
    ui->tableWidget->setRowCount(rows);
    ui->tableWidget->setItem(rows-1, 0, new QTableWidgetItem(emp->getFirstName()));
    ui->tableWidget->setItem(rows-1, 1, new QTableWidgetItem(emp->getLastName()));
    ui->tableWidget->setItem(rows-1, 2, new QTableWidgetItem(emp->getSalary()));
    ui->tableWidget->setItem(rows-1, 3, new QTableWidgetItem(emp->getHireYear()));
    //ui->tableWidget->setItem
    std::cout << "Employee: Name:" << emp->getFirstName().toStdString() << " " << emp->getLastName().toStdString() << " Salary: " << emp->getSalary().toStdString() << " Hired:" << emp->getHireYear().toStdString() << std::endl;
}


void DatabaseForm::accept_f_name(){
    QTableWidgetItem *first =new QTableWidgetItem(QString("fnam"));
    ui->tableWidget->setRowCount(rowNumber);
    ui->tableWidget->setItem(rowNumber,0,first);
    std::cout<<"gere2"<<std::endl;

    //ui->tableWidget->setCurrentCell(1,1);

}
