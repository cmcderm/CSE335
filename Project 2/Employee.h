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

using namespace std;

class Employee{
protected:
    string m_FirstName;
    string m_LastName;
    //string m_dept;
    unsigned short m_salary;
    unsigned short m_hire;
public:
    Employee(string firstName, 
            string lastName,
            //string dept, 
            unsigned short salary,
            unsigned short hireYear){
        m_FirstName = firstName;
        m_LastName = lastName;
        m_salary=salary;
        //m_dept = dept;
        m_hire = hireYear;
    };
    Employee(){
         m_FirstName = "";
        m_LastName = "";
        //m_dept = "";
        m_hire = 0;
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
        cout << m_FirstName << " " << m_LastName << ": " << m_salary 
                << "; " << m_hire << endl;
    }
    
};




#endif /* EMPLOYEE_H */

