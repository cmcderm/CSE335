#ifndef DATABASEFORM_H
#define DATABASEFORM_H

#include <QMainWindow>
#include "addrecordform.h"
#include "employee.h"
#include <vector>
#include <QTableWidgetItem>
#include <bubblesort.h>

namespace Ui {
class DatabaseForm;
}

class DatabaseForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit DatabaseForm(QWidget *parent = 0);
    ~DatabaseForm();
    std::vector<Employee*> employees;

public slots:
    void on_addRButton_clicked();
    void receiveEmployee(Employee*);

private slots:
    void on_okButton_clicked();
    //void sort();
    void sortingEmp(int);

    //void empCompare(Employee*, int , int );

protected:
  //  std::vector<Employee*> employees;
    void sortEmployees(int column, Qt::SortOrder order);
private:
    void save();
    Ui::DatabaseForm *ui;
    std::vector<addRecordForm*> listen;
    //std::vector<Employee*> employees;
    bool sortedFirst;
    bool sortedLast;
    bool sortedSalary;
    bool sortedHireYear = false;
    unsigned int rowNumber;
};

#endif // DATABASEFORM_H
