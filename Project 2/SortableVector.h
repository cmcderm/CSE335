/* 
 * File:   SortTableVector.h
 * Author: MacBookPro
 *
 * Created on February 2, 2016, 2:00 PM
 */

#ifndef SORTTABLEVECTOR_H
#define SORTTABLEVECTOR_H

#include <cstdlib>
#include <vector>

class SortableVector{
public:
    virtual unsigned int getSize() const=0;
    virtual bool smaller(int i, int j) const=0;
    virtual void swap(int i, int j) =0;
    virtual void print() const = 0;
    
    virtual ~SortableVector(){}
};

#endif /* SORTTABLEVECTOR_H */

