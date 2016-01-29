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

class CDatabase:public CEmployee {

protected:
        vector<CEmployee*> database;

public:
        CDatabase();

        void AddRecord();
        void DisplayRecords();
};

#endif /* CDATABASE_H */

