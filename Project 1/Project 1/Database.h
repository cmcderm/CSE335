/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CDatabase.h
 * Author: MacBookPro
 *
 * Created on January 29, 2016, 5:18 PM
 */

#ifndef CDATABASE_H
#define CDATABASE_H

#include "Employee.h"
#include "Manager.h"
#include <string>

using std::string;

class CDatabase {

protected:
    vector<CEmployee*> database;

public:
        CDatabase() = default;
        
        CDatabase(vector<CEmployee*> g){
            database = g;
        }

        void AddRecord(CEmployee *newAdd){
            database.push_back(newAdd);
        }
        
        void DisplayRecords(){
            for(int i = 0; i<database.size();i++){
                database[i]->DisplayEmployee();
            }
        }
};

#endif /* CDATABASE_H */

