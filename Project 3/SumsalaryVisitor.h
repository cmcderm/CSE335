/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NameCountingVisitor.h
 * Author: MacBookPro
 *
 * Created on March 1, 2016, 2:28 PM
 */

#ifndef SUMSALARYVISITOR_H
#define SUMSALARYVISITOR_H

#include "Visitor.h"
#include "Unit.h"
#include "Employee.h"
#include "Department.h"
#include "Group.h"


class SumsalaryVisitor : public Visitor{
protected:
    long totalSalary;
public:
    virtual void VisitEmployee(Employee* emp){
        totalSalary += emp->getSalary();
    }

    virtual void VisitManager(Manager* man){
        totalSalary += man->getSalary();
    }

    virtual void VisitDepartment(Department* dept){
        for(int i = 0; i < dept->getSize(); i++){
            dept->getDepartmentMember(i)->Accept(this);
        }
    }

    virtual void VisitGroup(Group* group){
        for(int i = 0; i < group->getSize(); i++){
            totalSalary += group->getGroupMember(i)->getSalary();
        }
    }
    
    virtual long getTotalSalary(){
        return totalSalary;
    }
    
    virtual void restTotalSalary(){totalSalary = 0;}
};





#endif /* SUMSALARYVISITOR_H */

