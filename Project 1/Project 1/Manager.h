#ifndef MANAGER_H
#define MANAGER_H

#include <vector>

#include "Employee.h"

using std::vector;

class Manager : public Employee {

protected:
        vector<Employee*> group;
        string dept;
        
public:
        Manager():firstName("DefMan_First"),lastName("DefMan_Second"),hireYear(2015),salary(20),dept("CSE"){}
        Manager(string fn, string ln, int hy, int s, string d, vector<Employee*> &g):firstName(fn),lastName(ln),hireYear(hy),salary(s),dept(d),group(g){}
        
        virtual void print()const{
            cout << "This is a manager" << endl;
        }
};

#endif