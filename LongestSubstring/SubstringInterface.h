/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SubstringInterface.h
 * Author: Connor
 *
 * Created on March 22, 2016, 1:29 PM
 */

#ifndef SUBSTRINGINTERFACE_H
#define SUBSTRINGINTERFACE_H

class SubstringInterface{
public:
    virtual int getSizeA()=0;
    virtual int getSizeB()=0;
    virtual bool isEqual(int, int)=0;
};

#endif /* SUBSTRINGINTERFACE_H */

