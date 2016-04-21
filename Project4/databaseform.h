#ifndef DATABASEFORM_H
#define DATABASEFORM_H

#include <QMainWindow>

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

private slots:
    void on_addRButton_clicked();

private:
    Ui::DatabaseForm *ui;
};

#endif // DATABASEFORM_H
