/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Connor
 *
 * Created on March 22, 2016, 1:28 PM
 */

#include <cstdlib>
#include <iostream>

#include "SubstringInterface.h"
#include "CompareInt.h"
#include "CompareStr.h"
#include "CalculateLongestSubstring.h"

int main(int argc, char** argv) {
    CalculateLongestSubstring CLS;
    vector<int> A;
    vector<int> B;
    SubstringInterface CI = new CompareInt(A, B);
    int result = CLS(CI);
    std::cout << result;
    return 0;
}

