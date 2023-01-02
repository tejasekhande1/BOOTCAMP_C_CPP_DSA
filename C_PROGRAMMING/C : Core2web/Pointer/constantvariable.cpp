// Constance variable and  Pointer in C++ 


#include <iostream> 
using namespace std ;
int main(){

	const int a = 10;
	int *ptr = &a ;
	cout << *ptr <<endl;

	*ptr = 20 ;
	cout << *ptr <<endl;
	
	return 0 ;
}
