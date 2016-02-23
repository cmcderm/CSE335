/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Connor
 *
 * Created on February 16, 2016, 12:50 PM
 */

#include <cstdlib>

#include "VectorCalculator.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    DualSetInteger twoSets;
    twoSets.addInt2A(1);
    twoSets.addInt2A(20);
    twoSets.addInt2A(10);
    twoSets.addInt2A(5);
    twoSets.addInt2A(25);
    twoSets.addInt2A(15);
    twoSets.addInt2B(200);
    twoSets.addInt2B(15);
    twoSets.addInt2B(15);
    twoSets.addInt2B(25);
    twoSets.addInt2B(2);
    twoSets.addInt2B(5);
    
    CalculateSetIntersection calSetIntersection;
    calSetIntersection.calculateSet(&twoSets);
    twoSets.printResult();
    
    CalculateSetComplement calSetComplement;
    calSetComplement.calculateSet(&twoSets);
    twoSets.printResult();
    
    return 0;
}

