#include "databaseform.h"
#include "ui_databaseform.h"
#include "addrecordform.h"

DatabaseForm::DatabaseForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DatabaseForm)
{
    ui->setupUi(this);
    //ui->tableView->col
}

DatabaseForm::~DatabaseForm()
{
    delete ui;
}

void DatabaseForm::on_addRButton_clicked()
{
    addRecordForm* arf = new addRecordForm();
    arf->show();
}
