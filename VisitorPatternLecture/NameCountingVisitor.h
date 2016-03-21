/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NameCountingVisitor.h
 * Author: Connor
 *
 * Created on March 1, 2016, 2:27 PM
 */

#ifndef NAMECOUNTINGVISITOR_H
#define NAMECOUNTINGVISITOR_H

#include <stack>

#include "Entity.h"
#include "Directory.h"

using std::stack;

class NameCountingVisitor : public Visitor{
protected:
    stack<unsigned int> m_stack;
public:
    virtual void VisitFile(File* f){
        m_stack.push(f->getName().size());
    }
    virtual void VisitDirectory(Directory* d){
        //m_stack.push(d->getName().size());
        unsigned int sum = d->getName().size();
        for(int i = 0; i < d->getChildrenSize(); i++){
            d->getChild(i)->Accept(this);
        }
        
        for(int i=0; i < d->getChildrenSize(); i++){
            sum += m_stack.top();
            m_stack.pop();
        }
        m_stack.push(sum);
    }
    
    double getValue(){
        unsigned int result = m_stack.top();
        m_stack.pop();
        return result;
    }
};



#endif /* NAMECOUNTINGVISITOR_H */

