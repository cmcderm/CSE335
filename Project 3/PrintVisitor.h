/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PrintVisitor.h
 * Author: MacBookPro
 *
 * Created on March 2, 2016, 12:37 PM
 */

#ifndef PRINTVISITOR_H
#define PRINTVISITOR_H

#include <iostream>

#include "Visitor.h"
#include "Unit.h"
#include "Department.h"
#include "Employee.h"
#include "Group.h"

using std::cout;
using std::endl;

class PrintVisitor: public Visitor{
public:
    virtual void VisitEmployee(Employee* emp){
        emp->DisplayEmployee();
    }

    virtual void VisitManager(Manager* man){
        man->DisplayEmployee();
    }

    virtual void VisitDepartment(Department* dept){
        cout << dept->getName() << endl;
        for(int i = 0; i < dept->getSize(); i++){
            dept->getDepartmentMember(i)->Accept(this);
        }
    }

    virtual void VisitGroup(Group* group){
        cout << group->getName() << endl;
        for(int i = 0; i < group->getSize(); i++){
            cout << "\t";
            group->getGroupMember(i)->Accept(this);
        } 
    }
};







#endif /* PRINTVISITOR_H */

