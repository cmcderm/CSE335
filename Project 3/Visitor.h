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
    virtual void VisitEmployee(Employee* emp)=0;
    virtual void VisitManager(Manager* man)=0;
    virtual void VisitDepartment(Department* dept)=0;
    virtual void VisitGroup(Group* group)=0;
};







#endif /* VISITOR_H */

