/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EmployeeDatabase.h
 * Author: MacBookPro
 *
 * Created on February 27, 2016, 6:06 PM
 */

#ifndef EMPLOYEEDATABASE_H
#define EMPLOYEEDATABASE_H


#include "Employee.h"
#include "Manager.h"
#include <string>

using std::string;


class EmployeeDatabase : SortableVector{ 
protected:
    vector<Employee*> database;

public:
        EmployeeDatabase(){}
        
        EmployeeDatabase(const vector<Employee*>& g){
            database = g;
        }
        
        virtual ~EmployeeDatabase(){
            for(int i = 0; i < database.size(); i++){
                delete database[i];
            }
        }

        void AddRecord(Employee *newAdd){
            database.push_back(newAdd);
        }
        
        void DisplayRecords(){
            for(int i = 0; i<database.size();i++){
                database[i]->DisplayEmployee();
            }
        }
};




#endif /* EMPLOYEEDATABASE_H */

