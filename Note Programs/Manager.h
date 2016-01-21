/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Manager.h
 * Author: MacBookPro
 *
 * Created on January 19, 2016, 1:21 PM
 */

#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include <vector>

class Manager: public Employee{
protected:
    
    Employee m_Employee;
    vector<Employee*> m_group;
    unsigned short m_level;
public:
    Manager (string firstName, 
            string lastName,
            string dept, 
            unsigned short hireYear, 
             const vector<Employee*> group,
            const unsigned short level):Employee(firstName, 
                    lastName, dept, hireYear){
                 //m_Employee =emp;
                m_FirstName = firstName;
        m_LastName = lastName;
        m_dept = dept;
        m_hire = hireYear;
        m_group = group;
        m_level = level;
            };
    Manager(const Employee emp, const vector<Employee*> group,
            const unsigned short level){
        m_Employee =emp;
        m_group = group;
        m_level = level;
    };
    void print(){
        cout<< m_Employee.getFName()<<" "<<
                m_Employee.getLName()<<"; "<<
                m_Employee.getDept()<<" "<<
                m_Employee.getHireYear()<<"; "<<
                m_level<<": ";
        
        for(int i=0; i<m_group.size(); i++){
            cout<< m_group[i]->getFName()<<" "<<
                    m_group[i]->getLName()<<"; ";
        }
        cout<<endl;
    }
        
    
    
};


#endif /* MANAGER_H */

