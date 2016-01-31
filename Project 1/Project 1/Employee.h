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
    CEmployee(){ //Project says we need to implement default constructor
        firstName = "John";
        lastName = "Cena";
        hireYear.tm_year = 2015;
        salary = 20;
    }
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

    string getFirstName()const{return firstName;}
    void setFirstName(string fn){firstName = fn;}
    
    string getLastName()const{return lastName;}
    void setLastName(string ln){lastName = ln;}
    
    tm getHireYear()const{return hireYear;}
    void setHireYear(int yr){hireYear.tm_year = yr;}
    void setHireYear(tm yr){hireYear = yr;}
    
    int getSalary()const{return salary;}
    int setSalary(int s){salary = s;}
    
    
    virtual void DisplayEmployee()const{
        cout << firstName << " " << lastName << "\tSalary: " << salary 
                << "\t Hiring Year: " << hireYear.tm_year << endl;
    }
};
#endif