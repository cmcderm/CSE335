/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VectorCalculator.h
 * Author: Connor
 *
 * Created on February 16, 2016, 1:23 PM
 */

#ifndef VECTORCALCULATOR_H
#define VECTORCALCULATOR_H

#include <iostream>

#include "SortableVector.h"
#include "BubbleSort.h"
#include "IntegerVector.h"


class DualSetInterface{
public:
    virtual int getASize()=0;
    virtual int getBSize()=0;
    virtual void sortDualSet()=0;
    virtual char compare(int i, int j)=0;
    virtual void AddResultFromA(int i)=0;
    virtual void AddResultFromB(int j)=0;
};

class DualSetInteger : public DualSetInterface{
protected:
    IntegerVector* A;
    IntegerVector* B;
    IntegerVector* C;
public:
    DualSetInteger(){
        A = new IntegerVector();
        B = new IntegerVector();
        C = new IntegerVector();
    }
    
    virtual ~DualSetInteger(){
        delete A;
        delete B;
        delete C;
    }
    
    int getASize(){
        return A->getSize();
    }
    
    int getBSize(){
        return B->getSize();
    }
    
    void sortDualSet(){
        BubbleSort bs;
        bs.sortIncreasing(A);
        bs.sortIncreasing(B);
    }
    
    char compare(int i, int j){
        if((i>=A->getSize()) || (j>=B->getSize())){
            std::cout << "Index out of range in compare(" << i << "," << j << ") in class IntegerDualSet." << std::endl;
        } else{
            if(A->getElement(i) < B->getElement(j)){
                return '<';
            }else if(A->getElement(i) < B->getElement(j)){
                return '>';
            } else {
                return '=';
            }
        }
    }
    
    void AddResultFromA(int i){
        C->addInteger(A->getElement(i));
    }
    
    void AddResultFromB(int j){
        C->addInteger(A->getElement(j));
    }
    
    void addInt2A(int element){
        A->addInteger(element);
    }
    
    void addInt2B(int element){
        B->addInteger(element);
    }
    
    void printResult(){
        C->print();
    }
};

class CalculateSetTemplate{
public:
    void calculateSet(DualSetInterface* dualSet){
        dualSet->sortDualSet();
        
        int i=0, j=0;
        int aSize = dualSet->getASize();
        int bSize = dualSet->getBSize();
        while((i<aSize) && (j<bSize)){
            switch(dualSet->compare(i,j)){
                case '<':
                    processLessthan(dualSet, i, j);
                    break;
                case '>':
                    processGreaterthan(dualSet, i, j);
                    break;
                case '=':
                    processEqual(dualSet, i, j);
                    break;
            }
        }
    }
    
    virtual void processLessthan(DualSetInterface* dualSet, int& i, int& j) = 0;
    virtual void processGreaterthan(DualSetInterface* dualSet, int& i, int& j) = 0;
    virtual void processEqual(DualSetInterface* dualSet, int& i, int& j) = 0;
};

class CalculateSetIntersection : public CalculateSetTemplate{
public:
    virtual void processLessthan(DualSetInterface* dualSet, int& i, int& j){
        i++;
    }
    
    virtual void processGreaterthan(DualSetInterface* dualSet, int& i, int& j){
        j++;
    }
    
    virtual void processEqual(DualSetInterface* dualSet, int& i, int& j){
        dualSet->AddResultFromA(i);
        i++;
        j++;
    }
};

class CalculateSetComplement : public CalculateSetTemplate{
public:
    virtual void processLessthan(DualSetInterface* dualSet, int& i, int& j){
        dualSet->AddResultFromA(i);
        i++;
    }
    
    virtual void processGreaterthan(DualSetInterface* dualSet, int& i, int& j){
        j++;
    }
    
    virtual void processEqual(DualSetInterface* dualSet, int& i, int& j){
        i++;
        j++;
    }
};

#endif /* VECTORCALCULATOR_H */

