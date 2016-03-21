/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Expr.h
 * Author: Connor
 *
 * Created on March 3, 2016, 1:10 PM
 */

#ifndef EXPR_H
#define EXPR_H

#include "Expr.h"

class BinaryExpr : public Expr{
protected:
    Expr* _leftExpr;
    Expr* _rightExpr;
    
public:
    BinaryExpr(Expr* left, Expr* right):_leftExpr(left), _rightExpr(right){};
    virtual ~BinaryExpr(){delete _leftExpr; delete _rightExpr;}
    
    virtual Expr* getLeft(){return _leftExpr;}
    virtual Expr* getRight(){return _rightExpr;}
    
    virtual double compute() = 0;
    virtual void Accept(ExprVisitor*) = 0;
};

#endif /* EXPR_H */

