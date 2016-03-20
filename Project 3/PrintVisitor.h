/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PrintVisitor.h
 * Author: MacBookPro
 *
 * Created on March 2, 2016, 12:37 PM
 */

#ifndef PRINTVISITOR_H
#define PRINTVISITOR_H


#include "Visitor.h"
#include "Entity.h"
#include "Directory.h"

class PrintVisitor: public Visitor{
    public:
        virtual void VisitFile(File* file){
            cout<<"(file name="<<file->getName()<<", file size="<<
                    file->getSize()<<"); ";
        }
        
        virtual void VisitDirectory(Directory* dir){
            cout<<"Directory "<<dir->getName()<<" contains: (";
            for (int i=0; i<dir->getChildrenSize();i++){
                dir->getChild(i)->Accept(this);
            }
            cout<<"); ";
        }
    
    
    
    
    
    
    
    
    
    
    
};







#endif /* PRINTVISITOR_H */

