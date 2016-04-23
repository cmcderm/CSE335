#include "addrecordform.h"
#include "ui_addrecordform.h"

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
