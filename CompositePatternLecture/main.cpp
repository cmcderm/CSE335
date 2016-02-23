/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Connor
 *
 * Created on February 23, 2016, 1:42 PM
 */

#include <cstdlib>
#include <string>

#include "Entity.h"
#include "File.h"
#include "Directory.h"

using std::string;

/*
 * 
 */
int main(int argc, char** argv) {
    Directory root("Root");
    File pr0n("don't open!", 1000000);
    Directory user("ConnorMcDermott");
    
    root.addEntity(&user);
    user.addEntity(&pr0n);
    
    File doc("l33t hax.txt", 1337);
    File buns("Bae.lol", 3333);
    File Andrew("Nerd.exe", 1);
    Directory trufax("Things that are cool");
    
    trufax.addEntity(&doc);
    trufax.addEntity(&buns);
    trufax.addEntity(&Andrew);
    
    user.addEntity(&trufax);
    
    root.print();
    return 0;
}

