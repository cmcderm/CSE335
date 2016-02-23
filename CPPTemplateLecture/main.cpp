/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Connor
 *
 * Created on February 11, 2016, 1:36 PM
 */

#include <cstdlib>
#include <vector>

using namespace std;

/*
 * 
 */
template<class X> class database {
protected:
    vector<X> m_database;
    
public:
    database<X>();
    virtual ~database();

    void add(X a){
        m_database.push_back(a);
    }
};

int main(int argc, char** argv) {
    database<int> idb;
    
    idb.add(1);
    return 0;
}

