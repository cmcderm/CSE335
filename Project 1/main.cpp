#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char* argv[]){
	if(argc == 2){
		cout << argv[1] << endl;
	}
	else{
		cout << "you did it wrong" << endl;
	}
	
	return 1;
}