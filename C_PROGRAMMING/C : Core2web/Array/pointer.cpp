#include <iostream>
using namespace std ;
	int main(){
	int a = 3;
	int* b = &a ;

	// & ------> address of operator
	
	cout << "The Address of a is "<< &a <<endl;
	cout<<"The Address of a is "<< b <<endl;

	//* -----> (value at) Dereference operator
	
	cout<<"The value at address b is "<< *b << endl;
		return 0 ;
	}
