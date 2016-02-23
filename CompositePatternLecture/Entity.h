/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Entity.h
 * Author: Connor
 *
 * Created on February 23, 2016, 1:44 PM
 */

#ifndef ENTITY_H
#define ENTITY_H

#include <string>

using std::string;

class Entity{
protected:
    string m_name;
    unsigned int m_size;
    Entity(string name, unsigned int size):m_name(name),m_size(size){}
public:
    virtual string getName() const{
        return m_name;
    }
    
    virtual unsigned int getSize() const {
        return m_size;
    }
    
    virtual void print() const=0;
};

#endif /* ENTITY_H */

