/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Divide.h
 * Author: Connor
 *
 * Created on March 3, 2016, 2:05 PM
 */

#ifndef DIVIDE_H
#define DIVIDE_H

class Divide : public BinaryExpr{
public:
    Divide(Expr* left, Expr* right):BinaryExpr(left, right){};
    virtual double compute(){
        return (_leftExpr->compute() / _rightExpr->compute());
    }
    virtual void Accept(ExprVisitor* v){v->visitDivide(this);}
};

#endif /* DIVIDE_H */

