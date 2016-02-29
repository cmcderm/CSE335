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
        bool sorted = false;
        int n = sortVect->getSize();
        while(!sorted){
            sorted = true;
            for(int i = 0; i < n; i++){
                if(compare(sortVect)){
                    sortVect->swap(i-1, i);
                    sorted = false;
                }
            }
            n--;
        }
    }
    virtual bool compare() const = 0;
};

class BubbleSortDecreasing : public BubbleSortInterface{
    virtual bool compare(SortableVector* sortVect) const {
        return sortVect->smaller();
    }
};   
    
class BubbleSortIncreasing : BubbleSortInterface {
    virtual bool compare(SortableVector* sortVect) const {
        return !sortVect->smaller();
    }
};
#endif /* BUBBLESORT_H */

