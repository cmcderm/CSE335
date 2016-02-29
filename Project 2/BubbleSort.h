/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSort.h
 * Author: MacBookPro
 *
 * Created on February 28, 2016, 12:59 PM
 */


#ifndef BUBBLESORT_H
#define BUBBLESORT_H


#include "SortableVector.h"

class BubbleSortInterface{
public:
    void Sort(SortableVector* sortVect){
        
    }
    virtual 
};

class BubbleSortDecreasing : public BubbleSortInterface{
    void sortDecreasing(SortableVector* sortableVector){
        bool sorted = false;
        int n=sortableVector->getSize();
        while(!sorted){
            sorted=true;
            for(int i=1; i<n; i++){
                if(sortableVector->smaller(i-1,i)){
                    sortableVector->swap(i-1,i);
                    sorted=false;
                }
            }
            n--;
        }
    }
};   
    
class BubbleSortIncreasing : BubbleSortInterface {
    void sortIncreasing(SortableVector* sortableVector){
        bool sorted = false;
        int n=sortableVector->getSize();
        while(!sorted){
            sorted=true;
            for(int i=1; i<n; i++){
                if(!sortableVector->smaller(i-1,i)){
                    sortableVector->swap(i-1,i);
                    sorted=false;
                }
            }
            n--;
        }
    }
};









#endif /* BUBBLESORT_H */

