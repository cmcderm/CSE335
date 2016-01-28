#include <iostream>
#include "employee.h"
#include "manager.h"

using std::cout;
using std::endl;

int main(int argc char* argv[]){
	Employee empy = new Employee();
	empy.print();
	
	Manager jasnerd = new Manager("Jasnerd", "Borks", 3, 5);
	jasnerd.addEmployee("Dylan", "Marzipan", 1);
	
	delete empy;
	delete jasnerd;
}