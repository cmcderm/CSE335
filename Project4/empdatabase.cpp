#include "empdatabase.h"
#include "employee.h"
#include <vector>
#include "databaseform.h"

using std::vector;

empDataBase::empDataBase(){}

empDataBase::empDataBase(const vector<Employee*>& g){
        empDB = g;
}
//empDataBase::~empDataBase(){
//    for(int i = 0; i < empDB.size(); i++){
//        delete empDB[i];
//    }
//}

bool empDataBase::compareFN(int i, int j) const {
    return empDB[i]->getFirstName() > empDB[j]->getFirstName();
}

bool empDataBase::compareLN(int i, int j) const {
    return empDB[i]->getLastName() > empDB[j]->getLastName();
}

bool empDataBase::compareSalary(int i, int j) const {
    return empDB[i]->getSalary() > empDB[j]->getSalary();
}

bool empDataBase::compareYR(int i, int j) const {
    return empDB[i]->getHireYear() > empDB[j]->getHireYear();
}
void empDataBase::swap(int i, int j){
    Employee* temp = empDB[i];
    empDB[i] = empDB[j];
    empDB[j] = temp;
}
unsigned int empDataBase::getSize() const {
   return empDB.size();
}
bool empDataBase::smaller(int i, int j) const{
    return empDB[i] > empDB[j];
}
