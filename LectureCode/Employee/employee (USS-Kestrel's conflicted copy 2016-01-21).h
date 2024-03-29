#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <ostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::ostream;

class Employee{
	protected:
		string firstName, lastName;
		short dep;
	public:
		Employee(){
			firstName = "foo";
			lastName = "bar";
			dep = 1;
		}
		Employee(string fn, string ln, short d):firstName(fn),lastName(ln),dep(d){}
		virtual ~Employee(){}
		
		void print() const{
			cout << firstName << " " lastName << ", department " << dep << endl;
		}
};

#endif