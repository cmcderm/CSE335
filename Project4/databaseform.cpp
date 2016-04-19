#include "databaseform.h"
#include "ui_databaseform.h"

DatabaseForm::DatabaseForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DatabaseForm)
{
    ui->setupUi(this);
    ui->tableView->col
}

DatabaseForm::~DatabaseForm()
{
    delete ui;
}
