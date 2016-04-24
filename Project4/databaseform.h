#ifndef DATABASEFORM_H
#define DATABASEFORM_H

#include <QMainWindow>
#include "addrecordform.h"
#include "employee.h"
#include <vector>

namespace Ui {
class DatabaseForm;
}

class DatabaseForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit DatabaseForm(QWidget *parent = 0);
    ~DatabaseForm();
    //stuuf

public slots:
    void on_addRButton_clicked();
    void accept_f_name();
    void receiveEmployee(Employee*);


private slots:
    void on_okButton_clicked();

private:
    void save();
    Ui::DatabaseForm *ui;
    std::vector<addRecordForm*> listen;
    std::vector<Employee*> employees;
    unsigned int rowNumber;
};

#endif // DATABASEFORM_H
