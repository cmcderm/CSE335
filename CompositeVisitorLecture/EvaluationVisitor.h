/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EvaluationVisitor.h
 * Author: Connor
 *
 * Created on March 3, 2016, 2:07 PM
 */

#ifndef EVALUATIONVISITOR_H
#define EVALUATIONVISITOR_H

class EvaluationVisitor : public ExprVisitor{
public:
    virtual void visitLiteral(Literal*) = 0;
    virtual void visitNegate(Negate*) = 0;
    virtual void visitAdd(Add*) = 0;
    virtual void visitSubtract(Subtract*) = 0;
    virtual void visitMultiply(Multiply*) = 0;
    virtual void visitDivide(Divide*) = 0;
};

#endif /* EVALUATIONVISITOR_H */

