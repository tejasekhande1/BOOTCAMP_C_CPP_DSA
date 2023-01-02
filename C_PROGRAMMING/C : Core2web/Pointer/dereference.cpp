#include <iostream>
using namespace std ;
	int main(){
		
		int a = 10 , b=20 ;
		int *iptr = NULL ; 
		iptr = &a ;

		cout<< &a << endl;      // address
		cout <<*iptr <<endl;    // value of a

		iptr = &b ;
		
		cout<< &a << endl;      // address
		cout <<*iptr <<endl;    // value of b
	
			
		return 0 ;
	}
