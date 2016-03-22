/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Group.h
 * Author: MacBookPro
 *
 * Created on March 20, 2016, 5:56 PM
 */

#ifndef GROUP_H
#define GROUP_H

#include <Vector>

#include "Employee.h"
#include "Visitor.h"

using std::vector;

class Group : public Unit{
protected:
    string name;
    vector<Employee*> m_group;
public:
    Group(string n){
        name = n;
    }
    string getName(){ return name;}
    
    void addGroupMember(Employee* emp){m_group.push_back(emp);}
    Employee* getGroupMember(int index){return m_group[index];}
    
    int getSize(){
        return m_group.size();
    }
    Employee* getEmployee(int index){ return m_group[index]; }
    
    virtual void Accept(Visitor* v){v->VisitGroup(this);}
};

#endif /* GROUP_H */

