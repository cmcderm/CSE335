/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CompareInt.h
 * Author: Connor
 *
 * Created on March 22, 2016, 1:29 PM
 */

#ifndef COMPAREINT_H
#define COMPAREINT_H

#include <vector>

using std::vector;

class CompareInt : public SubstringInterface{
protected:
    vector<int> A;
    vector<int> B;
public:
    CompareInt(){}
    CompareInt(vector<int> a, vector<int> b){
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
        return A[i] == B[j];
    }
};

#endif /* COMPAREINT_H */

