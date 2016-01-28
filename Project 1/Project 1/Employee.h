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
        int hireYear;
        int salary;

public:
        CEmployee():firstName("SubA_First"),lastName("SubA_Second"),hireYear(2015),salary(20){}
        
        CEmployee(string fn, string ln,tm hy,int s):firstName(fn),lastName(ln),salary(s){
            hireYear = hy.tm_year;
        }
        
        virtual ~CEmployee(){}

        string getFirstName()const{return firstName;}
        string getLastName()const{return lastName;}
        int getHireYear()const{return hireYear;}
        int getSalary()const{return salary;}
        
        virtual void DisplayEmployee()const{
            cout << firstName << " " << lastName << "\tSalary: " << salary << "\tHiring Year: " << hireYear << endl;
        }
};

class CDatabase {

protected:
        vector<CEmployee*> database;

public:
        CDatabase();

        void AddRecord();
        void DisplayRecords();
};

#endif