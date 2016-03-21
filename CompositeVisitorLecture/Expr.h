/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Expr.h
 * Author: Connor
 *
 * Created on March 3, 2016, 1:11 PM
 */

#ifndef Expr_H
#define Expr_H

#include "ExprVisitor.h"

class Expr{
public:
    virtual double compute() = 0;
    virtual void Accept(ExprVisitor*) = 0;
};

#endif /* Expr_H */

