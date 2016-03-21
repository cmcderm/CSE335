/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ExprVisitor.h
 * Author: Connor
 *
 * Created on March 3, 2016, 1:31 PM
 */

#ifndef EXPRVISITOR_H
#define EXPRVISITOR_H

class Literal;
class Negate;
class Add;
class Subtract;
class Multiply;
class Divide;

class ExprVisitor{
public:
    virtual void visitLiteral(Literal*) = 0;
    virtual void visitNegate(Negate*) = 0;
    virtual void visitAdd(Add*) = 0;
    virtual void visitSubtract(Subtract*) = 0;
    virtual void visitMultiply(Multiply*) = 0;
    virtual void visitDivide(Divide*) = 0;
};

#endif /* EXPRVISITOR_H */

