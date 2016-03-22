/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Unit.h
 * Author: Connor McDermott
 *
 * Created on March 21, 2016, 9:27 PM
 */

#ifndef UNIT_H
#define UNIT_H

#include <string>

#include "Visitor.h"

using std::string;

class Unit{
public:
    virtual void Accept(Visitor*) = 0;
};

#endif /* UNIT_H */

