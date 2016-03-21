/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Connor
 *
 * Created on March 3, 2016, 1:08 PM
 */

#include <cstdlib>
#include <iostream>

#include "Expr.h"
#include "BinaryExpr.h"
#include "Negate.h"
#include "Add.h"
#include "Subtract.h"
#include "Multiply.h"
#include "Divide.h"
#include "ExprVisitor.h"
#include "Literal.h"
#include "Subtract.h"
#include "EvaluationVisitor.h"
#include "PrintVisitor.h"

using std::cout;
using std::endl;

/*
 * 
 */
int main(int argc, char** argv) {
    Subtract* exleft = new Subtract(new Negate(new Multiply( new Literal(6), new Literal(5))), new Literal(20));
    
    Expr* ex = new Add(exleft, new Divide(new Literal(100), new Subtract(new Literal(58), new Literal(-20))));
    
    Expr* exleftright = exleft->getLeft();
    
    cout << ex->compute() << endl;
    cout << ex->compute() << endl;
    cout << exleft->compute() << endl;
    
    //EvaluationVisitor EV;
    PrintVisitor PV;
    
    ex->Accept(&PV);
    
    return 0;
}

