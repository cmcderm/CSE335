/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Department.h
 * Author: MacBookPro
 *
 * Created on March 20, 2016, 5:56 PM
 */

#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <vector>

#include "Visitor.h"

using std::vector;

class Department : public Unit{
protected:
    string m_name;
    vector<Unit*> m_members;
public:
    Department(string n){
        m_name = n;
    }
    string getName(){return m_name;}
    
    virtual int addDepartmentMember(Unit* u){m_members.push_back(u);}
    Unit* getDepartmentMember(int index){return m_members[index];}
    int getSize(){
        return m_members.size();
    }
    
    virtual void Accept(Visitor* v){v->VisitDepartment(this);}
};

#endif /* DEPARTMENT_H */

