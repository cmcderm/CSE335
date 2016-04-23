#ifndef DATABASEFORM_H
#define DATABASEFORM_H

#include <QMainWindow>
#include "addrecordform.h"
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
//signals:
  //  void newRow();

    /*void accept_l_name();
    void accept_salary();
    void accept_hyr();*/

private:
    Ui::DatabaseForm *ui;
    std::vector<addRecordForm*> listen;
    unsigned int rowNumber;
};

#endif // DATABASEFORM_H
