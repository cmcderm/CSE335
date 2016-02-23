/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IntegerVector.h
 * Author: Connor
 *
 * Created on February 16, 2016, 12:54 PM
 */

#ifndef INTEGERVECTOR_H
#define INTEGERVECTOR_H

#include "SortableVector.h"


class IntegerVector : public SortableVector {
    vector<int> m_Integers;
    
public:
    IntegerVector(){}
    virtual ~IntegerVector(){}
    
    virtual bool smaller(int i, int j) const {
        return (i < j);
    }
    
    virtual void swap(int i, int j){
        int temp = m_Integers[i];
        m_Integers[i] = m_Integers[j];
        m_Integers[j] = temp;
    }
    
    virtual unsigned int getSize() const{
        return m_Integers.size();
    }
    
    virtual void print() const{
        for(int i = 0; m_Integers.size(); i++){
            std::cout << "Item " << i << ": " << m_Integers[i] << std::endl;
        }
    }
    
    virtual void addInteger(int i){
        m_Integers.push_back(i);
    }
    
    virtual int getElement(int i){
        return m_Integers[i];
    }
};

#endif /* INTEGERVECTOR_H */

