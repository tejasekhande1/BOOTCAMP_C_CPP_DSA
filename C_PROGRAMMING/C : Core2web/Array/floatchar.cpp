#include <iostream>
using namespace std ;
	int main(){
	
		char *cptr = 0 ;  // null pointer or *cptr = NULL ;
		char ch = 'A' ;
		
		cptr = &ch ;
//		cout << cptr << endl;
		cout << *cptr <<endl;
		cout << sizeof(cptr) <<endl;

		float x = 20.5 ;
		float *fptr = &x ;

		cout<< fptr <<endl;
		cout << sizeof(fptr) <<endl;

		int a = 10 ;
		int *iptr = &a ;

		cout << iptr << endl;
		cout << sizeof(iptr) <<endl;

		double b = 20.50 ;         // size = 8 byte
		double *dptr = &b ;

		cout << dptr <<endl;                
		cout << sizeof(dptr) <<endl;

		return 0 ;
	}


// void pointer can store address of any identifier
// all type of pointer have size 8 bytes
