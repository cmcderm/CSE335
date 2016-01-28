#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using std::string;

class Employee {

protected:
        string firstName;
        string lastName;
        int hireYear;
        int salary;

public:
        Employee();

        string getFirstName(){return firstName;}
        string getLastName(){return lastName;}
        int getHireYear(){return hireYear;}
        int getSalary(){return salary;}
};
#endif