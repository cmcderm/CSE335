#ifndef MANAGER_H
#define MANAGER_H

#include <vector>

#include "Employee.h"

using std::vector;

class Manager : public Employee {

protected:
        vector<Employee*> group;
        
public:
        Manager();
};

#endif