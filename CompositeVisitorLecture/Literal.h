/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Literal.h
 * Author: Connor
 *
 * Created on March 3, 2016, 1:10 PM
 */

#ifndef LITERAL_H
#define LITERAL_H

#include "ExprVisitor.h"
#include "Expr.h"

class Literal : public Expr{
protected:
    double _value;
    
public:
    Literal(double val): _value(val){};
    double getValue(){return _value;}
    
    virtual double compute(){return _value;}
    
    virtual void Accept(ExprVisitor* v){v->visitLiteral(this);}
};

#endif /* LITERAL_H */

