/* 
 * File:   BubbleSort.h
 * Author: MacBookPro
 *
 * Created on February 28, 2016, 12:59 PM
 */


#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "SortableVector.h"
#include "EmployeeDatabaseAdapter.h"

class BubbleSortInterface{
public:
    void Sort(EmployeeDatabaseAdapter* empDatabase){
        bool sorted = false;
        int n = empDatabase->getSize();
        while(!sorted){
            sorted = true;
            for(int i = 0; i < n; i++){
                if(compare(&empDatabase, i, i-1)){
                    empDatabase->swap(i-1, i);
                    sorted = false;
                }
            }
            n--;
        }
    }
    virtual bool compare(SortableVector* sortVect, int i, int j) const = 0;
    virtual bool compareReverse(SortableVector* sortVect, int i, int j) const = 0;
};

class BubbleSortFN : public BubbleSortInterface{
    virtual bool compare(EmployeeDatabaseAdapter* empDatabase, int i, int j) const {
        return empDatabase->compareFN(i, j);
    }
    virtual bool compareReverse(EmployeeDatabaseAdapter* empDatabase, int i, int j) const {
        return !empDatabase->compareFN(i, j);
    }
};   

class BubbleSortLN : public BubbleSortInterface{
    virtual bool compare(SortableVector* sortVect, int i, int j) const {
        return sortVect.compareLN(i, j);
    }
    
    virtual bool compareReverse(SortableVector* sortVect, int i, int j) const {
        return sortVect->compareLN(i, j);
    }
    
};
#endif /* BUBBLESORT_H */

