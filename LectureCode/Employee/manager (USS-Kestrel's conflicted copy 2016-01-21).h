#ifndef MANAGER_H
#define MANAGER_H

#include <vector>
#include "employee.h"

using std::vector;

class Manager : public Employee{
	protected:
		vector<Employee*> group;
		short level;
	public:
		Manager(){
			firstName = "foo";
			lastName = "bar";
			dep = 1;
			level = 1;
		}
		Manager(string fn, string ln, short d, short l){
			firstName = fn;
			lastName = ln;
			dep = d;
			level = l;
		}
		~Manager(){
			for(int i = 0; i<group.size();i++){
				delete group[i];
			}
			delete group;
		}
		
		void addEmployee(string fn, string ln, short d){
			group.push_back(new Employee(fn, ln, d));
		}
		
		void print() const{
			cout << firstName << " " << lastName << ", department " << dep << ", level " << level << endl;
			for(int i = 0; i<group.size(); i++){
				cout << "\t" << group[i]->firstName << " " << lastName << endl;
			}
			cout << endl;
		}
};

#endif