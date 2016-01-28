/*
 *  Author: Connor McDermott
 *  File: Employee.h
 * 
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>

using std::cout;
using std::endl;

using std::string;

class Employee {

protected:
        string firstName;
        string lastName;
        int hireYear;
        int salary;

public:
        Employee():firstName("SubA_First"),lastName("SubA_Second"),hireYear(2015),salary(20){}
        Employee(string fn, string ln, int hy, int s):firstName(fn),lastName(ln),hireYear(hy),salary(s){}

        string getFirstName(){return firstName;}
        string getLastName(){return lastName;}
        int getHireYear(){return hireYear;}
        int getSalary(){return salary;}
        
        void print(){
            cout << firstName << " " << lastName << "\tSalary: " << salary << "\tHiring Year: " << hireYear << endl;
        }
};
#endif