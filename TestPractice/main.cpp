/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Connor
 *
 * Created on February 15, 2016, 1:01 AM
 */

#include <cstdlib>
#include "unit.h"

using namespace std;


int main(int argc, char** argv) {
    Employee a("Alice", 'F');
    Employee b("Bob", 'M');
    Employee c("Carol", 'F');
    Group d("Group 1");
    
    d.add(&a);
    d.add(&b);
    d.add(&c);
    
    Contractor e ("Tommy", 'M');
    Group f("Group 2");
    f.add(&d);
    f.add(&e);
    
    f.print();
    return 0;
}

