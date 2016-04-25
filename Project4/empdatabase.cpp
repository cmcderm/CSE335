#include "empdatabase.h"
#include "employee.h"
#include <vector>
#include "databaseform.h"


empDataBase::empDataBase()
{
 empDataBase::empDataBase(){};

}
virtual bool empDataBase::compareFN(int i, int j) const {
    return DatabaseForm::employees[i]->getFirstName() > DatabaseForm::employees[j]->getFirstName();
}

virtual bool empDataBase::compareLN(int i, int j) const {
    return DatabaseForm::employees[i]->getLastName() > DatabaseForm::employees[j]->getLastName();
}

virtual bool empDataBase::compareSalary(int i, int j) const {
    return DatabaseForm::employees[i]->getSalary() > DatabaseForm::employees[j]->getSalary();
}

virtual bool empDataBase::compareYR(int i, int j) const {
    return DatabaseForm::employees[i]->getHireYear() > DatabaseForm::employees[j]->getHireYear();
}
virtual void empDataBase::swap(int i, int j){
    Employee* temp = DatabaseForm::employees[i];
    DatabaseForm::employees[i] = DatabaseForm::employees[j];
    DatabaseForm::employees[j] = temp;
}
virtual unsigned int empDataBase::getSize() const {
   return DatabaseForm::employees.size();
}
empDataBase(const vector<Employee*>& g){
        DatabaseForm::employees = g;
    }

    virtual ~empDataBase(){
        for(int i = 0; i < DatabaseForm::employees.size(); i++){
            delete DatabaseForm::employees[i];
        }
    }


    virtual bool smaller(int i, int j) const{
        return DatabaseForm::employees[i] > DatabaseForm::employees[j];
    }
