/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PrintVisitor.h
 * Author: Connor
 *
 * Created on March 1, 2016, 1:58 PM
 */

#ifndef PRINTVISITOR_H
#define PRINTVISITOR_H

#include "File.h"
#include "Entity.h"
#include "Directory.h"
#include "Visitor.h"


class PrintVisitor : public Visitor{
public:
    PrintVisitor(){}
    virtual ~PrintVisitor(){}

    virtual void VisitFile(File* f){
        cout << "(File Name=" << f->getName() << ", size=" << f->getSize() << ");";
    }
    virtual void VisitDirectory(Directory* d){
        cout << "Directory " << d->getName() << " contains (";
        for(int i = 0; i < d->getChildrenSize(); i++){
            d->getChild(i)->Accept(this);
        }
        cout << ");";
    }
};

#endif /* PRINTVISITOR_H */

