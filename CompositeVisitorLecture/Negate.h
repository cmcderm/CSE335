/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Negate.h
 * Author: Connor
 *
 * Created on March 3, 2016, 1:42 PM
 */

#ifndef NEGATE_H
#define NEGATE_H

#include "Expr.h"


class Negate: public Expr{
protected:
    Expr* _negated;
    
public:
    Negate(Expr* n):_negated(n){};
    
    virtual ~Negate(){delete _negated;}
    Expr* getOperand(){return _negated;}
    
    virtual double compute(){
        return -(_negated->compute());
    }
    virtual void Accept(ExprVisitor* v){v->visitNegate(this);}
};

#endif /* NEGATE_H */

