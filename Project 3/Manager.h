/* 
 * File:   Manager.h
 * Author: MacBookPro
 *
 * Created on February 27, 2016, 6:06 PM
 */

#ifndef MANAGER_H
#define MANAGER_H

#include <vector>

#include "Employee.h"
#include "Visitor.h"

using std::vector;

class Manager : public Employee{
protected:
    vector<Employee*> group;
    unsigned short m_rank;
        
public:
    Manager(){
        m_FirstName = "DefMan_first";
        m_LastName = "DefMan_second";
        m_hire = 2015;
        m_salary = 42;
        m_rank = 5;
    }
    Manager(string fn, string ln, int s, short int hy, short int ID, short int r)
    :Employee(fn, ln, s, hy, ID){
        m_rank = r;
    }
    
    Manager(Manager &other){
        m_FirstName = other.m_FirstName;
        m_LastName = other.m_LastName;
        m_salary = other.m_salary;
        m_hire = other.m_hire;
        m_rank = other.m_rank;
    }
    
    Manager& operator=(Manager &other){
        if(this!=&other){
            this->m_FirstName = other.m_FirstName;
            this->m_LastName = other.m_LastName;
            this->m_salary = other.m_salary;
            this->m_hire = other.m_hire;
            this->m_rank = other.m_rank;
           // this->m_group = other.group;
        }
        return *this;
    }
    
    virtual ~Manager(){
    }
    
    unsigned short getRank()const{return m_rank;}
    void setRank(unsigned short d){m_rank = d;}
    
    vector<Employee*> getGroup()const{return group;}
    void setGroup(vector<Employee*> &g){group = g;}
    
    virtual Employee getEmployee(int i){return *(group[i]);}
    virtual void addEmployee(Employee* emp){group.push_back(emp);}
    
    virtual void DisplayEmployee()const{
        cout << "\t"<<m_FirstName << " " << m_LastName << ": " << m_salary 
                << "; " << m_hire << "; "<<m_ID<<"; "<< m_rank << endl;
    }
};

#endif /* MANAGER_H */

