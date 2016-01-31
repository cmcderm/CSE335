/*
 *  Author: Connor McDermott
 *  File: Employee.h
 * 
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <cstdlib>
#include <string>
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

using std::string;

class CEmployee {

protected:
    string firstName;
    string lastName;
    tm hireYear;
    int salary;

public:
    CEmployee() =default;
        /*CEmployee():firstName("SubA_First"),lastName("SubA_Second"),
          //      hireYear(2015),salary(20){}*/
    CEmployee(string fn, 
        string ln, int muny, 
        tm hy){
        firstName =fn;
        lastName =ln;
        salary = muny;
        hireYear.tm_year = hy.tm_year;
    };
    CEmployee(CEmployee &other){
        firstName = other.firstName;
        lastName = other.lastName;
        salary = other.salary;
        hireYear = other.hireYear;
    }
    
    CEmployee& operator=(CEmployee &other){
        if(this!=&other){
            this->firstName = other.firstName;
            this->lastName = other.lastName;
            this->salary = other.salary;
            this->hireYear = other.hireYear;
        }
        return *this;
    }
        
    // CEmployee(string fn, string ln, int s, tm hy):firstName(fn),
    // lastName(ln), salary(s), hireYear(hy.tm_year){}

    virtual ~CEmployee(){};

    string getFirstName()const{return firstName;}
    string getLastName()const{return lastName;}
    tm getHireYear()const{return hireYear;}
    int getSalary()const{return salary;}
    
    
    virtual void DisplayEmployee()const{
        cout << firstName << " " << lastName << "\tSalary: " << salary 
                << "\tHiring Year: " << hireYear.tm_year << endl;
    }
};
#endif