/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Subtract.h
 * Author: Connor
 *
 * Created on March 3, 2016, 2:03 PM
 */

#ifndef SUBTRACT_H
#define SUBTRACT_H

class Subtract : public BinaryExpr{
public:
    Subtract(Expr* left, Expr* right):BinaryExpr(left, right){};
    virtual double compute(){
        return (_leftExpr->compute() - _rightExpr->compute());
    }
    virtual void Accept(ExprVisitor* v){v->visitSubtract(this);}
};

#endif /* SUBTRACT_H */

