#ifndef DATABASEFORM_H
#define DATABASEFORM_H

#include <QMainWindow>
#include "addrecordform.h"
#include "employee.h"
#include <vector>
#include <QTableWidgetItem>

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
    void receiveEmployee(Employee*);


private slots:
    void on_okButton_clicked();

    void on_tableWidget_clicked(const QModelIndex &index);

    void on_tableWidget_itemClicked(QTableWidgetItem *item);

    void on_tableWidget_itemActivated(QTableWidgetItem *item);

private:
    void save();
    Ui::DatabaseForm *ui;
    std::vector<addRecordForm*> listen;
    std::vector<Employee*> employees;
    unsigned int rowNumber;
};

#endif // DATABASEFORM_H
