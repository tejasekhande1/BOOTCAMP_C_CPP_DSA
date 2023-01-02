#include <iostream>
using namespace std ;

int main(){
	int a = 10 , b = 20 , c = 30 ;
	int *ptr1 = &a ;
	int *ptr2 = &b ;
	int *ptr3 = &c ;

	int* aptr[3] = {ptr1,ptr2,ptr3};

	// Address
	cout<< aptr[0] << endl;
	cout<< aptr[1] << endl;
	cout<< aptr[2] << endl;

	// value
	cout<< *(aptr[0]) << endl;
	cout<< *(aptr[1]) << endl;
	cout<< *(aptr[2]) << endl;

	//value through pointer
	cout<< *(*(aptr + 0)) <<endl;
	cout<< *(*(aptr + 1)) <<endl;
	cout<< *(*(aptr + 2)) <<endl;
	
	
	return 0 ;
}
