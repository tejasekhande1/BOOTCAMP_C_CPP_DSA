// Constance variable and  Pointer in C++ 


#include <iostream> 
using namespace std ;
int main(){

	int a = 10;
	const int *ptr = &a ;
	cout << *ptr <<endl;
	cout << a <<endl;

	a++ ;
//	*ptr = 20 ;
//	cout << *ptr <<endl;
	cout << a <<endl;
	
	return 0 ;
}

// here error for using pointer to change value
//  but if a++ then their are no error
