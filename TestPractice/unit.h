/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   unit.h
 * Author: Connor
 *
 * Created on February 15, 2016, 1:05 AM
 */

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

#ifndef UNIT_H
#define UNIT_H

class Unit{
protected:
    string _name;
    
public:
    virtual ~Unit(){}
    
    Unit(const string& name) : _name(name){}
    
    const string& getName() const {return _name;}
    virtual void print() const =0;
};


class Person : public Unit {
protected:
    char _gender;
public:
    
    Person(const string& name, const char& gender) : Unit(name), _gender(gender) {}
    
    virtual ~Person(){}
    
    char getGender(){return _gender;}
    virtual void print() const{ cout << getName();}
};

class Employee : public Person {
public:
    Employee(const string& name, const char& gender) : Person(name, gender){}
};

class Contractor : public Person {
public:
    Contractor(const string& name, const char& gender) : Person(name, gender){}
};

class Group : public Unit { 
protected:
    vector<Unit*> members;
public:
    Group(const string& name) : Unit(name){}
    
    void add(Unit* unit){members.push_back(unit);}
    
    void print()const{
        cout << getName() << ":(";
        vector<Unit*>::const_iterator it = members.begin();
        while(it != members.end()){
            (*it)->print();
            it++;
            if(it != members.end()){
                cout  << ",";
            }
        }
        cout << ")";
    }
};
#endif /* UNIT_H */

