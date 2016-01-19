/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   emp.h
 * Author: MacBookPro
 *
 * Created on January 15, 2016, 4:01 PM
 */

#ifndef EMP_H
#define EMP_H

#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Employee{
private:
    string firstName, lastName;
    short dep;
public:
    Employee();
    Employee(string,string,short);
    void print() const{
        cout<<"Name: "<<firstName <<" "<<lastName<<endl
                <<"Dept: "<<dep;
    }
};


class Manager :public Employee{
private:
    //vector<Employee*> group;
    short level;
    
public:
    //Manager();
    Manager(string, string, short, short);
    void print() const{
        Employee::print();
        cout<<"Level: "<<level;
    }
};



#endif /* EMP_H */

