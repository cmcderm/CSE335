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

    rowNumber++;
    addRecordForm* arf = new addRecordForm();
    arf->show();
    ui->tableWidget->setRowCount(rowNumber);
    //connect(arf,SIGNAL(retStr()),ui->tableWidget,SLOT(insertRow(int)));
    connect(ui->tableWidget,SIGNAL(itemChanged(QTableWidgetItem*)),arf,SLOT(on_pushButtonAdd_clicked()));
    //connect(arf,SIGNAL(observerDeleted()),ui->tableWidget,SLOT(insertRow(int)));
     //ui->tableView->setModel(model);
}


void DatabaseForm::accept_f_name(){
    QTableWidgetItem *first =new QTableWidgetItem(QString("fnam"));
    ui->tableWidget->setRowCount(rowNumber);
    ui->tableWidget->setItem(rowNumber,0,first);
    std::cout<<"gere2"<<std::endl;

    //ui->tableWidget->setCurrentCell(1,1);

}
