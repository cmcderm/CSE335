/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CompareStr.h
 * Author: Connor
 *
 * Created on March 22, 2016, 1:29 PM
 */

#ifndef COMPARESTR_H
#define COMPARESTR_H

#include <vector>
#include <string>

using std::vector;
using std::string;

class CompareStr : public SubstringInterface{
protected:
    vector<string> A;
    vector<string> B;
public:
    CompareStr(vector<string> a, vector<string> b){
        A = a;
        B = b;
    }
    int getSizeA(){
        return A.size();
    }
    int getSizeB(){
        return B.size();
    }
    bool isEqual(int i, int j){
        return A[i] == A[j];
    }
    
};

#endif /* COMPARESTR_H */

