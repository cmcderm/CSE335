#include "addrecordform.h"
#include "ui_addrecordform.h"
#include "databaseform.h"

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

void addRecordForm::onAccept(){
    DatabaseForm* main= new DatabaseForm(this);
    connect(ui->pushButtonAdd,SIGNAL(clicked(bool)),main,SLOT(newRow));
}


/*
addRecordForm::addFName(){

   // connect(ui->lineEditFirst,SIGNAL(addFName),ui->)
}
*/
////#include "addrecordform.h"
#include "ui_addrecordform.h"
#include "databaseform.h"

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

/*void addRecordForm::onAccept(){
    connect(ui->pushButtonAdd,SIGNAL(clicked(bool)),this,SLOT());
}

/*

void addRecordForm::addFName(){
    ui->lineEditFirst;
   // connect(ui->lineEditFirst,SIGNAL(addFName),ui->)
}

*/
