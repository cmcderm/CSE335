/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   file.h
 * Author: Connor
 *
 * Created on February 23, 2016, 1:49 PM
 */

#ifndef FILE_H
#define FILE_H

#include <iostream>

#include "Visitor.h"

using std::cout;
using std::cin;

class File : public Entity{
public:
    File(string name, unsigned int size):Entity(name, size){}
    virtual void print() const {
        cout << "(Filename=" << m_name << ", file size=" << m_size << ");";
    }
    virtual void Accept(Visitor* v){v->VisitFile(this);}
};

#endif /* FILE_H */

