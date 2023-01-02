// pointer + int
// pointer + char
// pointer + float
// pointer + pointer
// increment ptr++ ;
// substraction
// decrement 
// division multiplication
// pointer relational operation (pointer > pointer 2)


#include <iostream>
using namespace std ;

int main(){

	int a = 10;
	int b = 20 ;

	int *ptr = &a ;

	int *ansptr = ptr + 1 ;

	cout<< *ptr <<endl;
	cout << *ansptr <<endl;
//	cout <<  <<endl;

	return 0 ;
}
