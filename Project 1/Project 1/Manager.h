#ifndef MANAGER_H
#define MANAGER_H

#include <vector>

#include "Employee.h"

using std::vector;

class CManager : public CEmployee {

protected:
        vector<CEmployee*> group;
        string dept;
        
public:
        CManager():firstName("DefMan_First"),lastName("DefMan_Second"),hireYear(2015),salary(20),dept("CSE"){}
        CManager(string fn, string ln, int hy, int s, string d, vector<CEmployee*> &g):firstName(fn),lastName(ln),hireYear(hy),salary(s),dept(d),group(g){}
        virtual ~CManager();
        virtual void DisplayEmployee()const{
            cout << "This is a manager" << endl;
        }
        
        
};

#endif