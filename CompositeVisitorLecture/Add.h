/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Add.h
 * Author: Connor
 *
 * Created on March 3, 2016, 1:15 PM
 */

#ifndef ADD_H
#define ADD_H

#include "BinaryExpr.h"
#include "ExprVisitor.h"

class Add : public BinaryExpr{
public:
    Add(Expr* left, Expr* right):BinaryExpr(left, right){};
    virtual double compute(){
        return (_leftExpr->compute() + _rightExpr->compute());
    }
    virtual void Accept(ExprVisitor* v){v->visitAdd(this);}
};

#endif /* ADD_H */

