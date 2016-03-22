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


#include "Visitor.h"
#include "Unit.h"
#include "Department.h"
#include "Employee.h"

class PrintVisitor: public Visitor{
public:
    virtual void VisitEmployee(Employee* emp){
    
    }

    virtual void VisitManager(Manager* man){
    
    }

    virtual void VisitDepartment(Department* dept){
    
    }

    virtual void VisitGroup(Group* group){

    }
};







#endif /* PRINTVISITOR_H */

