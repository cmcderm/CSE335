#ifndef MANAGER_H
#define MANAGER_H

#include <cstdlib>
#include <vector>
#include <iostream>
#include "Employee.h"

using std::vector;
using namespace std;

class CManager: public CEmployee {

protected:
    vector<CEmployee*> group;
    string dept;
        
public:
    
    CManager(string fn, string ln, int s, tm hy, string d, vector<CEmployee*> &g)
    :CEmployee(fn, ln, s, hy){
        firstName = fn;
        lastName = ln;
        hireYear.tm_year = hy.tm_year;
        salary = s;
        dept = d;
        group = g;
    }
    CManager(){
        firstName = "DefMan_first";
        lastName = "DefMan_second";
        hireYear.tm_year = 2015;
        salary = 42;
        group = vector<CEmployee*>();
        dept = "CSE";
    }
    
    virtual ~CManager(){};
    
    
    virtual void DisplayEmployee()const{
        cout << this->firstName << " is a manager who manages: " << endl;
        for(int i=0; i<group.size(); i++){
            cout<< group[i]->getFirstName()<<" "<<
                    group[i]->getLastName()<<"; ";
        }
        if (group.size() ==0){
            cout<< "no one";
        }
        cout<<endl;
    }
};

#endif