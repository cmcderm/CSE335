/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Visitor.h
 * Author: MacBookPro
 *
 * Created on March 1, 2016, 1:48 PM
 */

#ifndef VISITOR_H
#define VISITOR_H

class Employee;
class Manager;
class Department;
class Group;

class Visitor{
    
public:
    virtual void VisitEmployee(Employee* emp){
        emp->DisplayEmployee();
    }

    virtual void VisitManager(Manager* man){
        man->DisplayEmployee();
    }

    virtual void VisitDepartment(Department* dept){
        for(int i = 0; i < dept->getSize(); i++){
            dept->getDepartmentMember(i)->Accept(this);
        }
    }

    virtual void VisitGroup(Group* group){
        for(int i = 0; i < group.getSize(); i++){
            group->getGroupMember(i)->Accept(this);
        }            
    }
};







#endif /* VISITOR_H */

