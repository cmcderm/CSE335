/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Manager.h
 * Author: MacBookPro
 *
 * Created on February 27, 2016, 6:06 PM
 */

#ifndef MANAGER_H
#define MANAGER_H


#include "Employee.h"
#include <vector>

class Manager: public Employee{
protected:
    vector<Employee*> group;
    string dept;
        
public:
    Manager(){
        m_FirstName = "DefMan_first";
        m_LastName = "DefMan_second";
        m_hire = 2015;
        m_salary = 42;
        dept = "CSE";
    }
    Manager(string fn, string ln, string d, int s, short int hy)
    :Employee(fn, ln, s, hy){
        m_FirstName = fn;
        m_LastName = ln;
        m_hire = hy;
        m_salary = s;
        dept = d;
       // group = g; //bad practice but it's how the main is supposed to work it seems?
    }
    
    Manager(Manager &other){
        m_FirstName = other.m_FirstName;
        m_LastName = other.m_LastName;
        m_salary = other.m_salary;
        m_hire = other.m_hire;
        dept = other.dept;
        //group = other.group;
    }
    
    Manager& operator=(Manager &other){
        if(this!=&other){
            this->m_FirstName = other.m_FirstName;
            this->m_LastName = other.m_LastName;
            this->m_salary = other.m_salary;
            this->m_hire = other.m_hire;
            this->dept = other.dept;
           // this->m_group = other.group;
        }
        return *this;
    }
    
    virtual ~Manager(){
        for(int i = 0; i<group.size(); i++){
            delete (group[i]);
        }
        group.clear();
    }
    
    string getDepartment()const{return dept;}
    void setDepartment(string d){dept = d;}
    
    vector<Employee*> getGroup()const{return group;}
    void setGroup(vector<Employee*> &g){group = g;}
    
    virtual Employee* getEmployee(int i){return group[i];}
    virtual void addEmployee(Employee* emp){group.push_back(emp);}
    
    virtual void DisplayEmployee()const{
        cout << m_FirstName << " " << m_LastName << ": " << m_salary 
                << "; " << m_hire << "; "<<dept;
        
    }
};

#endif /* MANAGER_H */

