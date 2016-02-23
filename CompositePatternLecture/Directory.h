/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Directory.h
 * Author: Connor
 *
 * Created on February 23, 2016, 1:52 PM
 */

#ifndef DIRECTORY_H
#define DIRECTORY_H

#include <vector>
#include <algorithm>

#include "Entity.h"

using std::vector;
using std::remove;

class Directory:public Entity{
protected:
    vector<Entity*> entries;
public:
    Directory(string name):Entity(name, 0){}
    
    virtual void addEntity(Entity* entry){
        entries.push_back(entry);
        m_size += entry->getSize();
    }
    
    virtual void removeEntity(Entity* entry){
        remove(entries.begin(), entries.end(), entry);
        m_size -= entry->getSize();
    }
    
    Entity* getChild(int i) const{
        return entries[i];
    }
    
    unsigned int getChildrenCount() const {
        return entries.size();
    }
    
    virtual void print(){
        cout << "Directory " << m_name << " contains: (";
        for(int i = 0; i < entries.size(); i++){
            entries[i]->print();
        }
        cout << ");";
    }
};

#endif /* DIRECTORY_H */

