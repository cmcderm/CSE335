/* 
 * File:   main.cpp
 * Author: Connor
 *
 * Created on February 9, 2016, 5:59 PM
 */


#include <cstdlib>
#include <iostream>
#include <vector>
#include "Employee.h"
#include "Manager.h"
#include "EmployeeDatabase.h"

int main(int argc, char** argv) {
    
    cout<<"*********************** Before Sorting"<<endl;
    vector<Employee*> ev;
    
    Employee js1e("John", "Smith1", 10000, 2011);
    Employee js2e("John", "Smith2", 20000, 2012);
    Employee js3e("John", "Smith3", 30000, 2013);
    Manager tcm("Tom", "Cruise", "Sales", 40000, 2000);
    tcm.addEmployee(&js1e);
    tcm.addEmployee(&js2e);
    tcm.addEmployee(&js3e);
    
    ev.push_back(&js1e);
    ev.push_back(&js2e);
    ev.push_back(&js3e);
    ev.push_back(&tcm);
    
    
    EmployeeDatabase edb(ev);
    
    Employee jd1e("John", "Doe1", 15000, 2010);
    Employee jd2e("John", "Doe2", 25000, 2011);
    Employee jd3e("John", "Doe3", 35000, 2012);
    Manager acm("Alice", "Cooper","Human Resources" , 45000, 2000); 
    acm.addEmployee(&jd1e);
    acm.addEmployee(&jd2e);
    acm.addEmployee(&jd3e);
    
    edb.AddRecord(&jd1e);
    edb.AddRecord(&jd2e);
    edb.AddRecord(&jd3e);
    edb.AddRecord(&acm);
    
    edb.print();
    
    cout << "*********************** Before Sorting" << endl;

    for(int i = 0; i < ev.size(); i++){
        delete ev[i];
    }
    ev.clear();
    
    return 0;
}

