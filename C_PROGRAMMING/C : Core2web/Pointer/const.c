// Constance variable and  Pointer in C++ 


#include <stdio.h> 
//using namespace std ;
void main(){

	const int a = 10;
	int *ptr = &a ;
//	cout << *ptr <<endl;
	printf("%d",*ptr);

	*ptr = 20 ;
//	cout << *ptr <<endl;
	printf("%d",*ptr);
	
//	return 0 ;
}
