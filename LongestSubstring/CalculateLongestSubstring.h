/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CalculateLongestSubstring.h
 * Author: Connor
 *
 * Created on March 22, 2016, 1:29 PM
 */

#ifndef CALCULATELONGESTSUBSTRING_H
#define CALCULATELONGESTSUBSTRING_H

#include "SubstringInterface.h"

class CalculateLongestSubstring{
    int LCSubStr(SubstringInterface* alg){
        int count[alg->getSizeA()+1][alg->getSizeB()+1];
        int result = 0;
        for(int i = 0; i <= alg->getSizeA(); i++){
            for(int j = 0; j <= alg->getSizeB(); j++){
                if(i == 0 || j == 0){
                    count[i][j] = 0;
                }
                else if(alg->isEqual(i-1, j-1)){
                    count[i][j] = count[i-1][j-1] + 1;
                    result = max(result, count[i][j]);
                }
                else{count[i][j] = 0;}
            }
        }
        return result;
    }
    
    int max(int a, int b){
        return (a > b)? a : b;
    }
};

#endif /* CALCULATELONGESTSUBSTRING_H */

