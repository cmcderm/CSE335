#ifndef MANAGER_H
#define MANAGER_H

#include <cstdlib>
#include <vector>

#include "Employee.h"

using std::vector;

class CManager: public CEmployee {

protected:
    vector<CEmployee*> group;
    string dept;
        
public:
    CManager(){
        firstName = "DefMan_first";
        lastName = "DefMan_second";
        hireYear = 2015;
        salary = 42;
        dept = "CSE";
    }
    CManager(string fn, string ln, tm hy, int s, string d, vector<CEmployee*> &g):CEmployee(fn, ln, hy, s){
        firstName = fn;
        lastName = ln;
        hireYear = hy.tm_year;
        salary = s;
        dept = d;
        group = g;
    }
    virtual ~CManager();
    virtual void DisplayEmployee()const{
        cout << "This is a manager" << endl;
    }
};

#endif