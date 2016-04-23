#include "databaseform.h"
#include "ui_databaseform.h"
#include "addrecordform.h"
#include <QStandardItem>


DatabaseForm::DatabaseForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DatabaseForm)
{
    ui->setupUi(this);
    QStandardItemModel *model = new QStandardItemModel(2,4,this);
   model->setHorizontalHeaderItem(0, new QStandardItem(QString("First Name")));
   model->setHorizontalHeaderItem(1, new QStandardItem(QString("Last Name")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("Salary")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("Hire Year")));

   ui->tableView->setModel(model);
}

DatabaseForm::~DatabaseForm()
{
    ui->tableWidget->insertColumn(1);
    //connect(ui->tableWidget->insertRow();
    delete ui;
}

void DatabaseForm::on_addRButton_clicked()
{
    addRecordForm* arf = new addRecordForm();
    arf->show();
}
void DatabaseForm::newRow(){
    ui->tableWidget->insertRow(1);
}

/*
void DatabaseForm::accept_f_name(){
    ui->tableWidget->setCurrentCell(1,1);

}
*/
/////////
#include "databaseform.h"
#include "ui_databaseform.h"
#include "addrecordform.h"
#include <QStandardItem>
#include <QTableView>
#include <QTableWidgetItem>
#include <QTableWidget>


DatabaseForm::DatabaseForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DatabaseForm)
{
    ui->setupUi(this);
    rowNumber=0;
    QStandardItemModel *model = new QStandardItemModel(rowNumber,4,this);
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("First Name")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("Last Name")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("Salary")));
    model->setHorizontalHeaderItem(3, new QStandardItem(QString("Hire Year")));

   ui->tableView->setModel(model);


}

DatabaseForm::~DatabaseForm()
{
    //connect(ui->tableWidget->insertRow();
    delete ui;
}

void DatabaseForm::on_addRButton_clicked()
{
    rowNumber++;
    QStandardItem *newRow = new QStandardItem(QString("yo"));
    QStandardItemModel *model = new QStandardItemModel(rowNumber,4,this);
    addRecordForm* arf = new addRecordForm();
    arf->show();
     QTableWidgetItem *first =new QTableWidgetItem(QString("sdfdsf"));
     ui->tableWidget->insertRow(rowNumber);
     ui->tableWidget->setItem(rowNumber,0,first);
    connect(ui->tableWidget,SIGNAL(itemChanged(QTableWidgetItem*)),this,SLOT(accept_f_name(QString)));
     //ui->tableView->setModel(model);
}
/*
void DatabaseForm::newRow(){
    ui->tableWidget->insertRow(1);
}
*/

void DatabaseForm::accept_f_name(QString fname){
    //rowNumber++;
     //QStandardItemModel *model = new QStandardItemModel(rowNumber,4,this);
    //QStandardItem *newRow = new QStandardItem(QString(fname));
    QTableWidgetItem *first =new QTableWidgetItem(QString(fname));
   // model->setItem(0,rowNumber,newRow);
    //ui->tableView->setModel((model));
    ui->tableWidget->insertRow(rowNumber);
    ui->tableWidget->setItem(rowNumber,0,first);

    //ui->tableWidget->setCurrentCell(1,1);

}
