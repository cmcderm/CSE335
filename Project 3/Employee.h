/* 
 * File:   Employee.h
 * Author: MacBookPro
 *
 * Created on February 27, 2016, 6:06 PM
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H


#include <string>
#include <iostream>

#include "Unit.h"
#include "Visitor.h"

using std::cout;
using std::endl;

class Employee : public Unit{
protected:
    string m_FirstName;
    string m_LastName;
    unsigned short m_salary;
    unsigned short m_hire;
    unsigned short m_ID;
public:
    Employee(string firstName, 
            string lastName,
            unsigned short salary,
            unsigned short hireYear,
            unsigned short ID){
        m_FirstName = firstName;
        m_LastName = lastName;
        m_salary=salary;
        m_hire = hireYear;
        m_ID = ID;
    };
    Employee(){
        m_FirstName = "";
        m_LastName = "";
        m_salary = 0;
        m_hire = 0;
        m_ID = 0;
    }
    
    virtual ~Employee(){}
    
    string getFName(){
        return m_FirstName;
    }
    string getLName(){
        return m_LastName;
    }
    unsigned short getSalary(){
        return m_salary;
    }
    unsigned short getHireYear(){
        return m_hire;
    }
    void setFName(const string fName){
        m_FirstName=fName;
    }
    void setLName(const string lName){
        m_LastName=lName;
    }
    void setSalary(const unsigned short muny){
        m_salary=muny;
    }
    void setHireYear(const unsigned short hireY){
        m_hire=hireY;
    }
    virtual void DisplayEmployee()const{
        cout <<"\t\t" <<m_FirstName << " " << m_LastName << "; " << m_salary 
                << "; " << m_hire << "; " << m_ID << endl;
    }
    
    virtual void Accept(Visitor* v){v->VisitEmployee(this);}
};




#endif /* EMPLOYEE_H */

