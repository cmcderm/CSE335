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
#include "BubbleSort.h"

int main(int argc, char** argv) {
    
    cout<<"*********************** Before Sorting"<<endl;
    vector<Employee*> ev;
    
    Employee* js1e = new Employee("John", "Smith1", 10000, 2011);
    Employee* js2e = new Employee("John", "Smith2", 20000, 2012);
    Employee* js3e = new Employee("John", "Smith3", 30000, 2013);
    Manager* tcm = new Manager("Tom", "Cruise", "Sales", 40000, 2000);
    tcm->addEmployee(js1e);
    tcm->addEmployee(js2e);
    tcm->addEmployee(js3e);
    
    ev.push_back(js1e);
    ev.push_back(js2e);
    ev.push_back(js3e);
    ev.push_back(tcm);
    
    
    EmployeeDatabaseAdapter edb(ev);
    
    Employee* jd1e = new Employee("John", "Doe1", 15000, 2010);
    Employee* jd2e = new Employee("John", "Doe2", 25000, 2011);
    Employee* jd3e = new Employee("John", "Doe3", 35000, 2012);
    Manager* acm = new Manager("Alice", "Cooper","Human Resources" , 45000, 2000); 
    acm->addEmployee(jd1e);
    acm->addEmployee(jd2e);
    acm->addEmployee(jd3e);
    
    edb.AddRecord(jd1e);
    edb.AddRecord(jd2e);
    edb.AddRecord(jd3e);
    edb.AddRecord(acm);
    
    edb.DisplayRecords();
    
    cout << "*********************** After Sorting By FirstName Alphabetical" << endl;
    BubbleSortFN BSFN;
    BSFN.Sort(&edb);
    edb.DisplayRecords();
    
    cout << "*********************** After Sorting By FirstName Reverse Alphabetical" << endl;
    
    cout<<"*********************** After Sorting By LastName Alphabetical"<<endl;
    
    cout<<"*********************** After Sorting By Salary Increasing"<<endl;
    
    cout<<"*********************** After Sorting By Salary Decreasing"<<endl;
    
    cout<<"*********************** After Sorting By Hireyear Increasing"<<endl;
    
    cout<<"*********************** After Sorting By Hireyear Decreasing"<<endl;
    
    return 0;
}

