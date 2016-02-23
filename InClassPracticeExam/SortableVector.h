/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SortableVector.h
 * Author: Connor
 *
 * Created on February 16, 2016, 12:53 PM
 */

#ifndef SORTABLEVECTOR_H
#define SORTABLEVECTOR_H

#include <vector>

using std::vector;

class SortableVector{
protected:
    vector<int*> m_iVector;
public:
    SortableVector(){}
    SortableVector(vector<int*> &iVector){}
    virtual ~SortableVector(){}

    virtual unsigned int getSize() const{
        return m_iVector.size();
    }
    
    virtual bool smaller(int, int) const =0;
    virtual void swap(int, int)=0;
};

#endif /* SORTABLEVECTOR_H */

