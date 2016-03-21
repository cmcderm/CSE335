/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Multiply.h
 * Author: Connor
 *
 * Created on March 3, 2016, 2:04 PM
 */

#ifndef MULTIPLY_H
#define MULTIPLY_H

class Multiply : public BinaryExpr{
public:
    Multiply(Expr* left, Expr* right):BinaryExpr(left, right){};
    
    virtual double compute(){
        return (_leftExpr->compute() * _rightExpr->compute());
    }
    
    virtual void Accept(ExprVisitor* v){v->visitMultiply(this);}
};

#endif /* MULTIPLY_H */

