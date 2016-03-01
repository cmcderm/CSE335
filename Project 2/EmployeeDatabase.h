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
#include <algorithm>

#include "SortableVector.h"

using std::string;

class EmployeeDatabase : public SortableVector{ 
protected:
    string name;
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
        
        virtual unsigned int getSize() const {
            return database.size();
        }
        
        virtual bool smaller(int i, int j) const{
            return database[i] > database[j];
        }
        
        string toLower(string str){
            transform(str.begin(), str.end(), str.begin(), ::tolower);
            return str;
        }
        
        virtual void swap(int i, int j){
            Employee* temp = database[i];
            database[i] = database[j];
            database[j] = temp;
        }

        void AddRecord(Employee *newAdd){
            database.push_back(newAdd);
        }
        
        void DisplayRecords(){
            for(int i = 0; i<database.size();i++){
                database[i]->DisplayEmployee();
            }
            database.clear();
        }
        
        void print() const{
            for(int i = 0; i < database.size(); i++){
                database[i]->DisplayEmployee();
            }
        }
};

#endif /* EMPLOYEEDATABASE_H */

