/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

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


using namespace std;
/*
 * 
 */
int main(int argc, char** argv) {
    
    cout<<"*********************** Before Sorting"<<endl;
    vector<Employee*> ev;
    
    Employee js1e= Employee("John", "Smith1", 10000, 2011);
    Employee js2e= Employee("John", "Smith2", 20000, 2012);
    Employee js3e= Employee("John", "Smith3", 30000, 2013);
    ev.push_back(&js1e);
    ev.push_back(&js2e);
    ev.push_back(&js3e);
    
    EmployeeDatabase edb(ev);
    Manager tcm("Tom", "Cruise", "Sales", 40000, 2000);
    
    Employee jd1e= Employee("John", "Doe1", 15000, 2010);
    Employee jd2e = Employee("John", "Doe2", 25000, 2011);
    Employee jd3e= Employee("John", "Doe3", 35000, 2012);
    Manager acm("Alice", "Cooper","Human Resources" , 45000, 2000); 
    
    
    
    
    
    
    
    
    
   

    return 0;
}

