/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PrintVisitor.h
 * Author: Connor
 *
 * Created on March 3, 2016, 3:11 PM
 */

#ifndef PRINTVISITOR_H
#define PRINTVISITOR_H

#include <iostream>

#include "Literal.h"
#include "Negate.h"
#include "Expr.h"

using std::cout;
using std::endl;

class PrintVisitor : public ExprVisitor{
public:
    virtual void visitLiteral(Literal* lit){
        cout << lit->getValue();
    }
    virtual void visitNegate(Negate* neg){
        cout << "-(";
        neg->getOperand()->Accept(this);
        cout<< ")";
    }
    virtual void visitAdd(Add* add){
        cout << "(";
        add->getLeft()->Accept(this); 
        cout << " + ";
        add->getRight()->Accept(this);
        cout << ")";
    }
    virtual void visitSubtract(Subtract* sub){
        cout << "(";
        sub->getLeft()->Accept(this); 
        cout << " - ";
        sub->getRight()->Accept(this);
        cout << ")";
    }
    virtual void visitMultiply(Multiply* mult){
        cout << "(";
        mult->getLeft()->Accept(this); 
        cout << " * ";
        mult->getRight()->Accept(this);
        cout << ")";
    }
    virtual void visitDivide(Divide* div){
        cout << "(";
        div->getLeft()->Accept(this); 
        cout << " / ";
        div->getRight()->Accept(this);
        cout << ")";
    }
};

#endif /* PRINTVISITOR_H */

