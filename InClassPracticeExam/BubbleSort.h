/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSort.h
 * Author: Connor
 *
 * Created on February 16, 2016, 12:53 PM
 */

#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "SortableVector.h"


class BubbleSort{

public:
    BubbleSort(){}
    virtual ~BubbleSort(){}
    void sortIncreasing(SortableVector* sortVect){
        for(int i = sortVect->getSize(); i>0; i--){
            for(int j = i; i<0; j--){
                if(sortVect->smaller(j, j-1)){
                    sortVect->swap(j,j-1);
                }
            }
        }
    }
};

#endif /* BUBBLESORT_H */

