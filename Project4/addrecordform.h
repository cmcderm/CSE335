#ifndef ADDRECORDFORM_H
#define ADDRECORDFORM_H

#include <QDialog>
#include <QString>
#include <QStandardItemModel>

#include "employee.h"

namespace Ui {
class addRecordForm;
}

class addRecordForm : public QDialog
{
    Q_OBJECT

public:
    explicit addRecordForm(QWidget *parent = 0);
    ~addRecordForm();
public slots:
    void on_pushButtonAdd_clicked();
    void addFName();
    void on_pushButtonCancel_clicked();
    //QString retStr();

signals:
    void observerDeleted();
    void addEmployee(Employee*);
    //void on_Send();
    /*
    void addLName(QString);
    void addSalary(float);
    void addHYear(int);
*/

private:
    Ui::addRecordForm *ui;
};

#endif // ADDRECORDFORM_H
