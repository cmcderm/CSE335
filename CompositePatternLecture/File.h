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

using std::cout;
using std::cin;

class File : public Entity{
public:
    File(string name, unsigned int size):Entity(name, size){}
    virtual void print(){
        cout << "(Filename=" << m_name << ", file size=" << m_size << ");";
    }
};

#endif /* FILE_H */

