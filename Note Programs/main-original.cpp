/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: MacBookPro
 *
 * Created on January 15, 2016, 3:58 PM
 */

#include <cstdlib>
#include "emp.h"
#include <iostream>

using namespace std;

/*
 * 
 */

        
int main(int argc, char** argv) {
    
    Employee anEmployee("John", "Doe", 235);
    Manager aManager("Charles", "Howell", 235, 3);
    anEmployee.print();    // invokes Employee::print()
    aManager.print(); // invokes Manager::print()
    Employee* ePtr = &aManager;
    return 0;
}

